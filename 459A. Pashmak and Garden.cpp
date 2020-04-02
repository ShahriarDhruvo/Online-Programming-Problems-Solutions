#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	// FastIO;
	int x1, y1, x2, y2;
	scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
	// cin >> x1 >> y1 >> x2 >> y2;

	if((x1 != x2 && y1 != y2) && abs(x1-x2) != abs(y1-y2))
		printf("-1\n");
	else if(x1 != x2 && y1 != y2)
		printf("%d %d %d %d", x2, y1, x1, y2);
	else if(x1 == x2) printf("%d %d %d %d", x1+abs(y1-y2), y1, x2+abs(y1-y2), y2);
	else if(y1 == y2) printf("%d %d %d %d", x1, y1+abs(x1-x2), x2, y1+abs(x1-x2));
	
	return 0;
}