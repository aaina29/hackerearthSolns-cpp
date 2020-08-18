#include <iostream>

using namespace std;

int main()

{

    int t; cin >> t;    

    while(t--)

    {

        long long a,b; cin>>a>>b;

        a>b?cout<<a/b:cout<<b/a; cout<<"\n";

    }                                   


}