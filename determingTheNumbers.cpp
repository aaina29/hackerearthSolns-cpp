#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll n;cin>>n;ll arr[n];
for(ll i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);

ll j=0,k=1;

while((j<n)||(k<n))
{
if((arr[j]^arr[k])!=0)
{
cout<<arr[j]<<" ";
j++;k++;
}
else
{
j=j+2;k=k+2;
}
}

return 0;
}