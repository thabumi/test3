#include <bits/stdc++.h>

using namespace std;

void run_case(){
	long long n, k;
	cin >> n >> k;
	n--;
	long long sum = 0;
	long long res = 1;
	long long count = 0;
	while (true) {
		if (sum >= n) {
			break;
		}
		sum += res;
		count++;
		res *= 2;
		
		if (res > k) {
			count += (n - sum + k - 1) / k;
			break;
		}
	}
	cout << count << '\n';
	return;

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		run_case();
	}
	return 0;	
}

