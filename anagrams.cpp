#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int Q;
string a,b;
cin>>Q;
while(Q--)
{
cin>>a>>b;
int A[26]={0},sum=0;
for(int i=0;i<a.length();i++)
{
A[a[i]-'a']++;
}
for(int i=0;i<b.length();i++)
{
A[b[i]-'a']--;
}
for(int i=0;i<26;i++)
{
sum=sum+abs(A[i]);
//cout<<A[i]<<" ";
}
cout<<sum<<"\n";
}

}
	