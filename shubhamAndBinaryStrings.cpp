#include<bits/stdc++.h>

using namespace std;

int main(){

int test;

cin>>test;

while(test--){

int total = 0 ,n;

cin>>n;

string str;

cin>>str;

for(int i = 0 ; i < n ;i++)

if(str[i] == '0')

total++;

cout<<total<<"\n";   //because binary form of even no contains last bit as 0, SO left rotations = no of bits 
                     //no of 0 Bit in binary form = no of even nos(even decimal equivalent)

}