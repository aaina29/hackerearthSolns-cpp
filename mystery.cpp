#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

long long int n;
while(cin>>n) // total no of inputs 
{
int count=0;
while(n)     // till n!=0
{
n=n&(n-1); 
count++;
}
cout << count <<"\n";
}
return 0;
}