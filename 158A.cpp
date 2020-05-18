#include<iostream>

using namespace std;

int main()
{
    int n,k,i,j=0;
    cin>>n;
    cin>>k;
    int arry[n];
    for(i=0; i<n; i++){
        cin>>arry[i];
    }
    for(i=0; i<n; i++){
        if(arry[i]>=arry[k-1] && arry[i])
            j++;
    }
    cout<<j<<endl;
    return 0;
}
