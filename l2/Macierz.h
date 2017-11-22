#pragma once
class Macierz
{
public:
	Macierz();
	Macierz(int wiersze, int kolumny);
	Macierz(const Macierz &m);
	Macierz(Macierz&& m);
	~Macierz();
	Macierz dodaj(Macierz m);
	void wypelnij();
	void drukuj();
private:
	int w;
	int k;
	int **p;
};

