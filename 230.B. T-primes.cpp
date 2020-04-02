#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	// FastIO;
	int n;
	scanf(" %d", &n);
	long long arr[n];

	for(int i=0; i<n; i++)
		scanf("%lld", &arr[i]);

	bool flag;
	long long tmp;
	map <long long, int> m;

	for(int i=0; i<n; i++){
		if(m[arr[i]] == 1){
			printf("YES\n");
	        continue;
		}
		else if(m[arr[i]] == 2){
			printf("NO\n");
	        continue;
		}

		tmp = sqrt(arr[i]);

		if(tmp*tmp == arr[i]){
			if(tmp==2 || tmp==3 || tmp==7 || tmp==5){
		        printf("YES\n");
		        m[arr[i]] = 1;
		        continue;
			}
		    else if(tmp%2==0 || tmp==1){
		        printf("NO\n");
		        m[arr[i]] = 2;
		        continue; 
		    }
		    else{
		    	flag = true;
		        for(long long j=3; j<=sqrt(tmp); j+=2){
		            if(tmp%j == 0){
		                flag = false;
		                break;
		            }
		        }
		    }
		  
		    if(flag){ 
		    	printf("YES\n");
		    	m[arr[i]] = 1;
		    }
		    else{
		    	printf("NO\n");
		    	m[arr[i]] = 2;
		    }
		}
		else{
	    	printf("NO\n");
	    	m[arr[i]] = 2;
	    }		
	}
	
	return 0;
}