#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long a[n];
	vector<int> cnt(10, 0);
	for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] %= 10;
        cnt[a[i]]++;
        if (cnt[a[i]] > 3) {
            cnt[a[i]] = 3;
        }
	}
	vector<int> v;
	for (int i = 0; i < 10; i++) {
        while (cnt[i]) {
            v.push_back(i);
            cnt[i]--;
        }
	}
	for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                if ((v[i] + v[j] + v[k]) % 10 == 3) {
                    cout << "YES\n";
                    return;
                }
            }
        }
	}
	cout << "NO\n";
	return;
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
