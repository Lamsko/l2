// l2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Macierz.h"


int main()
{
	{
		Macierz m1(2, 2);
		Macierz m2;
	}
	Macierz m1(2, 2);
	Macierz m2(2, 2);
	Macierz m3;
	m3.drukuj();
	m1.drukuj();
	m1.wypelnij();
	m2.wypelnij();
	m1.drukuj();
	m2.drukuj();
	m3 = m2;

	return 0;
}

