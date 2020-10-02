#include<iostream>

using namespace std;

int main(void)
{
    int t;
    cin>>t;

    int n,cnt=0,tmp=0;

    while(t--){
        cin>>n;
        if(n>0){
            tmp+=n;
        }
        else
            if(tmp<1)
                cnt++;
            else
                tmp--;
    }
    cout<<cnt<<endl;

}
