#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	string s, t;
	cin >> s >> t;
	vector<int> Count1(26, 0);
	for (int i = 0; i < s.size(); i++) {
		Count1[s[i] - 'a']++;
	}
	vector<int> Count2(26, 0);
	for (int i = 0; i < t.size(); i++) {
		Count2[t[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (Count1[i] < Count2[i]) {
			cout << -1;
			return;
		}
	}
	vector<int> used(26, 0);
	vector<int> remain(Count1);
	stack<char> res;
	int n = res.size();
	for (int i = 0; i < s.size(); i++) {
	    if (used[s[i] - 'a'] < Count2[s[i] - 'a']) {
	        while (!res.empty() && res.top() > s[i] && remain[res.top() - 'a'] + used[res.top() - 'a'] > Count2[res.top() - 'a']) {
	            used[res.top() - 'a']--;
	            res.pop();
	        }
	        res.push(s[i]);
	        remain[s[i] - 'a']--;
	        used[s[i] - 'a']++;
	    }
	    else {
	        remain[s[i] - 'a']--;
	    }
	}
	string Res = "";
	while (!res.empty()) {
	    Res += res.top();
	    res.pop();
	}
	reverse(Res.begin(), Res.end());
	cout << Res;
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


