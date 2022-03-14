#include <iostream>
#include <cmath>
using namespace std;
double fun(double x, double eps)
{
    setlocale(LC_ALL, "Russian");
    double zn;
    int kol = 0;
    do {
        zn = x;
        x = sin(x + 1);
        kol++;
    } while (fabs(zn - x) > eps && kol < 50000);
    cout << "Количество операций " << kol << endl;
    return zn;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Корень " << fun(0, 0.00005);
}