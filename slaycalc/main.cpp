#include <iostream>
#include <cmath>
using namespace std;

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
void solveQ(double a, double b, double c)
{
	double discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
		double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
		std::cout << "Die quadratische Gleichung hat zwei reelle Lˆsungen:" << std::endl;
		std::cout << "x1 = " << root1 << std::endl;
		std::cout << "x2 = " << root2 << std::endl;
	}
	else if (discriminant == 0) {
		double root = -b / (2 * a);
		std::cout << "Die quadratische Gleichung hat eine doppelte reelle Lˆsung:" << std::endl;
		std::cout << "x = " << root << std::endl;
	}
	else {
		double realPart = -b / (2 * a);
		double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
		std::cout << "Die quadratische Gleichung hat zwei komplexe Lˆsungen:" << std::endl;
		std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
		std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
	}
}


int main()
{
	bool t = false;
	bool q = false;
	double i1, i2;
	
	const double PI = 3.1415928;
	cout << "Mˆchten Sie trigenometrische Funktionen lˆsen? " << endl;
	cin >> t;
	if (t ==  true)
	{
		double t1;
		cout << "Bitte geben Sie den Winkel in Grad ein: ";
		cin >> t1;

		// Umwandlung von Grad in Bogenmaﬂ
		double bogenmass = t1 * PI / 180.0;

		double sinus = sin(bogenmass);
		double kosinus = cos(bogenmass);
		double tangens = tan(bogenmass);

		double asinus = asin(sin(bogenmass));
		double akosinus = acos(cos(bogenmass));
		double atangens = atan(atan(bogenmass));

		cout << "Sinus: " << sinus << endl;
		cout << "Kosinus: " << kosinus << endl;
		cout << "Tangens: " << tangens << endl;
		cout << "aSinus: " << asinus << endl;
		cout << "aKosinus: " << akosinus << endl;
		cout << "aTangens: " << atangens << endl;
	}
	else
	{


		cout << "Mˆchten Sie quadratische Funktionen lˆsen? " << endl;
		cin >> q;
	
	if (q == true)
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
	else if (t == false && q == false)
	{
		char i3;
		bool validOperator = false;
		cout << "Bitte geben Sie die erste Zahl ein: " << endl;
		cin >> i1;
		cout << "Bitte geben Sie die zweite Zahl ein: " << endl;
		cin >> i2;
		cout << "W‰hlen Sie die gew¸nschten mathematischen Operator aus :" << endl << "+ addieren" << endl << "- subtrahieren" << endl << "* multiplizieren" << endl << "/ dividieren" << endl;
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
		}while (!validOperator);
	} 

	return 0;

}