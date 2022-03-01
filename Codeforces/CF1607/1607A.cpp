#include <bits/stdc++.h>

using namespace std;

void run_case(){
	string s, t;
	cin >> s >> t;
	int sum = 0;
	for (int i = 0; i < t.size() - 1; i++) {
		sum += abs((int)(s.find(t[i]) - s.find(t[i + 1])));
	}
	cout << sum << '\n';
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

