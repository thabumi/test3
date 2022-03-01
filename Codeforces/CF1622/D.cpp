#include <bits/stdc++.h>
 
using namespace std;

long long MOD = 998244353;
vector<long long> Fact;
vector<long long> RFact;
long long nCk(int n, int k) {
	return Fact(n)
}

void run_case() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if(s[i] == '1') {
			v.push_back(i);
		}
	}
	int res = 0;
	for (int i = k; i < v.size(); i++) {
		
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	Fact.resize
	Fact[0] = 0;
	
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}
