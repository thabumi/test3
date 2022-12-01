#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	int cntA = 0, cntB = 0, cntC = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			cntA++;
		}
		else if (s[i] == 'B') {
			cntB++;
		}
		else {
			cntC++;
		}
		if (t[i] == 'A') {
			cntA--;
		}
		else if (t[i] == 'B') {
			cntB--;
		}
		else {
			cntC--;
		}
	}
	if (cntA != 0 || cntB != 0 || cntC != 0) {
		cout << "NO\n";
		return;
	}
	string S = "";
	string T = "";
	for (int i = 0; i < n; i++) {
		if (s[i] != 'b') {
			S += s[i];
		}
		if (t[i] != 'b') {
			T += t[i];
		}
	}
	if (S != T) {
		cout << "NO\n";
	}
	else {
		
		for (int i = 0; i < n; i++) {
			if (s[i] == 'a') {
				cntA++;
			}
			if (t[i] == 'a') {
				cntA--;
			}
			if (cntA < 0) {
				cout << "NO\n";
				return;
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == 'c') {
				cntC++;
			}
			if (t[i] == 'c') {
				cntC--;
			}
			if (cntC < 0) {
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
	}
	
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
