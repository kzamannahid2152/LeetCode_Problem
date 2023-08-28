#include<bits/stdc++.h>
using namespace std;

void reverse_string(string strings){

    int n = strings.size();
    for(int i=0; i<n/2; i++){
        swap(strings[i],strings[n-i-1]);
    }

    cout<<strings<<endl;
}

int main()
{
    string str;
    getline(cin,str);

    reverse_string(str);


    return 0;
}
