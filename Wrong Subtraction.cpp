#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,n,mod;

    cin>>num>>n;

    while(n--){
        mod = num%10;

        if(mod==0)
            num = num/10;
        else
            num--;
    }

    cout<<num<<endl;

    return 0;

}
