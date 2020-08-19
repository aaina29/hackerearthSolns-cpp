#include<bits/stdc++.h>

using namespace std;

int main(){

string s;  
cin>>s;

int l = s.size(),
bou=0;

for(int i=0;i<l;i++){

     if(s[l-1]=='6'){ 
		cout<<-1<<endl;

        return 0;
	}

     else{ 
		if(s[i]!='6')
			bou++; 
	}

}

cout<<bou<<endl;

}