#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s[5] = {"Amonia", "Hydro sulfide", "Methamphetamine", "Dinito monoxide", "Silica"};
	string bait;
	getline(cin, bait);
	for (int i = 0; i < n; i++) {
		string t;
		getline(cin, t);
//		cout << t << '\n';
		bool OK = true;
		for (int j = 0; j < 5; j++) {
			if (t.find(s[j]) != string::npos) {
				cout << "Yes";
				if (i < n - 1) {
					cout << '\n';
				}
				OK = false;
				break;
			}
		}
		if (OK) {
		
			cout << "No";
			if (i < n - 1) {
				cout << '\n';
			}
		}
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
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
