#include <bits/stdc++.h>

using namespace std;
#define int long long
pair<int, int> Minus(pair<int, int> a, pair<int, int> b) {
	return make_pair(a.first - b.first, a.second - b.second);
}

pair<int, int> Sum(pair<int, int> a, pair<int, int> b) {
	return make_pair(a.first + b.first, a.second + b.second);
}

void run_case(){
	int n;
	cin >> n;
	int a[n + 1];
	int b[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	vector<pair<int, int>> v(n + 1);
	v[1] = make_pair(0, 1);
	for (int i = 2; i <= n; i++) {
		v[i].first = a[i] - b[i];
		v[i].second = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = i + i; j <= n; j += i) {
			v[j] = Minus(v[j], v[i]);
		}
	}
	for (int i = 1; i <= n; i++) {
		if(v[i].second == 0LL) {
			v[i].first = abs(v[i].first);
		} 
		if(v[i].second < 0LL) {
			v[i].first = -v[i].first;
			v[i].second = -v[i].second;
		}
	}
//	cout << "BCOE\n";
//	for (int i = 1; i <= n; i++) {
//		cout << v[i].first << " " << v[i].second << '\n';
//	}
//	cout << "ECOE\n";
	vector<pair<double, int>> t;
	vector<double> T;
	t.push_back(make_pair(0, 1));
	T.push_back(0);
	for (int i = 2; i <= n; i++) {
		if (v[i].second != 0LL) {
			t.push_back(make_pair(-v[i].first * 1.0 / v[i].second, i));
			T.push_back(-v[i].first * 1.0 / v[i].second);
		}
		else {
			t.push_back(make_pair(-1e15, i));
			T.push_back(-1e15);
		}
	}
	sort(t.begin(), t.end());
	sort(T.begin(), T.end());
//	cout << "Checksort\n";
//	for (int i = 0; i < t.size(); i++) {
//		cout << v[t[i].second].first << " " <<v[t[i].second].second << '\n';
//	}
//	return;
	vector<pair<int, int>> sum(n + 2);
	pair<int, int> K = {0, 0};
	for (int i = 1; i <= n; i++) {
		K = Minus(K, v[i]);
	}
	sum[1] = K;
	for (int i = 2; i <= n + 1; i++) {
		sum[i] = Sum(Sum(sum[i - 1], v[t[i - 2].second]), v[t[i - 2].second]);
	}
//	cout << "sum\n";
//	for (int i = 1; i <= n + 1; i++) {
//		cout << sum[i].first << " " << sum[i].second << '\n';
//	}
	int q;
	cin >> q;
//	cout << "Res\n";
	for (int i = 0; i < q; i++) {
		cin >> b[1];
//		cout << "b[1] = " << b[1] <<'\n';
		double k = b[1] - a[1];
//		cout << "Allsum\n";
//		for (int j = 1; j < sum.size(); j++) {
//			cout << sum[j].first + k * sum[j].second << '\n';
//		}
//		cout <<"END\n";
		int x = (int)(upper_bound(T.begin(), T.end(), k) - T.begin());
//		cout << "x = " << x << '\n';
		x++;
		long long res = abs(sum[x].first + k * sum[x].second);
		cout << res << '\n';
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	run_case();
	return 0;	
}

