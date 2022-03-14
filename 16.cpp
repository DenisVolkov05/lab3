#include <cmath>
#include <iostream>
using namespace std;
double f(double x)
{
	return x * tan(x) - log(fabs(3.14 / 3 + 1 - x));
}
double fun(double a, double b, double eps)
{
	setlocale(LC_ALL, "Russian");
	double c;
	int kol = 0;
	do
	{
		c = (a + b) / 2;
		if (f(a) * f(c) < 0)
		{
			b = c;
		}
		else a = c;
		kol++;
	} while (b - a > eps && kol < 50000);
	cout << "Количество операций " << kol << endl;
	return (a + b) / 2;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Корень " << fun(0, 3.14 / 3, 0.00001);
}