#include<bits/stdc++.h>

using namespace std;

int main()

{

    long long int t,a,b,c;

    cin>>t;

    while(t--)

    {

     cin>>a>>b>>c;

     cout<<(abs((b-a)-(c-b))+1)/2<<endl;

    }

}
