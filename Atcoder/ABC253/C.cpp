#include <bits/stdc++.h>

using namespace std;

void run_case() {
	map<int, int> cnt;
	set<int> s;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            cnt[x]++;
            if (cnt[x] == 1) {
                s.insert(x);
            }
        }
        else if (type == 2) {
            int x, c;
            cin >> x >> c;
            if (cnt[x] >= 1) {
                cnt[x] = max(0, cnt[x] - c);
                if (cnt[x] == 0) {
                    s.erase(s.find(x));
                }
            }


        }
        else {
            auto it = s.end();
            it--;
            cout << *it - *s.begin() << '\n';
        }
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
