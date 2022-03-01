#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int h, w, k;
	cin >> h >> w >> k;
	int a[h];
	int b[w];
	int sumRow = 0;
	int sumCol = 0;
	for (int i = 0; i < h; i++) {
		cin >> a[i];
		sumRow = (sumRow + a[i]) % k;
	}
	for (int i = 0; i < w; i++) {
		cin >> b[i];
		sumCol = (sumCol + b[i]) % k;
	}
	if (sumRow != sumCol) {
		cout << -1;
		return;
	}
	long long res1 = 0;
	long long res2 = 0;
	for (int i = 0; i < h; i++) {
		res1 += (1LL * (k - 1) * w - a[i]) / k * k + a[i];
	}
	for (int i = 0; i < w; i++) {
		res2 += (1LL * (k - 1) * h - b[i]) / k * k + b[i];
	}
//	cout << res1 << " " << res2 << " ";
	long long res = min(res1, res2);
	cout << res;
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
