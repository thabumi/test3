#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	string s; 
	cin >> s; 
	map<char, char> np;
	
	if (k >= 25) {
		for (int i = 1; i <= n; i++) {
			cout << 'a';
		}
		cout << '\n';
		return;
	}
	map<char, int> m;
	for (char c = 'a'; c <= 'z'; c++) {
		m[c] = min(k + 1, (int)c - 'a');
		np[c] = c;
	}
	int needed = 0;
	for (int i = 0; i < n; i++) {
		int t = m[s[i]];
		if (t > k) {
			k -= needed;
			char c = s[i] - k;
//			for (int j = i; j < n; j++) {
//				if (s[j] <= c + k && s[j] >= c) {
//					np[s[j]] = c;
//				}
//			}
			for (char j = c; j <= s[i]; j++) {
				np[j] = c;
			}
			break;
		}
		else {
			needed = max(needed, t);
			for (char j = 'a'; j <= s[i]; j++) {
				np[j] = 'a';
			}
			
		}
	}
//	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << np[s[i]];
	}
	
//	cout << '\n' << m['y'];
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	cout << 'q' - 'i';
//	return 0;
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;	
}
