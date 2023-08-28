#include<bits/stdc++.h>
using namespace std;

void length_string(string strings){

    int count=0;
    int n = strings.size();
    for(int i=0; strings[i] != '\0'; i++){
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    string str;
    getline(cin,str);

    length_string(str);


    return 0;
}
