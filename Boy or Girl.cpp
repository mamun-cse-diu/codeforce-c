#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin>>str;
    int len = str.length();

    for(int i = 0; i<str.length(); i++){
        for(int j = i+1; j<str.length(); j++){
            if(str[i]==str[j] && str[i]!='0'){
                str[j] = '0';
                len--;
            }
        }
    }
    if(len%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
