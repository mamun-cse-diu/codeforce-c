#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,w,sum = 0;
    cin>>k>>n>>w;

    for(int i = 1; i<=w; i++){
        sum += (i*k);
    }

    if((sum-n)>0)
        cout<<sum-n<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
