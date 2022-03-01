#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a < b)
		swap (a, b);
	if (c < d)
		swap (c, d);
	if (b < d) {
		if (a < e)
			swap(a, e);
		if (e < d) {
			if (a < d)
				cout << a;
			else
				cout << d;
		}
		else {
			if (c < e)
				cout << c;
			else
				cout << e;
		}
	}
	else {
		if (c < e)
			swap(c, e);
		if (e < b) {
			if (c < b)
				cout << c;
			else
				cout << b;
		}
		else {
			if (a < e)
				cout << a;
			else 
				cout << e;
		}
	}
	return 0;	
}
