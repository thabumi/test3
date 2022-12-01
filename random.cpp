#include <bits/stdc++.h>

using namespace std;



class WeightedDice {
	public:
		vector<double> v;
		int tar;
		double winChance(vector<double> prob, int target) {
			vector<double> dp(target + 5, 0);
			dp[0] = 1;
			for (int i = 1; i <= target; i++) {
				for (int j = 1; j <= 6; j++) {
					if (i - j >= 0) {
						dp[i] += dp[i - j] * prob[j - 1];
					}
				}
			}
			return dp[target];
		}
};

int main() {
	WeightedDice w;
	vector<double> t = 
{ 0.2, 0.2, 0.2, 0.2, 0.1, 0.1 };
	int ta = 1;
	w.v = t;
	w.tar = ta;
	cout << w.winChance(w.v,w.tar);
}
