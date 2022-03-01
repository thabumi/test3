#include <bits/stdc++.h>
 
using namespace std;
 
void run_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	bool have1 = false;
	bool have2 = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 3 == 1) {
			have1 = true;
		}
		else if (a[i] % 3 == 2) { 
			have2 = true;
		}
	}
	sort(a.begin(), a.end());
	if (a[n - 1] == 4) {
		auto it1 = find(a.begin(), a.end(), 1);
		auto it2 = find(a.begin(), a.end(), 2);
		auto it3 = find(a.begin(), a.end(), 3);
		if(it2 != a.end() && (it1 != a.end() ||it3 !=a.end())) {
			cout << 3 << '\n';
		}
		else {
			cout << 2 << '\n';
		}
		return;
	}
	if (a[n - 1] == 3) {
		if (have1 || have2) {
			cout << 2 << '\n';
		}
		else {
			cout << 1 << '\n';
		}
		return;
	}
	int res = a[n - 1] / 3;
	if (a[n - 1] % 3 == 0) {
		if (have1 || have2) {
			res++;
		}
	}
	else if (a[n - 1] % 3 == 1) {
		res++;
		if (a[0] == 1 && have2) {
			res++;
		}
		else {
			auto it = find(a.begin(), a.end(), a[n - 1] - 1);
			if (it != a.end() && have2) {
				res++;
			}
		}
		
	}
	else {
		res++;
		if (have1) {
			res++;
		}
	}
//	if (have2) {
//		res += 1;
//	}
//	if (have1) {
//		res += 1;
//	}
//	if (have1 || have2 && a[n - 1 ] % 3 == 0 ) {
//		res++;
//	}
	cout << res << '\n';
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
