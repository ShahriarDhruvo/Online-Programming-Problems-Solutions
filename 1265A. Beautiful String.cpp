#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int t;
	cin >> t;
	while(t--){
		string s;
		bool flag = true;
		cin >> s;

		for(int i=0; i<s.size(); i++){
			if(s[i] == '?'){
				if(i-1 >= 0 && i+1 <= s.size()-1){
					if((s[i-1] == 'a' && s[i+1] == 'b') || (s[i-1] == 'b' && s[i+1] == 'a')) s[i] = 'c';
					else if((s[i-1] == 'a' && s[i+1] == 'c') || (s[i-1] == 'c' && s[i+1] == 'a')) s[i] = 'b';
					else if((s[i-1] == 'b' && s[i+1] == 'c') || (s[i-1] == 'c' && s[i+1] == 'b')) s[i] = 'a';

					else if(s[i-1] == 'a' && s[i+1] == 'a') s[i] = 'c';
					else if(s[i-1] == 'b' && s[i+1] == 'b') s[i] = 'a';
					else if(s[i-1] == 'c' && s[i+1] == 'c') s[i] = 'b';
					else{
						if(i+2 <= s.size()-1){
							if(s[i-1] == 'b' && s[i+1] == '?' && s[i+2] != 'a') s[i] = 'a';
							else if(s[i-1] == 'b' && s[i+1] == '?' && s[i+2] == 'a') s[i] = 'c';
							else if(s[i-1] == 'a' && s[i+1] == '?' && s[i+2] != 'b') s[i] = 'b';
							else if(s[i-1] == 'a' && s[i+1] == '?' && s[i+2] == 'b') s[i] = 'c';
							else if(s[i-1] == 'c' && s[i+1] == '?' && s[i+2] != 'a') s[i] = 'a';
							else if(s[i-1] == 'c' && s[i+1] == '?' && s[i+2] == 'a') s[i] = 'b';
						}
						else{
							if(s[i-1] == 'b' && s[i+1] == '?') s[i] = 'a';
							else if(s[i-1] == 'a' && s[i+1] == '?') s[i] = 'b';
							else if(s[i-1] == 'c' && s[i+1] == '?') s[i] = 'a';
							else{
								flag = false;
								break;
							}
						}
					}
				}
				else if(i+1 <= s.size()-1){
					if(s[i+1] == 'b' || s[i+1] == 'a') s[i] = 'c';
					else if(s[i+1] == 'c' || s[i+1] == 'a') s[i] = 'b';
					else if(s[i+1] == 'c' || s[i+1] == 'b') s[i] = 'a';
					else if(s[i+1] == '?') s[i] = 'a';
					else{
						flag = false;
						break;
					}
				}
				else{
					if(s.size() != 1){
						if(s[i-1] == 'b' || s[i-1] == 'a') s[i] = 'c';
						else if(s[i-1] == 'c' || s[i-1] == 'a') s[i] = 'b';
						else if(s[i-1] == 'c' || s[i-1] == 'b') s[i] = 'a';
						else{
							flag = false;
							break;
						}		
					}
					else s[i] = 'a';
				}
			}			
		}

		if(flag){
			for(int i=0; i<s.size(); i++){
				if(s[i] == s[i+1]){
					flag = false;
					break;
				}
			}
			if(flag){
				for(int i=0; i<s.size(); i++){
					cout << s[i];
				}
				cout << "\n";
			}
			else
				cout << -1 << "\n";
		}
		else
			cout << -1 << "\n";
	}

	return 0;
}