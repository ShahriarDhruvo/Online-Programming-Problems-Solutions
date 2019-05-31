#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n;
    while(cin >> n) {
        if(n == 0) return 0;
        int arrX[n+1], arrY[n+1];
        for(int i=0; i<=n; i++) {
            cin >> arrX[i];
            cin >> arrY[i];
        }
        for(int i=1; i<=n; i++) {
            if(arrX[i] == arrX[0] || arrY[i] == arrY[0]) cout << "divisa\n";
            else if(arrX[i] < arrX[0] && arrY[i] < arrY[0]) cout << "SO\n";
            else if(arrX[i] > arrX[0] && arrY[i] > arrY[0]) cout << "NE\n";
            else if(arrX[i] < arrX[0] && arrY[i] > arrY[0]) cout << "NO\n";
            else if(arrX[i] > arrX[0] && arrY[i] < arrY[0]) cout << "SE\n";
        }
    }

    return 0;
}