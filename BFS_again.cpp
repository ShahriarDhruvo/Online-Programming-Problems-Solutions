#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)
#define WHITE 1
#define GRAY 2
#define BLACK 3


using namespace std;

int main()
{
	FastIO;
	int sNode;
	cin >> sNode;
	int node, edge, n1, n2;
	cin >> node >> edge;
	int color[node], parent[node], adj[node][node], distance[node];

	for(int i=0; i<edge; i++){
		cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}

	for(int i=0; i<node; i++){
		parent[i] = -1;
		distance[i] = 0;
		color[i] = WHITE;
	}

	queue <int> q;
	
	q.push(sNode);

	while(!q.empty()){
		int x = q.front();
		q.pop();
		color[x] = GRAY;
		for(int i=0; i<node; i++){
			if(adj[x][i] == 1 && color[i] == WHITE){
				parent[i] = x;
				distance[i] = distance[x] + 1;
				q.push(i);
			}
		}
		color[x] = BLACK;
	}

	cout << distance[6] << "\n";

	return 0;	
}