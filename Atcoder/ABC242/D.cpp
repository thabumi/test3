#include <bits/stdc++.h>
 
using namespace std;

long long Pow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	long long t = Pow(a, b / 2);
	t *= t;
	if (b % 2 == 1) {
		t *= a;
	}
	return t;
} 

void run_case() {
	string s;
	cin >> s;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		long long t, k;
		cin >> t >> k;
		k--;
		long long len = 1;
		for (int i = 0; i < t; i++) {
			len *= 2;
			if (len > 1e18) {
				
				break; 
			}
		}
//		long long len = Pow(2, t);
		long long block = k / len;
		long long pnt = k % len;
//		cout << block << " ";
		long long cnt = 0;
		long long cnt2 = 0;
		while (pnt > 0) {
			if (pnt % 2 == 1) {
				cnt += 2;
			}
			else {
				cnt += 1;
			}
			pnt /= 2;
			cnt2++;
		}
		
		cnt %= 3;
		cnt = (cnt + (t - cnt2) % 3) % 3;
//		cout << cnt << " ";
		char c = 'A' + ((s[block] - 'A' + cnt) % 3);
		cout << c << '\n';
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
