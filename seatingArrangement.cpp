
// Sample code to perform I/O:

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//inputting test case
	int T;
	cin>>T;

	//input seat number
	int N;
    
	//remainder variable
	int rem;

	for(int i=1;i<=T; i++){
		
		cin>>N;
		rem= N% 12;
        
		//	WINDOW SEAT CONDITIONS
		if(rem ==1){
			cout<<N+11<<" "<<"WS"<<endl;
		}
		else if(rem==6){
			cout<<N+1<<" "<<"WS"<<endl;
		}
		else if(rem==7){
			cout<<N-1<<" "<<"WS"<<endl;
		}
		else if(rem==0){
			cout<<N-11<<" "<<"WS"<<endl;
		}

		// 	MIDDLE SEAT CONDITIONS
		else if(rem==2){
			cout<<N+9<<" "<<"MS"<<endl;
		}
		else if(rem==5){
			cout<<N+3<<" "<<"MS"<<endl;
		}
		else if(rem==11){
			cout<<N-9<<" "<<"MS"<<endl;
		}
		else if(rem==8){
			cout<<N-3<<" "<<"MS"<<endl;
		}

		// AISLE SEAT CONDITIONS
		else if(rem==3){
			cout<<N+7<<" "<<"AS"<<endl;
		}
		else if(rem==4){
			cout<<N+5<<" "<<"AS"<<endl;
		}
		else if(rem==10){
			cout<<N-7<<" "<<"AS"<<endl;
		}
		else if(rem==9){
			cout<<N-5<<" "<<"AS"<<endl;
		}
		else{
			cout<<"not valid"<<endl;
		}
	}

}