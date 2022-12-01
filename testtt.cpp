#include<iostream>

using namespace std;

int main() {
	int i = 0;
	while (true) {
		if (cin >> i) {
			if (i == 19) {
				cout << 19;
				break;
			}
		}
		else {
			cout << "IMPOSSIBLE";
			break;
		}
	}
	return 0;
}
