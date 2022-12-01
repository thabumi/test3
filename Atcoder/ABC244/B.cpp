#include <bits/stdc++.h>
 
using namespace std;

int dRow[] = {1, 0, -1, 0};
int dCol[] = {0, -1, 0, 1};

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0, y = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'S') {
			x += dRow[k];
			y += dCol[k];
		}
		else {
			k = (k + 1) % 4;
		}
	}
	cout << x << " " << y;
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
