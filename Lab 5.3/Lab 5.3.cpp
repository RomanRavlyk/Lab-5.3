#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double j(double x);

int main()
{
	double kp, kk, o;
	int n;
	cout << "gp = "; cin >> kp;
	cout << "gk = "; cin >> kk;
	cout << "n = "; cin >> n;
	
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "qp" << " |"
		<< setw(10) << "qk" << " |"
		<< setw(10) << "z" << " |"
		<< setw(10) << "q" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	double dk = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		o = j(1 + k + j(k)) + pow(j(1 + pow(k, 2)), 2);
		cout << "|" << setw(7) << setprecision(2) << kp << " |"
			<< setw(10) << setprecision(5) << kk << " |"
			<< setw(10) << o << " |"
			<< setw(10) << k << " |"
			<< endl;
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
		double a = x;
		S = a;
		do
		{
			i++;
			double g = x * x/ (2 * i) * (2 * i); 
			a *= g;
			S += a;
		} while (i <= 5);
		return S;
	}
}