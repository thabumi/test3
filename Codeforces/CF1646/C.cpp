#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	
}
//vector<long long> v;
//map<long long, int> m;
//long long res(long long n, int m) {
//	if (n == 0) {
//		return 1;
//	}
//}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	long long MAX = 1e12;
//	v.resize(0);
//	long long two = 1;
//	while (two <= MAX) {
//		v.push_back(two);
//		two *= 2;
//	}
	vector<long long> fact;
	long long Fact = 6;
	long long k = 3;
	while (Fact <= MAX) {
		fact.push_back(Fact);
		++k;
		Fact *= k;
	}
//	for (auto t : fact) {
//		cout << t << " ";
//	}
	int sz = 1;
	int l = fact.size();
	for (int i = 0; i < fact.size(); i++) {
		sz *= 2;
	}
	vector<pair<long long, int>> sumFact;
	for (int i = 0; i < sz; i++) {
		long long Sum = 0;
		int cnt = 0;
		for (int j = 0; j < l; j++) {
			if (i & (1 << j)) {
				Sum += fact[j];
				cnt++;
			}
		}
		
		sumFact.push_back({Sum, cnt});
	}
//	cout << sumFact.size();
//	return 0;
//	sort(v.begin(), v.end());
//	return 0;
//	int m = v.size();
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		long long n;
		cin >> n;
		int mn = 1e9;
		for (int i = 0; i < sumFact.size(); i++) {
			if (n < sumFact[i].first) {
				continue;
			}
			long long s = n - sumFact[i].first;
			int res = __builtin_popcountll(s);
			res += sumFact[i].second;
			mn = min(res, mn);
			
		}
		cout << mn << '\n';
		run_case();
	}
	return 0;	
}
