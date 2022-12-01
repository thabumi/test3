#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n], b[n];
	long long res = 0;
	for (int i = 0; i < n; i++) {
        cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
        cin >> b[i];
        res += b[i];
	}
	vector<long long> fire;
	vector<long long> frost;
	for (int i = 0; i < n; i++) {
        if (a[i]) {
            frost.push_back(b[i]);
        }
        else {
            fire.push_back(b[i]);
        }
	}
	sort(frost.begin(), frost.end(), greater<long long>());
	sort(fire.begin(), fire.end(), greater<long long>());
//	return;
	if (fire.size() > frost.size()) {
        for (int i = 0; i < frost.size(); i++) {
            res += fire[i] + frost[i];
        }
	}
	else if (frost.size() > fire.size()) {
        for (int i = 0; i < fire.size(); i++) {
            res += fire[i] + frost[i];
        }
	}
//	return;
	else {
        for (int i = 0; i < fire.size(); i++) {
            res += fire[i] + frost[i];
        }
//        cout << fire.back();
        res -= min(fire.back(), frost.back());
	}
	cout << res << '\n';
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
