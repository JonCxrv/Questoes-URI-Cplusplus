#include <iostream>

using namespace std;

int main() {
	int m, a, b,filhovelho;
	cin >> m >> a >> b;
	filhovelho = m - (a + b); 

	if (a >= b && a >= filhovelho) cout << a << endl; 
	else if (b >= a && b >= filhovelho) cout << b << endl; 
	else if (filhovelho >= a && filhovelho >= b) cout << filhovelho << endl; 
	return 0;
}