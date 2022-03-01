#include <bits/stdc++.h>
 
using namespace std;

void run_case() {
	int n;
	cin >> n;
	multiset<pair<long long, long long>> s1;
	multiset<pair<long long, long long>, greater<pair<long long, long long>>> s2;
	for (int i = 0; i < 2 * n; i++) {
		long long x, y;
		cin >> x >> y;
		if (x > y) {
			swap(x, y);
		}
		s1.insert(make_pair(x, y));
		s2.insert(make_pair(y, x));
	}
	long long res = 0;
	while (!s1.empty()) {
		auto t1 = s1.begin();
		auto t2 = s2.begin();
		pair<long long, long long> p1 = *t1;
		pair<long long, long long> p2 = *t2;
		if (p1.first != p2.second || p1.second != p2.first) {
			res += p2.first - p1.first;
			s1.erase(s1.find(p1));
			s2.erase(s2.find(p2));
			swap(p1.first, p1.second);
			swap(p2.first, p2.second);
			s1.erase(s1.find(p2));
			s2.erase(s2.find(p1));
		}
		else {
			auto T1 = s1.begin();
			T1++;
			auto T2 = s2.begin();
			T2++;
			pair<long long, long long> P1 = *T1;
			pair<long long, long long> P2 = *T2;
			if (p2.first - P1.first > P2.first - p1.first) {
				res += p2.first - P1.first;
				s1.erase(s1.find(P1));
				s2.erase(s2.find(p2));
				swap(P1.first, P1.second);
				swap(p2.first, p2.second);
				s1.erase(s1.find(p2));
				s2.erase(s2.find(P1));
			}
			else {
				res += P2.first - p1.first;
				s1.erase(s1.find(p1));
				s2.erase(s2.find(P2));
				swap(p1.first, p1.second);
				swap(P2.first, P2.second);
				s1.erase(s1.find(P2));
				s2.erase(s2.find(p1));
			}
		}
	}
	cout << res;
}
void solve(){
//	cout << 0;	
	int n;
	cin >> n;
	
	vector<long long> a(2 * n);
	vector<long long> b(2 * n);
	for(int i = 0; i < 2 * n; i++){
		cin >> a[i] >> b[i];
	}
	
	for(int i = 0; i < 2 * n; i++){
		if (a[i] <= b[i]) swap(a[i], b[i]);
	}
	vector<long long> v(2 * n);
	for(int i = 0; i < 2 * n; i++){
		v[i] = a[i] + b[i];
	}
	
	sort(v.begin(), v.end());
//	for(auto x : v ) { 
//		cout << x << " ";
//	} 
	long long sum = 0;
	for(int i = n; i < 2 * n; i++){
		sum += v[i] - v[i - n];
	}
//	cout << sum ;
	for(int i = 0; i < 2 * n; i++){
		sum += (a[i] - b[i]);
	}
	cout << sum / 2;
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
		solve();
	}
	return 0;	
}
