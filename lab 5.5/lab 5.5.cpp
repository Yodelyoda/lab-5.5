#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int f(int a, int d,int n);
int S(int a, int d, int n);
int main() 
{
	int a,d,n;
	cout << "Enter the first term of the arithmetic progression (a) ="  ;
	cin >> a;
	cout << " "<< endl;
	cout << "Enter the difference of arithmetic progression (d) =";
	cin >> d;
	cout << " " << endl;
	cout << "Enter (n) of the term of the arithmetic progression that you want to find =";
	cin >> n;
	cout << " " << endl;
	int k = f(a,d,n);
	cout <<"n-th term =  "<< k << endl;
	int t = S(a, d, n);
	cout <<"S of progression =  " << t << endl;
	return 0;
}
int f(int a, int d,int n)
{
	int an;
	an = a +(n-1)*d;
	return an;
}
int S(int a, int d, int n)
{
	int sn;
	sn = ((2*a + (n - 1) * d)/2)*n;
	return sn;
}