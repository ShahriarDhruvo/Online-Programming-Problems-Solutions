#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n, m, x, y;
	vector <long long> chess, prog, chess1, prog1;
	
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> x >> y;
		chess.push_back(y);
		chess1.push_back(x);
	}

	sort(chess.begin(), chess.end());
	sort(chess1.begin(), chess1.end());

	cin >> m;

	for(int i=0; i<m; i++){
		cin >> x >> y;
		prog.push_back(x);
		prog1.push_back(y);
	}

	sort(prog.begin(), prog.end());
	sort(prog1.begin(), prog1.end());

	// cout << "Chess\n\n";
	// for(auto i:chess)
	// 	cout << i.first << " " << i.second << "\n";

	// cout << "\nProg\n\n";
	// for(auto i:prog)
	// 	cout << i.first << " " << i.second << "\n";

	long long ans = max(prog[prog.size()-1]-chess[0], chess1[chess1.size()-1]-prog1[0]);

	if(ans >= 0)
		cout << ans << "\n";
	else
		cout << 0 << "\n";

	return 0;
}