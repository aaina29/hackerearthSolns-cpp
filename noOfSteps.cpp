  
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//size of an array
	int cnt = 0;
	cin>>n;
    int a[n],b[n];
    int m= INT16_MAX;

	//inputing array A  
    for (int i = 0; i < n; i++)
    { 
		cin>>a[i];
        m=min(m,a[i]);
	}
	//INPUTING ARRAY B
    for (int j = 0; j < n; j++)
    {
		cin>>b[j];
	}
    bool notSame = true;
    while (notSame)                             //WILL ENTER LOOP ONLY IF notSame= true
	{
		notSame = false;
        for (int i = 0; i < n; i++) 
		{
			 while (a[i] > m && a[i] != 0) 
			 {
				 a[i] = a[i] - b[i];
                 notSame = true;
                 cnt++;
             }
			 if (m > a[i])
                 m = a[i];
                 if (m < 0)
                    break;
		}
    }
    if (m < 0)
        cout<<-1;
    else
        cout<<cnt;
    return 0;
}
