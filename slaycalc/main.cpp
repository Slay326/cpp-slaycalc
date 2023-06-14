#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415928;
int addition(int a, int b)
{
	return a + b;
}
int subtraktion(int a, int b)
{
	return a - b;
}
int multiplikation(int a, int b)
{
	return a * b;
}
int division(int a, int b)
{
	return a / b;
}
void trigometrie(double a)
{

	// Umwandlung von Grad in Bogenmaﬂ
	double bogenmass = (a * PI) / 180.0;

	double sinus = floorf(100 * sin(bogenmass)) / 100;
	double kosinus = floorf(100 * cos(bogenmass)) / 100;
	double tangens = floorf(100 * tan(bogenmass)) / 100;

	double asinus = floorf(100 * asin(sin(bogenmass))) / 100;
	double akosinus = floorf(100 * acos(cos(bogenmass))) / 100;
	double atangens = floorf(100 * atan(tan(bogenmass))) / 100;

	cout << "Sinus: " << sinus << endl;
	cout << "Kosinus: " << kosinus << endl;
	if (fmod (a,90) == 0)
	{
		cout << "Tangens: " << "nicht definiert" << endl;
	}else
	cout << "Tangens: " << tangens << endl;

	cout << "aSinus: " << asinus << endl;
	cout << "aKosinus: " << akosinus << endl;
	cout << "aTangens: " << atangens << endl;
}
void solveQ(double a, double b, double c)
{
	double discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		double root1 = (-b + sqrt(discriminant)) / (2 * a);
		double root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Die quadratische Gleichung hat zwei reelle Lˆsungen:" << endl;
		cout << "x1 = " << root1 << endl;
		cout << "x2 = " << root2 << endl;
	}
	else if (discriminant == 0) {
		double root = -b / (2 * a);
		std::cout << "Die quadratische Gleichung hat eine doppelte reelle Lˆsung:" << endl;
		std::cout << "x = " << root << endl;
	}
	else {
		double realPart = -b / (2 * a);
		double imaginaryPart = sqrt(-discriminant) / (2 * a);
		cout << "Die quadratische Gleichung hat zwei komplexe Lˆsungen:" << endl;
		cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
		cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
	}
}


int main()
{
	int rechenart;
	cout << floorf(100 * cos(2)) / 100 << endl;
	cout << "Bitte w‰hlen Sie die gew¸nschte Rechenart: " << endl;
	cout << "1. Taschenrechner" << endl;
	cout << "2. Trigenometrie" << endl;
	cout << "3. Quadratische Funktionen" << endl;
	cin >> rechenart;
	if (rechenart == 1)
	{
		double i1, i2, ergebnis;
		char i3;
		bool validOperator = false;
		cout << "Bitte geben Sie die erste Zahl ein: " << endl;
		cin >> i1;
		cout << "Bitte geben Sie die zweite Zahl ein: " << endl;
		cin >> i2;
		cout << "W‰hlen Sie die gew¸nschten mathematischen Operator aus :" << endl << "+ f¸r addieren" << endl << "- f¸r subtrahieren" << endl << "* f¸r multiplizieren" << endl << "/ f¸r dividieren" << endl;
		do
		{
			cin >> i3;
			double ergebnis;
			switch (i3)
			{
			case  ('+'):

				ergebnis = i1 + i2;
				cout << "Das Ergebnis ist: " << ergebnis;
				validOperator = true;
				break;
			case  ('-'):

				ergebnis = i1 - i2;
				cout << "Das Ergebnis ist: " << ergebnis;
				validOperator = true;
				break;
			case  ('*'):

				ergebnis = i1 * i2;
				cout << "Das Ergebnis ist: " << ergebnis;
				validOperator = true;
				break;
			case ('/'):

				ergebnis = i1 / i2;
				cout << "Das Ergebnis ist: " << ergebnis;
				validOperator = true;
				break;
			default:
				cout << "Ung¸ltiges Zeichen eingegeben!" << endl;
				validOperator = false;
				break;
			}
		} while (!validOperator);
	}
	else if (rechenart == 2)
	{
		double winkel;
		cout << "Bitte geben Sie den Winkel in Grad ein: ";
		cin >> winkel;
		trigometrie(winkel);
	}
	else if (rechenart == 3)
	{
		double q1, q2, q3;
		cout << "Geben Sie die Koeffizienten der quadratischen Gleichung ein: " << endl;
		cout << "a: " << endl;
		cin >> q1;
		cout << "b: " << endl;
		cin >> q2;
		cout << "c: " << endl;
		cin >> q3;
		solveQ(q1, q2, q3);
	}
}



