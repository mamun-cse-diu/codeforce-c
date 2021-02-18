#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str1 = "hello";

    cin>>str;

    int j=0,tmp=0;
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i]==str1[j]){
            j++;
            tmp++;
            if(tmp==5)
                break;

        }
    }
    if(tmp==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
