#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int two = 0;
	int a[n + 1];
	vector<int> v(n, 0);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		while (a[i] % 2 == 0) {
			a[i] /= 2;
			two++;
		}
		int j = i;
		while (j % 2 == 0) {
			v[j - 1]++;
			j /= 2;
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	v.push_back(0);
	int i = 0;
	while (two < n && i < n + 1) {
		two += v[i];
		i++;
	}
	if (i == n + 1) {
		cout << -1 << '\n';
	}
	else {
		cout << i << '\n';
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
