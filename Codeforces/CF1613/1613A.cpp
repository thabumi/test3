#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n, x, y, a, b;
	string s;
	int x1, p1, x2, p2;
	cin >> x1 >> p1 >> x2 >> p2;
	int k = p1 - p2;
	if (k > 0) {
		while (k > 0) {
			x1 *= 10;
			k--;
			if (x1 > x2) {
				cout << ">\n";
				return;
			}
		}
		if (x1 < x2) {
			cout << "<\n";
			return;
		}
		cout << "=\n";
		return;
	}
	else if (k < 0) {
		k = -k;
		while (k > 0) {
			x2 *= 10;
			k--;
			if (x2 > x1) {
				cout << "<\n";
				return;
			}
		}
		if (x2 < x1) {
			cout << ">\n";
			return;
		}
		cout << "=\n";
		return;	
	}
	else {
		if (x1 > x2) {
			cout << ">\n";
		}
		else if (x1 == x2) {
			cout << "=\n";
		}
		else {
			cout << "<\n";
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
