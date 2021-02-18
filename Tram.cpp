#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int tmp = 0,cont = 0,a,b;
    while(n--)
    {
        cin>>a>>b;

        cont = (cont - a) + b;
        if(tmp<cont)
            tmp = cont;
    }

    cout<<tmp<<endl;
    return 0;
}
