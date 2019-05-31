#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

int main()
{
	int n, l = -1;
	cin >> n;
	n++;
	while(n--) {
		l++;
		char s[100000], q[100000];
		fgets(s, 100000, stdin);
		if(l == 0) continue;
		int k = 0;

		for(int i=0; i<strlen(s); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
				q[k] = s[i];
				k++;
			}
		}

		if(k/sqrt(k) == sqrt(k) || k == 0) {
			int h = sqrt(k);
			char mat[h][h];
			int t = 0;
			bool flag = true;
			for(int i=0; i<h; i++) {
				for(int j=0; j<h; j++) {
					mat[i][j] = q[t];
					t++; 
				}
			} 
			char rf[100000], rb[100000], lf[100000], lb[100000];
			for(int i=0; i<=h/2; i++) {
				for(int j=0; j<=h/2; j++) {
					if(mat[i][j] != mat[h-1-i][h-1-j] || mat[j][i] != mat[h-1-j][h-1-i]) {
						flag = false;
						break;
					} 
				}
				if(flag == false) break;
			}
			if(flag) printf("Case #%d:\n%d\n", l, h);
			else printf("Case #%d:\nNo magic :(\n", l);
		}
		else printf("Case #%d:\nNo magic :(\n", l);
	}

	return 0;
}
