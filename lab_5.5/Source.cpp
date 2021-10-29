// lab_5.5.cpp
// < Паньків Богдан >
// Лабораторна робота № 5.5
//Рекурсивні функції//
// Варіант 17
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
double Func( double b, double  q,  double  n, double &bn,int &k)

{
	
	if (n > 0) {
		k += 1;
		bn *= q;
		double t = b * q;
		return t + Func(t, q, n-1, bn,k);
	}
	else
		return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double b, q ,n,bn,s=0;
	int level = 0;
	cout << "Перший член прогресії : "; cin >> b ;
	cout << "Знаменник прогресії :" ; cin >>  q;
	cout << "Номер n-го члена :"; cin >> n;
	bn = b;
	
	cout << "Сума " << n << "членів :" << Func(b, q, n, bn,level) << endl;
	cout << n << "-ий член :" << bn << endl;
	cout << "level = " << level << endl;
	cout << "depth = " << level + 1 << endl;

	return 0;
}