#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,tmp;
    int j;

    cin>>str;

    int leg = str.size();
    if(leg==1){
        cout<<str<<endl;
    }
    else{
        tmp.push_back(str[0]);
        for(int i = 1,j=1; i<leg; i++){
            if(str[i]!='+'){
                tmp.push_back(str[i]);
                j++;
            }
        }

        sort(tmp.begin(),tmp.end());
        for(int i = 0,j=0; i<leg; i = i+2,j++){
            str[i] = tmp[j];
            str[i+1] = '+';
        }
        cout<<str<<endl;
    }
    return 0;

}
