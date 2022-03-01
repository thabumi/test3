#include <bits/stdc++.h>
 
using namespace std;
long long ans;
void q(long long a, long long b) {
	cout << "? " << a << " " << b << '\n';
	cout << flush;
	cin >> ans;
}
void an(vector<int>& v) {
	cout << "!";
	for (int i = 1; i < v.size(); i++) {
		cout << " " << v[i];
	}
	cout << '\n';
	cout << flush;
}
void run_case() {
	long long n;
	cin >> n;
	vector<int> v(n + 1);
	if (n == 3) {
		q(1, 2);
		if (ans == 2) {
			q(1, 3);
			if (ans == 3) {
				v[1] = 1;
				v[2] = 2;
				v[3] = 3;
				an(v);
//				cout << "! 1 2 3\n";
//				cout << flush; 
			}
			else {
				cout << "! 2 1 3\n";
				cout << flush;
			}
		}
		else if (ans == 3) {
			q(1, 3);
			if (ans == 2) {
				cout << "! 1 3 2\n";
				cout << flush;
			}
			else {
				cout << "! 3 1 2\n";
				cout << flush;
			}
		}
		else {
			q(1, 3);
			if (ans == 2) {
				cout << "! 2 3 1\n";
				cout << flush;
			}
			else {
				cout << "! 3 2 1\n";
				cout << flush;
			}
		}
		
	}
	else {
		vector<long long> A(n + 1);
		for (int i = 2; i <= n; i++) {
			
			q(1, i);
			A[i] = ans;
		}
		long long d = A[2];
		for (int i = 3; i <= n; i++) {
			d = __gcd(d, A[i]);
		}
		v[1] = d;
		for (int i = 2; i <= n; i++) {
			v[i] = A[i] / v[1];
		}
		an(v);
	}
}
int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
