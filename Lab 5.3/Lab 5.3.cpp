#include <iostream>
#include <cmath>
using namespace std;
double j(double x);

int main()
{
	double kp, kk, o;
	int n;
	cout << "gp = "; cin >> kp;
	cout << "gk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double dk = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		o = j(1 + k + j(k)) + pow(j(1 + pow(k, 2)), 2);
		cout << k << ")" << o << endl;
		k += dk;
	}
	return 0;
}

double j(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + exp(abs(x))) / ((cos(x) * cos(x)) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double g = x / ((2 * i + 1) * ((2 * i + 1) - 1));
			a *= g;
			S += a;
		} while (i <= 5);
		return S;
	}
}