#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	//declaring variable
	int x=0; // denoting z
	int y=0; //denoting y

	//inputting string
	char ch[20];
	cin>>ch;

   
    for(int i=0; i<strlen(ch);i++){
		if(ch[i]=='z'){
			x++;
		}
		else{
			y++;
		}
	}
    if(y == 2*x){
		cout<<"Yes";
	}
	else  
        cout<<"No"; 
    return 0; 
}