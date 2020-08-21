#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
long long int m=INT_MIN,s,n,k;
cin>>n;
long long int a[n],b[n];
cin>>a[0];
b[0]=a[0];
for(int i=1;i<n;i++){
cin>>a[i];
b[i]=b[i-1]+a[i];
}
for(int i=0;i<n;i++){
s=a[i];
k=2;
for(int j=i;j<n;){
if(j+k<n){
s+=b[j+k]-b[j];
}
else{
break;
}
j+=k;
k++;
}
if(s>m){
m=s;
}
}
cout<<m;
return 0;
}