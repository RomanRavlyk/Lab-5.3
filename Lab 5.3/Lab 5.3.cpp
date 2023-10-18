#include <iostream>
#include <cmath>
using namespace std;
double j(const double x);
int main()
{
	double gp, gk, o;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double k = gp;
	while (k <= gk)
	{
		o = j(1 + k + j(k)) + pow(j(1 + pow(k, 2)), 2);
		cout << k << ")" << o << endl;
		k += dg;
	}
	return 0;
}
double j(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + exp(abs(x))) / (pow(cos(x), 2) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double g = pow(x, 2 * i - 1) / (2 * i + 1) * ((2 * i + 1) - 1);
			a *= g;
			S += a;
		} while (i < 5);
		return S;
	}
}