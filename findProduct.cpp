#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    long long int ans;

    cin >> ans;

    t= t-1;

    while(t--){

        long long int r;

        cin >>r ;

        ans = (ans*r)%(1000000007);

    }

    cout << ans;

}
