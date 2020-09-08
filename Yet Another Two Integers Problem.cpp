#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--){
        long long a,b,absolot,mod,dev;
        cin>>a>>b;
        absolot = abs(a-b);
        dev = absolot/10;
        mod = absolot%10;
        if(mod!=0)
            dev++;
        cout<<dev<<endl;
    }
    return 0;
}
