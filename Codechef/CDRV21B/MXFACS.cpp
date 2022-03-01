#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	vector<int> v;
	int n;
	cin >> n;
	int N = n;
	while (n % 2 == 0) {
		v.emplace_back(2);
		n /= 2;
	}
	for (int d = 3; d * d <= n; d += 2) {
		while (n % d == 0) {
			v.emplace_back(d);
			n /= d;
		}
	}
	if (n > 1) {
		v.emplace_back(n);
	}
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << '\n';
//	return;
	int minValue = v[0];
	int minCount = 1;
	int count = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] != v[i - 1]) {
			if (count > minCount) {
				minValue = v[i - 1];
				minCount = count;
			}
			count = 1;
		}
		else {
			count++;
		}
	}
	if (count > minCount) {
		minValue = v[v.size() - 1];
	}
	cout << minValue << '\n';
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
