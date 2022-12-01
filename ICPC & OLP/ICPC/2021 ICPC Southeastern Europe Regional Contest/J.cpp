#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
//	cout << s << '\n';
	queue<int> indA;
	queue<int> indB;
	queue<int> indC;
	for (int i = 0; i < 2 * n; i++) {
		if (s[i] == 'A') {
			indA.push(i);
//			cout << i << "A ";
		}
		else if (s[i] == 'B') {
			indB.push(i);
//			cout << i << "B ";
		}
		else {
			indC.push(i);
//			cout << i << "C ";
		}
	}
	vector<pair<int, int>> res;
	for (int i = 0; i < 2 * n; i++) {
		if (indA.size() > indB.size() + indC.size()) {
			cout << "NO";
			return;
		}
		if (indA.size() == indB.size() + indC.size()) {
			break;
		}
//		if (s[i] == 'A') {
//			continue;
//		}
//		else if (s[i] == 'B') {
//			if (indC.empty()) {
//				cout << "NO";
//			}
//			else {
//				res.push_back({i, indC.front()});
//				indB.pop();
//				indC.pop();
//			}
//		}
		if (s[i] == 'C') {
			if (!indB.empty() && indB.front() < i) {
				res.push_back({indB.front(), i});
//				int f = indB.front();
//				cout << f << " ";
				indB.pop();
				indC.pop();
			}
			
			else if (!indA.empty() && indA.front() < i) {
				res.push_back({indA.front(), i});
//				int f = indB.front();
//				cout << f << " ";
				indA.pop();
				indC.pop();
			}
			else {
				cout << "NO";
				return;
			}
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		if (indA.size() > indB.size() + indC.size()) {
			cout << "NO";
			return;
		}
		if (indA.size() == indB.size() + indC.size()) {
			break;
		}
//		if (s[i] == 'A') {
//			continue;
//		}
		if (s[i] == 'B' && !indB.empty() && i == indB.front()) {
			if (!indA.empty() && indA.front() < i) {
				res.push_back({indA.front(), i});
				indA.pop();
				indB.pop();
			}
			else {
				cout << "NO";
				return;
			}
		}
	}
	if (indA.size() > indB.size() + indC.size()) {
		cout << "NO";
		return;
	}
	while (!indA.empty()) {
		if (indC.empty() || indB.front() < indC.front()) {
			if (indA.front() > indB.front()) {
				cout << "NO";
				return;
			}
			else {
				res.push_back({indA.front(), indB.front()});
				indB.pop();
				indA.pop();
			}
		}
		else {
			if (indA.front() > indC.front()) {
				cout << "NO";
				return;
			}
			else {
				res.push_back({indA.front(), indC.front()});
				indC.pop();
				indA.pop();
			}
		}
	}
	cout << "YES\n";
	for (int i = 0; i < res.size(); i++) {
		cout << res[i].first + 1 << " " << res[i].second + 1 << '\n';
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