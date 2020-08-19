
#include <bits/stdc++.h>

using namespace std;

int main() {
	//test cases
	int T;
	cin>>T;

	

    //SIZE OF THE MATRIX
	int N;
	while(T--){
		cin>>N;
		string a[N];
		for(int i=0; i<N; i++){
			cin>>a[i];
		}
		bool flagRow= true;
        bool flagCol= true;
	
		for(int m=0; m<N; m++){
			bool flag = true;
			for(int n=0; n<N/2; n++){
				if(a[m][n]!=a[m][N-n-1]){
					flag = false;
					break;
				}
			}
			if(!flag){
				flagRow = false;
				break; 
			}
		}
		for(int m=0; m<N; m++){
			bool flag = true;
			for(int n=0; n<N/2; n++){
				if(a[m][n]!=a[N-m-1][n]){
					flag = false;
					break;
				}
			}
			if(!flag){
				flagCol = false;
				break; 
			}
        }
		if(flagRow && flagCol){
			puts("YES\n");
		}
		else{
			puts("NO\n");
		}
	}
	return 0;
}