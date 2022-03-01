#include <bits/stdc++.h>
 
using namespace std;

#define int long long

void run_case() {
	int n;
	cin >> n;
	int res = 0;
	int a[n];
//	vector<int> first(n + 1, -1);
	vector<int> last(2e5 + 5, -1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
//		if (first[a[i]] == -1) {
//			first[a[i]] = i;
//		}
		last[a[i]] = i;
	}
//	for (int i = 0; i < n; i++) {
//		cout << last[a[i]] << " ";
//	}
//	return;
	int i = 0;
	int cur = 0;
	int nextlast = last[a[0]];
	int prelast = last[a[0]];
//	bool change = false;
	while (i < n) {
		if (i == prelast) {
			prelast = nextlast;
			i++;
			if (i >= n) {
				break;
			}
			cur = i;
			nextlast = last[a[i]];
			continue;
//			if (cur < nextlast) {
//				res += nextlast - cur - 1;
//				if (change) {
//					res--;
//				}
//			}
//			
////			cout << res << '\n';
//			cur = nextlast + 1;
//			i = cur;
//			change = false;
//			if (i < n) {
//				nextlast = last[a[i]];
//			}
//			continue;
		}
		if (last[a[i]] > nextlast) {
			cur = i;
			nextlast = last[a[i]];
			i++;
			continue;
		}
		
		if (i > cur) {
//			cout << i << " ";
			res++;
		}
		i++;
	}
	cout << res;
}
signed main() {
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
