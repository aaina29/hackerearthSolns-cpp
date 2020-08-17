#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	//string
	char S[100];
	cin>>S;
	bool flag = true;
    int k = strlen(S);
	for(int i=0; i<k/2; ++i){
		
		if(S[i] != S[k-i-1]){
            
			flag= false;
			break;
		}

	}
	if(flag == true){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO";
	}
	return 0;
}


