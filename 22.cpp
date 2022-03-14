#include <iostream>
#include <cmath>
using namespace std;
double fun(double x0, double x1, double eps)
{
	setlocale(LC_ALL, "Russian");
	double x = x1, f, f0 , x_0 = x0;
	int kol = 0;
	do 
	{
		x0 = x_0;
		x_0 = x;
		f = pow(x, 3) + 1 - pow(2.72, x);
		f0 = pow(x0, 3) + 1 - pow(2.72, x0);
		x = x - (x - x0) * f / (f - f0);
		kol++;
	} while (fabs(f) > eps && kol < 50000);
	cout << "Количество операций " << kol << endl;
	return x;
}
int main()
{
	cout << fun(0, 1, 0.00001);
}