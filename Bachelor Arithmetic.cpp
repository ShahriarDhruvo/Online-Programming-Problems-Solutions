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
	long long b, s, l = 1;
	while(cin >> b >> s) {
		if(b == 0 && s == 0) return 0;
		else if(b == 1 || b == 0) printf("Case %d: :-\\\n", l);
		else if(b > s) printf("Case %d: :-(\n", l);
		else if(b <= s) printf("Case %d: :-|\n", l);
		l++;
	}

	return 0;
}
