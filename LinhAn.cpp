#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string res = "It's a joke!";
	int t;
	while (cin >> t) {
		if (t == 42) {
			res = "I've found the meaning of life!";
			break;
		}
	}
	cout << res;
	return 0;
}