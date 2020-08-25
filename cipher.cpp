#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);  // to get the string 
	int k;   // no of moves 
	cin>>k;
	string ans = ""; //empty string 
	for (int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			if(isupper(s[i])){    //CAPITAL LETTERS
				ans+=((((s[i]-65)+k)%26)+'A');   //The ASCII code of the letter"A" is 65.

			}
			if(islower(s[i])){    //lowercase letters
				ans+=((((s[i]-97)+k)%26)+'a');
			}
			continue;
		}
		if(isdigit(s[i])){
			int ch=(((s[i]-'0')+k)%10);
			ans += ch+'0';
			continue;
		}
		else{
			ans+=s[i];
		}
	}
cout<<ans;
}


/*The Caesar Cipher technique is one of the earliest and simplest method of encryption technique.  For example with a shift of 1, A would be replaced by B, 
B would become C, and so on. Thus to cipher a given text we need an integer value, known as shift which indicates the number of position each letter of 
the text has been moved down.
The encryption can be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, A = 0, B = 1,…, Z = 25. 
Encryption of a letter by a shift n can be described mathematically as.
