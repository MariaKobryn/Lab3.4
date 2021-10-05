// Lab3.4.cpp
// < Кобрин Марії >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; 
	double a;
	double b;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	// розгалуження в повній формі
	if ((y <= 0 && x <= 0 && y >= -b && x * x + y * y <= R * R) || (x >= 0 && x <= a && y >= 0 && y <= b && x * x + y * y >= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}

	