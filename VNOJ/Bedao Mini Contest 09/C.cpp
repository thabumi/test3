#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	string s;
	cin >> n >> s;
	stack<char> st;
	string res = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') {
			st.push('(');
			res += '(';
		}
		else {
			if (st.empty()) {
				res += "()";
			}
			else {
				st.pop();
				res += ')';
			}
		}
		
	}
	while (!st.empty()) {
		st.pop();
		res += ')';
	}
	cout << res;
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
