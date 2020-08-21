#include <bits/stdc++.h>

using namespace std;



int main(){

long long int D,Oc,Of,Od,Cs,Cb,Cm,Cd; 

long long int Ct=0;

long long int Ot=0;

    cin>>D;

    cin>>Oc>>Of>>Od>>Cs>>Cb>>Cm>>Cd;

    Ot = Oc + (D-Of)*Od;

Ct = Cb + ((D/Cs)*Cm) + (D*Cd);

cout << ((Ot<=Ct) ? "Online Taxi" : "Classic Taxi");

    return 0;

}