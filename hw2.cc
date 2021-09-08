#include <iostream>
using namespace std;

int main() {
	int temp, a, b, c, min, max;
	
	cin >> temp;
	if(temp >= 1000 || temp < 0 ) {
		cout << "ERROR\n";
		return 0;
	}

	a = temp / 100;
	if(a == 1 || a == 4 || a == 7) {
		min = (a-1) * 100 + 99;
		max = (a+1) * 100;
		cout << min << " " << max ;
		return 0;
	}

	b = (temp / 10) % 10;
	if(b == 1 || b == 4 || b == 7) {
		min = a * 100 + (b-1) * 10 + 9;
		max = a * 100 + (b+1) * 10;
		cout << min << " " << max ;
		return 0;
	}

	c = temp % 10;
	if(c == 1 || c == 4 || c == 7) {
		min = temp - 1;
		max = temp + 1;
		cout << min << " " << max ;
		return 0;
	}
}
