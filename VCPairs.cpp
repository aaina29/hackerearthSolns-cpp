#include <bits/stdc++.h>

using namespace std;

 

void solve()

{

   int n;

   string s;

   cin>>n;

   cin>>s;

   int count=0;

   for(int i=1;i<n;i++)

   {

       if(!(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u')&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))

       {

           count++;

       }

       

   }

   cout<<count<<endl;

}

 

int main()

{

   int t;

   cin>>t;

   while(t--)

   {

       solve();

   }

   return 0;

}