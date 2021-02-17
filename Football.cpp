#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int cont = 1,tmp = 0;

    for(int i = 0; i<str.length(); i++){
        for(int j = i+1; j<str.length(); j++){
            if(str[i]==str[j]){
                cont++;
                continue;
            }
            else{
                break;
            }
        }
        if(cont>=7){
            tmp = 1;
            break;
        }
        cont = 1;

    }
    if(tmp==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
