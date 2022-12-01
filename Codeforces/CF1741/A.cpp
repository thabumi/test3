#include <bits/stdc++.h>

using namespace std;

void run_case() {
	string a, b;
	cin >> a >> b;
	if (a.back() > b.back()) {
        cout << "<\n";
        return;
	}
	else if (a.back() < b.back()) {
        cout << ">\n";
        return;
	}
	else {
        if (a.back() == 'M') {
            cout << "=\n";
        }
        else if (a.back() == 'S') {
            if (a.size() > b.size()) {
                cout << "<\n";
            }
            else if (a.size() == b.size()) {
                cout << "=\n";
            }
            else {
                cout << ">\n";
            }
        }
        else {
            if (a.size() > b.size()) {
                cout << ">\n";
            }
            else if (a.size() == b.size()) {
                cout << "=\n";
            }
            else {
                cout << "<\n";
            }
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
	cin >> t;
	for (int i = 1; i <= t; i++) {
//		cout << "Case #" << i << ": ";
		run_case();
	}
	return 0;
}
