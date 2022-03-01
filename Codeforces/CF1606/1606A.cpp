#include <bits/stdc++.h>

using namespace std;

void run_case(){
	string s;
	cin >> s;
	if (s[0] == s[s.size() - 1]) {
		cout << s << '\n';
	}
	else {
		s[0] = 'a' + 'b' - s[0];
		cout << s << '\n';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

