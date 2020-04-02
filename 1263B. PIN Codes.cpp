#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	// FastIO;
	int t;
	scanf(" %d", &t);
	while(t--){
		int n;
		scanf(" %d", &n);
		vector <int> vec;

		map <int, int> m;

		for(int i=0; i<n; i++){
			int s;
			scanf(" %d", &s);
			vec.push_back(s);
			m[s]++;
		}

		int chg = 0;

		for(int i=0; i<n; i++){
			int tmp = vec[i];

			if(m[tmp] > 1){
				chg++;
				bool gura = true;
				tmp = tmp-tmp%10;
				m[vec[i]]--;
				while(gura){
					if(m[tmp] == 0){
						gura = false;
						vec[i] = tmp;
						m[tmp] = 1;
					}
					else
						tmp += 1;
				}	
			}
		}

		cout << chg << "\n";

		for(int i=0; i<vec.size(); i++)
			printf("%0.4d\n", vec[i]);
	}
	
	return 0;
}