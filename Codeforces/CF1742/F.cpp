#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int q;
    cin >> q;
    vector<long long> s(26, 0);
    vector<long long> t(26, 0);
    s[0] = t[0] = 1;
    long long cntt = 1, cnts = 1;
    for (int i = 0; i < q; i++) {
        int d, k;
        string x;
        cin >> d >> k >> x;
        if (d == 1) {
            for (auto c : x) {
                s[c - 'a'] += k;
                cnts += k;
            }
        }
        else {
            for (auto c : x) {
                t[c - 'a'] += k;
                cntt += k;
            }
        }
//        if (s == t) {
//            cout << "NO\n";
//            continue;
//        }
//        else {
        int s1, t1;
        for (int j = 0; j < 26; j++) {
            if (s[j] > 0) {
                s1 = j;
                break;
            }
        }
        for (int j = 25; j >= 0; j--) {
            if (t[j] > 0) {
                t1 = j;
                break;
            }
        }
        if (s1 > t1) {
            cout << "NO\n";
            continue;
        }
        if (s1 < t1) {
            cout << "YES\n";
            continue;
        }
        if (s1 == t1) {
            if (s[s1] > t[t1]) {
                cout << "NO\n";
            }
            else if (s[s1] < t[t1]) {
                if (cnts > s[s1]) {
                    cout << "NO\n";
                }
                else {
                    cout << "YES\n";
                }
            }
            else {
                if (cnts > s[s1]) {
                    cout << "NO\n";
                }
                else {
                    if (cntt > t[t1]) {
                        cout << "YES\n";
                    }
                    else {
                        cout << "NO\n";
                    }

                }
            }
        }
//        }
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
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
