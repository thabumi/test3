#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[2 * n];
	for (int i = 0; i < 2 * n; i++) {
		cin >> a[i];
	}
	int mn = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < mn) {
			mn = a[i];
		}
	}
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (a[i] == mn) {
			v.push_back(i);
		}
	}
	int j = v[0];
	int Mn = a[j + n];
	for (auto t : v) {
		if (a[t + n] < Mn) {
			j = t;
			Mn = a[j + n];
		}
	}
	if (Mn <= mn) {
		cout << mn << " " << Mn;
		return;
	}
	Mn = a[v[0] + n];
	vector<int> s;
	for (auto t : v) {
		s.push_back(t);
	}
	for (int i = v.back() + 1; i < n; i++) {
		if (a[i] < Mn) {
			while (a[s.back()] > a[i]) {
				s.pop_back();
			}
			s.push_back(i);
		}
	}
	bool addEqual = false;
	for (int i = 0; i < s.size() - 1; i++) {
//		cout << a[s[i] + n] << " " << a[s[i + 1] + n] << '\n';
		if (a[s[i] + n] > a[s[i + 1] + n]) {
			break;
		}
		else if (a[s[i] + n] < a[s[i + 1] + n]) {
			addEqual = true;
			break;
		}
	}
//	cout << Mn << '\n';
	if (addEqual) {
//		cout << "YES\n";
		for (int i = s.back() + 1; i < n; i++) {
			if (a[i] == Mn) {
				s.push_back(i);
			}
		}
	}
	for (auto t : s) {
		cout << a[t] << " ";
	}
	for (auto t : s) {
		cout << a[t + n] << " ";
	}
//	vector<int> res1;
//	vector<int> res2;
//	for (int i = j; i < n; i++) {
//		if (a[i] < Mn) {
//			
//		}
//	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
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
