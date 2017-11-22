#include "stdafx.h"
#include "Macierz.h"
#include <iostream>

using namespace std;

Macierz::Macierz()
{
	w = 0;
	k = 0;
	p = new int*[w];
}

Macierz::Macierz(int wiersze, int kolumny)
{
	w = wiersze;
	k = kolumny;
	p = new int*[w];
	for (int i = 0; i < w; i++)
	{
		p[i] = new int[k];
		for (int j = 0; j < k; j++)
			p[i][j] = 0;
	}
}

Macierz::Macierz(const Macierz &m)
{
	cout << "Konstruktor kopiujacy" << endl;
	w = m.w;
	k = m.k;
	p = new int*[w];
	*p = *m.p;
}

Macierz::Macierz(Macierz && m)
{
	cout << "Move konstruktor" << endl;
	w = m.w;
	k = m.k;
	p = new int*[w];
	*p = *m.p;
}


Macierz::~Macierz()
{
	for (int i = 0; i < w; i++)
		delete p[i];
	delete p;
}

Macierz Macierz::dodaj(Macierz m)
{
	Macierz mw(w, k);
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			mw.p[i][j] = p[i][j] + m.p[i][j];
		}
	}
	return mw;
}

void Macierz::wypelnij()
{
	cout << "Wypelnij macierz: " << endl;
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> p[i][j];
		}
	}
}

void Macierz::drukuj()
{
	cout << "Macierz: " << endl;
	for (int i = 0; i < w; i++)
	{
		cout << endl;
		for (int j = 0; j < k; j++)
			cout << p[i][j] << " ";
	}
	cout << endl;
}
