#include <bits/stdc++.h>
 
using namespace std;

int n;
vector<long long> a;
vector<long long> b;

bool Check(int m) {
	for (int i = n - 1; i >= 2; i--) {
		if (a[i] < m) {
			a = b;
			return false;
		}
		a[i - 1] += min(b[i], (a[i] - m)) / 3;
		a[i - 2] += min(b[i],(a[i] - m)) / 3 * 2;
//		a[i] -= (a[i] - m) / 3 * 3;
	}
	if (a[1] < m || a[0] < m) {
		a = b;
		return false;
	} 
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
	a = b;

	return true;
	
}

void run_case() {
//	int n;
	cin >> n;
	
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
//		cout << a[i] << " ";
	}
	b = a;
	
//	cout << '\n';
	long long l = 1;
	long long r = 1e9;
	long long mid;
//	cout << Check(15) << '\n';
//	cout << '\n';
	while (l <= r) {
		mid = (l + r + 1) / 2;
		if (Check(mid - 1) && !Check(mid)) {
			break;
		}
		else if (Check(mid)) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	cout << mid - 1 << '\n';
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
