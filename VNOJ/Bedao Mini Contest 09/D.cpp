#include <bits/stdc++.h>
 
using namespace std;
long long sum[33][(int)1e5 + 5];
long long exor[33][(int)1e5 + 5];
void dbg(long long a[(int)1e5 + 5], int n) {
	
}
void run_case() {
	int n, q;
	cin >> n >> q;

	long long a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n > 2000) {
		for (int i = 0; i < 33; i++) {
			for (int j = 1; j <= n; j++) {
				sum[i][j] = exor[i][j] = 0;
			}
		}
//		memset(sum, 0, sizeof(sum));
//		memset(exor, 0, sizeof(exor));
		vector<int> cnt(33, 0);
		for (int i = 1; i < 33; i++) {
			for (int j = 1; j <= i; j++) {
				sum[i][1] += a[j];
				exor[i][1] ^= a[j];
			}
			for (int j = i + 1; j <= n; j++) {
				sum[i][j - i + 1] = sum[i][j - i] - a[j - i] + a[j];
				exor[i][j - i + 1] = exor[i][j - i] ^ a[j - i] ^ a[j];
			}
		}
		
		for (int i = 1; i < 33; i++) {
			for (int j = i; j <= n; j++) {
				if (sum[i][j - i + 1] == exor[i][j - i + 1]) {
//					cout << j - i + 1 << " " << j << '\n';
					cnt[i]++;
				}
			}
		}
//		for (int i = 1; i <= 32; i++) {
//			cout << cnt[i] << " ";
//		}
//		return;
		for (int i = 0; i < q; i++) {
			int u;
			long long v;
			cin >> u >> v;
//			a[u] = v;
			for (int j = 1; j < 33; j++) {
				for (int k = max(u - j + 1, 1); k <= min(u, n - j + 1); k++) {
//					assert()
					if (sum[j][k] == exor[j][k]) {
						cnt[j]--;
					}
					sum[j][k] = sum[j][k] - a[u] + v;
					exor[j][k] = exor[j][k] ^ a[u] ^ v;
					
					if (sum[j][k] == exor[j][k]) {
						cnt[j]++;
					}
				}
				
			}
			a[u] = v;
//			for (int i = 1; i <= 32; i++) {
//				cout << cnt[i] << " ";
//			}
//			cout << '\n';
//			
//			for (int i = 1; i <= n; i++) {
//				cout << a[i] << " ";
//			}
//			cout << '\n';
//			for (int i = 1; i <= n; i++) {
////				cout << sum[i][1] << " ";
//			}
//			cout << '\n';
//			for (int i = 1; i <= n; i++) {
////				cout << exor[i][1] << " ";
//			}
//			cout << '\n';
//			
			int mx = 1;
			for (int j = 2; j < 33; j++) {
//				assert(cnt[j] >= 0);
				if (cnt[j]) {
					mx = j;
				}
			}
			cout << mx << '\n';
		}
		return;
	}
	
	for (int i = 0; i < q; i++) {
		int u, v;
		cin >> u >> v;
		a[u] = v;
		int l = 1;
		int r = n;
		while (l < r) {
			int mid = (l + r + 1) / 2;
			int sum = 0;
			int exor = 0;
			for (int j = 1; j <= mid; j++) {
				sum += a[j];
				exor ^= a[j];
			}
			if (sum == exor) {
				l = mid;
				continue;
			}
			bool ok = false;
			for (int j = mid + 1; j <= n; j++) {
				sum = sum + a[j] - a[j - mid];
				exor = exor ^ a[j] ^ a[j - mid];
				if (sum == exor) {
//					l = mid;
					ok = true;
					break;
				}
			}
			if (ok) {
				l = mid;
			}
			else {
				r = mid - 1;
			}
		}
		cout << l << '\n';
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
