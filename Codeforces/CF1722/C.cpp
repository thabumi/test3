#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int pnt[3];
	pnt[0] = pnt[1] = pnt[2] = 0;
	string s[3][n];
	map<string, int> m;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
			m[s[i][j]]++;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			if (m[s[i][j]] == 1) {
				pnt[i] += 3;
			}
			else if (m[s[i][j]] == 2) {
				pnt[i]++;
			}
		}
	}
//	for (int i = 0; i < n; i++) {
//		if (s[0][i] != s[1][i]) {
//			if (s[0][i] == s[2][i]) {
//				pnt[0]++;
//				pnt[1] += 3;
//				pnt[2]++;
//			}
//			else {
//				pnt[0] += 3;
//				if (s[1][i] == s[2][i]) {
//					pnt[1]++;
//					pnt[2]++;
//				}
//				else {
//					pnt[1] += 3;
//					pnt[2] += 3;
//				}
//			}
//		}
//		else {
//			if (s[0][i] != s[2][i]) {
//				pnt[0]++;
//				pnt[1]++;
//				pnt[2] += 3;
//			}
//			
//		}
//	}
	cout << pnt[0] << " " << pnt[1] << " " << pnt[2] << '\n';
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
