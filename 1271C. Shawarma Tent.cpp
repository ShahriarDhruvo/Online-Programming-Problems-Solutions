#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	long long n, sx, sy, x, y;
	cin >> n >> sx >> sy;
	vector < pair<int, int> > vec;

	for(int i=0; i<n; i++){
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}

	long long ul = 0, ur = 0, dl = 0, dr = 0, rx = 0, lx = 0, uy = 0, dy = 0;

	for(int i=0; i<n; i++){
		if(vec[i].first < sx && vec[i].second > sy) ul++;
		else if(vec[i].first > sx && vec[i].second > sy) ur++;
		else if(vec[i].first < sx && vec[i].second < sy) dl++;
		else if(vec[i].first > sx && vec[i].second < sy) dr++;

		else if(vec[i].first == sx && vec[i].second > sy) uy++;
		else if(vec[i].first == sx && vec[i].second < sy) dy++;
		else if(vec[i].first > sx && vec[i].second == sy) rx++;
		else if(vec[i].first < sx && vec[i].second == sy) lx++;
	}

	long long up = uy+ur+ul, dw = dy+dl+dr, lf = lx+ul+dl, rg = rx+dr+ur;

	long long max_count = max(up, max(dw, max(lf, rg)));

	if(max_count == up){
		cout << up << "\n";

		cout << sx << " " << sy+1 << "\n";
	}
	else if(max_count == rg){
		cout << rg << "\n";

		cout << sx+1 << " " << sy << "\n";
	}
	else if(max_count == lf){
		cout << lf << "\n";

		cout << sx-1 << " " << sy << "\n";
	}
	else if(max_count == dw){
		cout << dw << "\n";

		cout << sx << " " << sy-1 << "\n";
	}

	return 0;
}
