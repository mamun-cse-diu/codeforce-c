#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter = 0;

    cin>>n;

    string str;

    cin>>str;

    for(int i = 0; i<n; i++){
        if(str[i]!=str[i+1])
            continue;
        counter++;
    }

    cout<<counter<<endl;

    return 0;
}
