#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	int n, q;
	string s;
	cin >> n >> q;
	cin >> s;
	set<int> res;
	string t = "abc";
	for (int i = 0; i < n - 2; i++) {
		if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
			res.insert(i);
		}
	}
	
	for (int i = 0; i < q; i++) {
		int x; char c;
		cin >> x >> c;
		x--;
		if (s[x] == c) {
			cout << res.size() << '\n';
			continue;
		}
		s[x] = c;
		if (x - 2 >= 0 && x <= n - 1 && res.count(x - 2) == 1) {
			res.erase(x - 2);
		}
		else if (x - 2 >= 0 && x <= n - 1 && res.count(x - 2) == 0) {
			if(s.substr(x - 2, 3) == t) {
				res.insert(x - 2);
			}
		}
		if (x - 1 >= 0 && x + 1 <= n - 1 && res.count(x - 1) == 1) {
			res.erase(x - 1);
		}
		else if (x - 1 >= 0 && x + 1 <= n - 1 && res.count(x - 1) == 0) {
			if(s.substr(x - 1, 3) == t) {
				res.insert(x - 1);
			}
		}
		if (x >= 0 && x + 2 <= n - 1 && res.count(x) == 1) {
			res.erase(x);
		}
		else if (x >= 0 && x + 2 <= n - 1 && res.count(x) == 0) {
			if(s.substr(x, 3) == t) {
				res.insert(x);
			}
		}
		cout << res.size() << '\n';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
