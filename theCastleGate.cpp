#include<bits/stdc++.h>

using namespace std;


 

int main()

{

int t;

cin >> t;

while(t--)

{

int n,count=0;

cin >> n;

for(int i=1;i<=n;i++)

{

for(int j=(i+1);j<=n;j++)

{

int z = i^j;

if(z<=n)

{

count++;

}

}

}

cout << count << endl;

}

return 0;

}