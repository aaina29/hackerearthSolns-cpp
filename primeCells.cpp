#include <bits/stdc++.h>
    using namespace std;
 
  int isPrime(int n)
{
bool flag= true;
for(int i=2;i*i<=n;i++)
{
if(n%i==0)
{
flag= false;
break;
 
}
}
if(flag==true)
{
return 1;
}
else
{
return 0 ;
}
}
 
    int main()
    {
        //cout << "Hello World!" << endl;
        int n; cin>>n; int g[n+1][n+1],p[n+1][n+1];
        memset(g,0,sizeof(g)), memset(p,0,sizeof(p));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>g[i][j];
            }
        }
 
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //cin>>g[i][j];
                int l=g[i-1][j], r=g[i+1][j], u=g[i][j+1], d=g[i][j-1];
                if(l>100) l=0 ;
                if(r>100) r=0 ;
                if(u>100) u=0 ;
                if(d>100) d=0 ;
                sum=l+r+u+d;
                //cout<<p[i][j]<<" ";
                if(isPrime(sum)==1) cnt++;
            }
        }
        cout<<cnt<<"\n";
        return 0;
    }
