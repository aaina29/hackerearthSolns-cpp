#include <bits/stdc++.h> 
using namespace std; 
  
void solve(string s)

{

    long int count = 0;

    long int l = s.size();

    for(int i =0; i< l;i++)

    {

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')

            {

            //the total occurence of each index in all the substrings  is given by the formula: (string_size - index) * (index + 1)

                count += (l - i) * (i + 1);

            }
    }

    cout << count << endl;
}
int main()

{

    int t;

    cin >> t;

    cin.ignore();

    for(int i = 0; i < t; i++)

    {

        string s;

        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        solve(s);

    }

    return 0;

}