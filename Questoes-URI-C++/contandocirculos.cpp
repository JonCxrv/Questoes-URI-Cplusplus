#include <iostream>

using namespace std;

int main()
{
	long long int n,d,q,qntpartes;
	cin >> n;

	d = (n* (n - 1)) / 2;
	q = (n * (n - 1) * (n - 2) * (n - 3)) / (4*3*2*1);
	qntpartes = 1 + q + d;
	cout << qntpartes << endl;

	return 0 ;
	
}