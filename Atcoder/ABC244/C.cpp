#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 1; i <= 2 * n + 1; i++) {
		s.insert(i);
	}
	int ans;
	for (int i = 1; i <= n; i++) {
		cout << *s.begin() << endl;
		cout << flush;
		s.erase(s.begin());
		cin >> ans;
		s.erase(s.find(ans));
	}
	cout << *s.begin() << endl;
	cout << flush;
	return;
}

int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
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
