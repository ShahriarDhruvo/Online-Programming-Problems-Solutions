#include <bits/stdc++.h>

using namespace std;

int main()
{
	string word= "hello";
    string type;
    cin >> type;
    int length = type.length();
    int a = 0;
    int count = 0;
    for(int i=0; i<length; i++){
        if(type[i] ==word[a]){
            a++;
            count++;
        }
    }
    if(count==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
