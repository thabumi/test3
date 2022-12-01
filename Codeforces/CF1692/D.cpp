#include <bits/stdc++.h>

using namespace std;

bool palin(int a, int b) {
    if (a < 10) {
        return (a * 10 == b);
    }
    else {
        return ((a % 10) * 10 + a / 10) == b;
    }
}

bool palin(pair<int, int> p) {
    return palin(p.first, p.second);
}

void run_case() {
    string s;
    cin >> s;
    int x;
    cin >> x;

    map<pair<int, int>, int> mp;
    string h = "";
    h = h + s[0] + s[1];
    string m = "";
    m = m + s[3] + s[4];
    pair<int, int> cur = {stoi(h), stoi(m)};
//    mp[cur] = 1;
    int res = 0;

    while (!mp[cur]) {
        mp[cur] = 1;
        if (palin(cur)) {
            res++;
        }
        pair<int, int> p;
        p.first = cur.first + x / 60;
        p.second = cur.second + x % 60;
        p.first += p.second / 60;
        p.second %= 60;
        p.first %= 24;
        cur = p;
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
