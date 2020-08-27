#include <bits/stdc++.h>
using namespace std;
int findSmallestElement(int prefixSum[], int l){
   int temp = prefixSum[0];
   for(int i=0; i<l; i++) {
      if(temp>prefixSum[i]) {
         temp=prefixSum[i];
      }
   }
   return temp;
}
int main(){
    string s;
    cin>>s;
    
    int l=s.length();
    int sum[l];
    int open=0;
    int close=0;
    int add=0;
    int k=0;
    int prefixSum[l];
    int n;
    
    for(int i=0; i<l;i++){
        if(s[i]=='(')
        { 
            open++;
            sum[i] = 1;
        }
        else{
            close++;
            sum[i] = -1;
        }
    }
    /*cout<<open<<endl;
    cout<<close<<endl; */
   
   if(open == close){
        for(int j=0; j<l; j++){
           add = add+ sum[j];
           prefixSum[j] = add;
        }
        
        /*for(int k=0; k<l; k++){
            cout<<prefixSum[k];
        }*/
        //cout<< *min_element(prefixSum, prefixSum + l);
        //int* i1; 
        //i1 = std::min_element(prefixSum, prefixSum+l); 
  
        //cout << *i1 << "\n"; 
        int smallest = findSmallestElement(prefixSum, l);
        //cout<<smallest;
        cout<< count(prefixSum, prefixSum+l, smallest); 

    }
    else{
        cout<<"0";
    }
    return 0;
}
