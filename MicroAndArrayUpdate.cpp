#include <bits/stdc++.h> 

#include <iostream>

using namespace std;
int findSmallestElement(int arr[], int n){
   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
int main() {
	//test cases
	int t;
	cin>>t;

	//size of an array
	int n;
	// value of k
	int k;

	for(int i=0; i<t; i++){
		cin>>n;
		cin>>k;
		int arr[n];
		for(int j=0; j<n; j++){
			cin>>arr[j];
		}
		int smallest = findSmallestElement(arr, n);
		if(smallest<k){
			cout<<k-smallest<<"\n";
		}
		else{
			cout<<"0"<<"\n";
		}
	}

     return 0;

}


