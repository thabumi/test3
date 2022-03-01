#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, a, b;
	cin >> n >> a >> b;
	if (n == 1) {
		if (a == 0 && b == 0) {
			cout << 1 << '\n';
			return;
		}
		else {
			cout << -1 << '\n';
			return;
		}
	}
	swap(a, b);
	vector<int> v(n + 1);
	for (int i = 0; i <= n; i++) {
		v[i] = i;
	}
	vector<int> s(n + 1);
	for (int i = 0; i <= n; i++) {
		s[i] = n + 1 - i;
	}
	if (n % 2 == 0) {
		if (a > n / 2 - 1 || b > n / 2 - 1) {
			cout << -1 << '\n';
			return;
		}
		else if (abs (a - b) > 1) {
			cout << -1 << '\n';
			return;
		}
		else {
			if (a == b) {
				int count = 0;
				for (int i = 2; i < n; i += 2) {
					if (count == a) {
						break;
					}
					swap(v[i], v[i + 1]);
					count++;
					
				}
				for (int i = 1; i <= n; i++) {
					cout << v[i] << " ";
				}
				cout << '\n';
			}
			else {
				if (a < b) {
					int count = 0;
					for (int i = 2; i < n; i += 2) {
						if (count == a) {
							break;
						}
						swap(v[i], v[i + 1]);
						count++;
						
					}
					swap(v[n - 1], v[n]);
					for (int i = 1; i <= n; i++) {
						cout << v[i] << " ";
					}
					cout << '\n';
				}
				else {
					int count = 0;
					for (int i = 2; i < n; i += 2) {
						if (count == b) {
							break;
						}
						swap(s[i], s[i + 1]);
						count++;
						
					}
					swap(s[n - 1], s[n]);
					for (int i = 1; i <= n; i++) {
						cout << s[i] << " ";
					}	
					cout << '\n';
				}
			}
		}	
	}
	else {
		if (a >= n / 2 && b >= n / 2) {
			cout << -1 << '\n';
			return;
		}
		else if (a > n / 2 || b > n / 2) {
			cout << -1 << '\n';
			return;
		}
		else if (abs (a - b) > 1) {
			cout << -1 << '\n';
			return;
		}
		else {
			if (a == b) {
				int count = 0;
				for (int i = 2; i < n; i += 2) {
					if (count == a) {
						break;
					}
					swap(v[i], v[i + 1]);
					count++;
					
				}
				for (int i = 1; i <= n; i++) {
					cout << v[i] << " ";
				}
				cout << '\n';
			}
			else {
				if (a < b) {
					int count = 0;
					for (int i = 2; i < n; i += 2) {
						if (count == a) {
							break;
						}
						swap(v[i], v[i + 1]);
						count++;
						
					}
					swap(v[n - 1], v[n]);
					for (int i = 1; i <= n; i++) {
						cout << v[i] << " ";
					}
					cout << '\n';
				}
				else {
					int count = 0;
					for (int i = 2; i < n; i += 2) {
						if (count == b) {
							break;
						}
						swap(s[i], s[i + 1]);
						count++;
						
					}
					swap(s[n - 1], s[n]);
					for (int i = 1; i <= n; i++) {
						cout << s[i] << " ";
					}	
					cout << '\n';
				}
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}


