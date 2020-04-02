// Didn't solved this.
//7
//abcdefg
//efgadcb
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        char s[m], t[m];
        vector <int> vec;

        for(int i=0; i<m; i++){
            cin >> s[i];
        }
        for(int i=0; i<m; i++){
            cin >> t[i];
            if(s[i] != t[i]) 
                vec.push_back(i);
        }

        m *= 2;
        bool no = true, mo = false;

        while(m--){
	        for(int i=0; i<vec.size(); i++){
	        	for(int j=0; j<vec.size()-1; j++){
		        	if(vec[i] != -1 && vec[j+1] != -1 && s[vec[i]] != t[vec[j+1]]){
						swap(s[vec[i]], t[vec[j+1]]);

			            if(s[vec[i]] == t[vec[i]]){
			            	vec[i] = -1;
			            	if(s[vec[j+1]] == t[vec[j+1]]){
			            		vec[j+1] = -1;
			            	}
			            }
			            else if(s[vec[j+1]] == t[vec[j+1]]){
			            	vec[j+1] = -1;
			            } 
			            else if(s[vec[j+1]] != t[vec[i]]){
			            	swap(s[vec[j+1]], t[vec[i]]);
			            	m--;

			            	if(s[vec[i]] == t[vec[i]]){
				            	vec[i] = -1;
				            	if(s[vec[j+1]] == t[vec[j+1]]){
				            		vec[j+1] = -1;
				            	}
			            	}
				            else if(s[vec[j+1]] == t[vec[j+1]]){
				            	vec[j+1] = -1;
				            }
			            }   
			            i++;    		
		        	}
		        	if(m == 0){
		        		mo = true;
		        		break;
		        	}
	        	}
	        	if(mo) break;
	        }
	        int count = 0;
		    for(int i=0; i<vec.size(); i++){
		    	if(vec[i] == -1) 
		    		count++;
		    }

		    if(count == vec.size()){
		    	cout << "YES\n";
		    	no = false;
		    	break;
		    }
	    }
	    
	    if(no) cout << "NO\n";
	}
	
	return 0;
}
