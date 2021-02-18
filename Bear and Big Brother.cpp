#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,cont = 0;

    cin>>n1>>n2;

    if(n1>n2){
        cout<<cont<<endl;
    }
    else{
        while(1){
            n1 *=3;
            n2 *=2;
            cont++;
            if(n1>n2)
                break;
        }
        cout<<cont<<endl;
    }

    return 0;

}
