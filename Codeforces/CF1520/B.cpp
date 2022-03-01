#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<vector<string>> v(10, vector<string>(10));
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 0; k < i; k++) {
				v[i][j] += (char)(j + '0');
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (stoi(v[i][j]) <= n) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
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
