#include <iostream>

#include <bits/stdc++.h>

using namespace std;


 

int main()

{

    int t;

    cin>>t;

    for (int i=0;i<t;i++)

    {

        string S;

        cin>>S;

        int count=0;

        sort(S.begin(),S.end());

        for (int j=1;j<S.length();j++)

        {

            if (S[j]-S[j-1] != 1 )

            {count=1;

             break;

            }

        }

        if(count==0)

        {cout<<"YES"<<endl;}

        else

        {cout<<"NO"<<endl;}

    }

}