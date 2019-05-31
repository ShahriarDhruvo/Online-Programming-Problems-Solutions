#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l = 0;
    int test = 0, test2 = 0, test3 = 0;
    int val;
    int chk[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    cin >> val;

    for (int i=0; i<14; i++) {
        if (val % chk[i] == 0) l = 1;
    }

    if (val < 100) {
        test = val % 10;
        test2 = (val - test) / 10;
        if ((test == 4 || test == 7) && (test2 == 4 || test2 == 7)) l = 1;
    }
    else {
        test = val % 10;
        test2 = ((val % 100) - test) / 10;
        test3 = (val - (val % 100)) / 100;
        if ((test == 4 || test == 7) && (test2 == 4 || test2 == 7) && (test3 == 4 || test3 == 7)) l = 1;
    }

    if (l == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
