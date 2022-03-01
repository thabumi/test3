#include <bits/stdc++.h>
 
using namespace std;
int ans;
void q(int n) {
	cout << "? " << n << endl;
	cin >> ans;
}


void run_case() {
	int n;
	cin >> n;
	vector<bool> seen(n + 5, 0);
	vector<int> res(n + 5);
	for (int i = 1; i <= n; i++) {
		if (!seen[i]) {
			vector<int> v;
			while(1) {
				q(i);
//				cout << ans << endl;
				if (!seen[ans]) {
					seen[ans] = true;
					v.push_back(ans);
				}
				else {
//					for (int i = 0; i < v.size(); i++) {
//						cout << v[i] << " ";
//					}
//					cout << endl;
					for (int i = 0; i < v.size() - 1; i++) {
						res[v[i]] = v[i + 1];
					}
					res[v[v.size() - 1]] = v[0];
					break;
				}
			}
		}
//		if (i == 2) {
//			cout << "OK" << endl;
//		}
	}
	cout << "! ";
	for (int i = 1; i <= n; i++) {
		cout << res[i] << " ";
	}
	cout << endl;
}
int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
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
