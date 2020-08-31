#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t,i;
    int n,x;
    cin>>t;
    while(t!=0){
        cin>>n>>x;
        long long int a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        int c = 0;
        for(i=0; i<n; i++){
            if(a[i]%2!=0)
                c++;
        }
        if(c==0 || (n==x && c%2==0) || (c==n) && (x%2==0))
            cout<<"NO"<<endl;
        else
           cout<<"YES"<<endl;
        t--;
    }
    return 0;
}
