#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	long long k;
	cin >> n >> k;;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	unordered_map<long long, long long> prevSum;
	long long res = 0;
	long long currsum = 0;
	for (int i = 0; i < n; i++) {
		currsum += a[i];
		if (currsum == k) {
			res++;
		}
		if (prevSum.find(currsum - k) != prevSum.end()) {
			res += (prevSum[currsum - k]);
		}
		prevSum[currsum]++;
	}
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
