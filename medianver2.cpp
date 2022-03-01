#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	/*
	a >= b
	c >= d
	b ~ d
	b >= d
	
	a >= b
	c ~ e
	c >= e
	
	b ~ e
	b >= e
	
	a >= b
	c
	
	b >= c
	*/
	if (a < b)
		swap (a, b);
	if (c < d)
		swap (c, d);
	if (b < d) {
		swap(b, d);
	}
	if (c < e)
		swap(c, e);
	if (b < e) {
		swap(b, e);
	}
	if (b < c) {
		swap(b, c);
	}
	cout << c;
	return 0;	
}
