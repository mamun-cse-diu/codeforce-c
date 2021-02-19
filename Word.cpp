#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin>>str;

    int tmp,s_cont = 0,up_cont = 0;

    for(int i = 0; i<str.size(); i++)
    {
        tmp = str[i];

        if(tmp>=65 && tmp<=90)
            up_cont++;
        else
            s_cont++;
    }
    if(up_cont>s_cont){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    else if(up_cont<=s_cont){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }

    return 0;
}
