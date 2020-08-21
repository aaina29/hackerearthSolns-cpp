

#include <iostream>

using namespace std;

int main() {
	//test cases
	int t;
	cin>>t;

	//number of friends 
	int n;
	//number of chocolates in a packet
	int m;

	for(int i=0;i<t; i++){
		cin>>n;
		cin>>m;
		if(m%n==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}

}