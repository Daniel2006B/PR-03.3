// PR-03.3.cpp
// <Брудний, Данило>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double R;
	double x;
	double y;
	double Pi = 4 * atan(1.);

	cout << "R = ";
	cin >> R;

	cout << "x = ";
	cin >> x;

	if (x <= -7 - R)
		y = R;			// формулая прямої (рівної)

	else
		if (x >= -7 - R && x <= -7)
			y = sqrt(R * R - (x - R) * (x - R));  //формула дуги

		else
			if (x >= -7 && x <= -7 + R)
				y = sqrt(R * R - (x - R) * (x - R));   //формула дуги

			else
				if (x >= -7 + R && x <= -4)
					y = R;			 //формула прямої (рівної)

				else
					if (x >= -4 && x <= 0)
						y = -1. / 2. * x;	//формула прямої

					else
						if (x >= 0 && x <= Pi / 2)
							y = sin(x);			//синус

						else
							if (x >= Pi / 2 && x <= Pi)
								y = sin(x);		//синус
							else
								if (x >= Pi)
									y = x;	//звичайна формула пря

	cout << "y = " << y << endl;


	return 0;
}