#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	while (true) {
		bool OK = true;
		for (int i = 1; i < a.size() - 1; i++) {
			if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
				OK = false;
				a.erase(a.begin() + i);
			}
		}
		if (OK) {
			break;
		}
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
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


