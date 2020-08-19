
#include<bits/stdc++.h>

using namespace std;

char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()

{

    string str;

    cin>>str;

    int sum=0;

    for(int i=0;i<str.size();i++)

    {

        char k=str[i];

        for(int i=0;i<26;i++)

        {

            if(k==arr[i])

             sum=sum+(i+1);

        }

    }

    cout<<sum<<endl;

}