#include <bits/stdc++.h>
 
using namespace std;

int n;

int Add(int i, int a) {
	i = (i + a) % n;
	if (i < 0) {
		i += n;
	}
	if (i == 0) {
		return n;
	}
	return i;
}


void q(int a, int b, int c) {
	cout << "? " << a << " " << b << " " << c << endl;
}

void ans(vector<int> v) {
	cout << "! " << v.size() << " ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
void run_case() {
	cin >> n;
	int i = 1;
	vector<int> res(n + 5, -1);
	vector<int> Crew(n + 5, -1);
	q(1, 2, 3);
	int C;
	int I;
	while (true) {
		cin >> res[i];
		
		if (res[i] != res[Add(i, -3)] && res[i] != -1 && res[Add(i, -3)] != -1) {
			if (res[i] == 1 && res[Add(i, -3)] == 0) {
				q(i, Add(i, -2), Add(i, -3));
				int x;
				cin >> x;
				if (x == 1) {
					Crew[Add(i, -1)] = 0;
					Crew[i] = 1;
				}
				else {
					q(Add(i, 1), Add(i, -2), Add(i, -3));
					cin >> x;
					if (x == 1) {
						Crew[Add(i)] = 0;
						Crew[Add(i, 1)] = 1;
					}
					else {
						Crew[Add(i, -3)] = Crew[Add(i, - 2)] = 0;
						q(i, Add(i, 1), Add(i, -3));
						cin >> x;
						if (x == 0) {
							Crew[Add(i, 2)] = 1;
						}
						else {
							Crew[i] = Crew[Add(i, 1)] = 1;
						}
					}
				}
			}
			int start;
			for (int i = 1; i <= n; i++) {
				if (Crew[i] != -1 && Crew[Add(i, 1)] != -1 && Crew[i] != Crew[Add(i, 1)]) {
					start = i;
					break;
				}
			}
			int savestart = start;
			bool first = true;
			while (true) {
				if (!first && start == savestart) {
					break;
				}
				first = false;
				if (Crew[start] + Crew[Add(start, 1)] == 1) {
					q(start, Add(start, 1), Add(start, 2));
					int x;
					cin >> x;
					res[start] = x;
					Crew[Add(start, 2)] = x;
				}
				start = Add(start, 1);
			}
			for (int i = 1; i <= n; i++) {
				if ()
			}
		}
		i = Add(i, 3);
		q(i, Add(i, 1), Add(i, 2));
	}
}
int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);	
	int t;
	t = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		run_case();
	}
	return 0;	
}