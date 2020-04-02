#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int main()
{
	FastIO;
	int node, edge, n1, n2, sNode;
	//cout << "Starting Node: ";
	cin >> sNode;
	cin >> node >> edge;
	int adj[node][node], parent[node], distance[node], color[node];

	for(int i=0; i<node; i++){
		cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}

	for(int i=0; i<node; i++){
		color[i] = WHITE;
		parent[i] = -1;
		distance[i] = 0;
	}

	queue <int> q;

	q.push(sNode);

	while(!q.empty()){
		int x = q.front();
		q.pop();
		color[x] = GRAY;

		for(int i=0; i<node; i++){
			if(adj[x][i] == 1 && color[i] == WHITE){
				q.push(i);
				parent[i] = x;
				distance[i] = distance[x] + 1;
			}
		}

		color[x] = BLACK;
	}

	cout << distance[6] << "\n";

	return 0;	
}