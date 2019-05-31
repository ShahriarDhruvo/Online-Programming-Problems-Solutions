#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n, l, r;
	scanf("%d", &n);
	int arr[n], ara[n], strl[s.length()];
	strl[0] = 0;
    for (int i=0; i<n; i++)
        cin >> arr[i] >> ara[i];
    for (int i=1; i<s.length(); i++) {
        if (s[i-1] == s[i]) strl[i] = strl[i-1] + 1;
        else strl[i] = strl[i-1];
    }
    for (int i=0; i<n; i++) {
        l = arr[i]-1;
        r = ara[i]-1;
        cout << strl[r]-strl[l] << endl;
    }

	return 0;
}
