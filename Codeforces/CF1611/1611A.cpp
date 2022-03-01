#include <bits/stdc++.h>
 
using namespace std;
 
void run_case(){
	string s;
	cin >> s;
	bool b = false;
	for (int i = 0; i < s.size(); i++) {
		if ((s[i] - '0') % 2 == 0) {
			b = true;
			break;
		}
	}
	if (!b) {
		cout << -1 << '\n';
	}
	else {
		if ((s[s.size() - 1] - '0') % 2 == 0) {
			cout << 0 << '\n';
		}
		else if ((s[0] - '0') % 2 == 0) {
			cout << 1 << '\n';
		}
		else {
			cout << 2 << '\n';
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
	cin >> t;
	for(int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
