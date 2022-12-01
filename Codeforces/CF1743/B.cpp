#include <bits/stdc++.h>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	deque<int> dq;
	for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            dq.push_back(i);
        }
        else {
            dq.push_front(i);
        }
	}
	while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
	}
	cout << '\n';
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
