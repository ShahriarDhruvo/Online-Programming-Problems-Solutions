#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n;
    cin >> n;
    while(n--) {
        int r, c, d, x, y;
        cin >> r >> c >> d;
        char grid[r][c], temp[r][c];
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) { 
                cin >> grid[i][j];
                temp[i][j] = grid[i][j];
            }
        }
        for(int i=0; i<d; i++) {
            for(int j=0; j<r; j++) {
                for(int k=0; k<c; k++) {
                    y = 0;
                    x = -1;
                    if(k+x < 0) x = 0;
                    if((grid[j][k] == 'S' && grid[j+y][k+x] == 'P') ||
                    (grid[j][k] == 'P' && grid[j+y][k+x] == 'S')) {
                        temp[j][k] = 'S';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'P' && grid[j+y][k+x] == 'R') ||
                    (grid[j][k] == 'R' && grid[j+y][k+x] == 'P')) {
                        temp[j][k] = 'P';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'R' && grid[j+y][k+x] == 'S') ||
                    (grid[j][k] == 'S' && grid[j+y][k+x] == 'R')) {
                        temp[j][k] = 'R';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    y = 0;
                    x = 1;
                    if(k+x > c-1) x = 0;
                    if((grid[j][k] == 'S' && grid[j+y][k+x] == 'P') ||
                    (grid[j][k] == 'P' && grid[j+y][k+x] == 'S')) {
                        temp[j][k] = 'S';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'P' && grid[j+y][k+x] == 'R') ||
                    (grid[j][k] == 'R' && grid[j+y][k+x] == 'P')) {
                        temp[j][k] = 'P';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'R' && grid[j+y][k+x] == 'S') ||
                    (grid[j][k] == 'S' && grid[j+y][k+x] == 'R')) {
                        temp[j][k] = 'R';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    y = -1;
                    x = 0;
                    if(j+y < 0) y = 0;
                    if((grid[j][k] == 'S' && grid[j+y][k+x] == 'P') ||
                    (grid[j][k] == 'P' && grid[j+y][k+x] == 'S')) {
                        temp[j][k] = 'S';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'P' && grid[j+y][k+x] == 'R') ||
                    (grid[j][k] == 'R' && grid[j+y][k+x] == 'P')) {
                        temp[j][k] = 'P';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'R' && grid[j+y][k+x] == 'S') ||
                    (grid[j][k] == 'S' && grid[j+y][k+x] == 'R')) {
                        temp[j][k] = 'R';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    y = 1;
                    x = 0;
                    if(j+y > r-1) y = 0;
                    if((grid[j][k] == 'S' && grid[j+y][k+x] == 'P') ||
                    (grid[j][k] == 'P' && grid[j+y][k+x] == 'S')) {
                        temp[j][k] = 'S';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'P' && grid[j+y][k+x] == 'R') ||
                    (grid[j][k] == 'R' && grid[j+y][k+x] == 'P')) {
                        temp[j][k] = 'P';
                        if(grid[j][k] != temp[j][k]) continue;
                    }

                    else if((grid[j][k] == 'R' && grid[j+y][k+x] == 'S') ||
                    (grid[j][k] == 'S' && grid[j+y][k+x] == 'R')) temp[j][k] = 'R';
                }
            }
            for(int i=0; i<r; i++) 
                for(int j=0; j<c; j++) 
                    grid[i][j] = temp[i][j];
        }
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) 
                cout << grid[i][j];
            cout << "\n";
        }
        if(n != 0) cout << "\n";
    }

    return 0;
}