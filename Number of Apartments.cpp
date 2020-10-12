#include<iostream>

using namespace std;
#define ll long long int
int main(void)
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0)
            cout<<n/3<<" 0 0 "<<endl;
        else if(n%5==0)
            cout<<" 0 "<<n/5<<" 0 "<<endl;
        else if(n%7==0)
            cout<<" 0 "<<" 0 "<<n/7<<endl;
        else if(n%3==1 && n/3>2)
            cout<<n/3-2<<" 0 1"<<endl;
        else if(n%3==2 && n/3>1)
            cout<<n/3-1<<" 1 0"<<endl;
        else
            cout<<"-1"<<endl;
    }
}
