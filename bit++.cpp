#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,total = 0;

    cin>>n;

    while(n--)
    {
        string str;
        cin>>str;

        if(str[0]=='+' && str[1]=='+')
            total++;
        else if(str[1]=='+' && str[2]=='+')
            total++;
        else if(str[0]=='-' && str[1]=='-')
            total--;
        else if(str[1]=='-' && str[2]=='-')
            total--;
    }
    cout<<total<<endl;
    return 0;
}
