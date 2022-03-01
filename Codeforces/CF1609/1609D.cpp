#include<bits/stdc++.h>
 
using namespace std;
 
int n;
vector<int> Size;
vector<int> parent;
vector<int> visited;
 
void make_set(int v) {
    parent[v] = v;
    Size[v] = 1;
}
int find_set(int v) {
    if (v == parent[v]) {
    	return v;
	}
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (Size[a] < Size[b]) {
        	swap(a, b);
		}
        parent[b] = a;
        Size[a] += Size[b];
    }
}
 
void run_case(){
	cin >> n;
	int d;
	cin >> d;
	Size.resize(n + 1);
	parent.resize(n + 1);
	visited.resize(n + 1);
	for (int i = 1; i <= n; i++) {
		make_set(i);
	}
	int countRemain = 0;
	for (int i = 1; i <= d; i++) {
		int x, y;
		cin >> x >> y;
		vector<int> miniGraph;
		
		int res = 0;
		int P1 = find_set(x);
		int P2 = find_set(y);
		if(P1 != P2) {
			union_sets(x, y);
		}
		else {
			countRemain = countRemain + 1;
		}
		for (int j = 1; j <= n; j++) {
			visited[j] = 0;
		}
		for (int j = 1; j <= n; j++){
		    int P = find_set(j);
		    if (visited[P] == 0) {
		    	visited[P] = 1;
		    	miniGraph.emplace_back(Size[P]);	        
			}
		}
		sort(miniGraph.begin(), miniGraph.end());
		for (int j = 1; j <= countRemain + 1; j++) {
		    res = res + miniGraph[miniGraph.size() - j];
		}
		cout << res - 1 << '\n';
	}
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	t = 1;
//	cin >> t;
	for (int i = 0; i < t; i++){
		run_case();
	}
	return 0;	
}
