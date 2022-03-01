#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	deque<int> d;
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		d.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << d.front() << " ";
			d.pop_front();
		}
		else {
			cout << d.back() << " ";
			d.pop_back();
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
