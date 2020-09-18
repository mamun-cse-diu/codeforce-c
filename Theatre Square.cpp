#include<iostream>

using namespace std;

int main()
{
    long long int n,m,a,b,c;
    cin>>n;
    cin>>m;
    cin>>a;
    if(n%a==0)
        b=n/a;
    else
        b=(n/a)+1;
    if(m%a==0)
        c=m/a;
    else
        c=(m/a)+1;
    cout<<b*c<<endl;

    return 0;
}
