#include<bits/stdc++.h>
using namespace std;

int palindromeOrNot_string(string strings){
    int n = strings.size() ;
    int s = 0;
    int e = n - 1;

    while(s<=e){
        if(strings[s] != strings[e]){
            return 0;
        }else{

            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    string str;
    getline(cin,str);

    cout<<palindromeOrNot_string(str);


    return 0;
}
