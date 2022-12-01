/*
Dijkstra
Find the minimum distances from a node x to other node
Complexity: O(n + mlogm)
*/
const INF = 1e9 + 10;
vector<int> distance(n + 5);
vector<bool> processed(n + 5, false);
for (int i = 1; i <= n; i++) distance[i] = INF;
distance[x] = 0;
priority_queue<pair<int, int>> q;
q.push({0, x});
while (!q.empty()) {
	int a = q.top().second;
	q.pop();
	if (processed[a]) continue;
	processed[a] = true;
	for (auto u : adj[a]) {
		int b = u.first, w = u.second;
		if (distance[a] + w < distance[b]) {
			distance[b] = distance[a] + w;
			q.push({-distance[b], b});
		}
	}
}
