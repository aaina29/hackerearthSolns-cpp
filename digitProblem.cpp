
#include <iostream>

using namespace std;


int main()

{

string X;

int k,m=0,a=0;

cin >> X >> k;

int l = X.length();

for(int j=0;j<l;j++){
	if(X[j] != '9'){
		m = a++;
    }

    else{
		m = a;
	}
}

if(k < m){
	for(int z=0;z<k;z++){
		if(X[z] == '9'){
			k++;
		}
		else{
			X[z] = '9';
		}
	}
    cout << X ;
}

else{
	for (int y=0;y<l;y++){
		X[y] = '9';
	}
	cout << X ;
}
return 0;
}