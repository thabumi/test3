#include <bits/stdc++.h>
 
using namespace std;

int cnt;
//https://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/
map<multiset<int>, int> m;
void findFourElements(int arr[], int n, int X)
{
    // Store sums of all pairs
    // in a hash table
    unordered_map<int, pair<int, int> > mp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            mp[arr[i] + arr[j]] = { i, j };
 
    // Traverse through all pairs and search
    // for X - (current pair sum).
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
 
            // If X - sum is present in hash table,
            if (mp.find(X - sum) != mp.end()) {
 
                // Making sure that all elements are
                // distinct array elements and an element
                // is not considered more than once.
                pair<int, int> p = mp[X - sum];
                if (p.first != i && p.first != j
                    && p.second != i && p.second != j && !m[{p.first, p.second, i, j}]) {
                    cnt++;
                    m[{p.first, p.second, i, j}] = 1;
                }
            }
        }
    }
}
void run_case() {
	cnt = 0;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
//	int x = 0;
//	map<int, pair<int, int>> Map = twoSum(a, n);
	findFourElements(a, n, 0);
	cout << cnt;
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
