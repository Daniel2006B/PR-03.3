// PR-03.3.cpp
// <�������, ������>
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 3

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
		y = R;			// �������� ����� (����)

	else
		if (x >= -7 - R && x <= -7)
			y = sqrt(R * R - (x - R) * (x - R));  //������� ����

		else
			if (x >= -7 && x <= -7 + R)
				y = sqrt(R * R - (x - R) * (x - R));   //������� ����

			else
				if (x >= -7 + R && x <= -4)
					y = R;			 //������� ����� (����)

				else
					if (x >= -4 && x <= 0)
						y = -1. / 2. * x;	//������� �����

					else
						if (x >= 0 && x <= Pi / 2)
							y = sin(x);			//�����

						else
							if (x >= Pi / 2 && x <= Pi)
								y = sin(x);		//�����
							else
								if (x >= Pi)
									y = x;	//�������� ������� ���

	cout << "y = " << y << endl;


	return 0;
}