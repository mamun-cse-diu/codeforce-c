#include<iostream>

using namespace std;

int main(void)
{
    int n,k,count,i=0,ans;
    cin>>n;

    while(n--){
        cin>>k;
        if(k>=3){
            if(k%2==0){
                ans = k/2 - 1;
            }
            else{
                ans = k/2;
            }
        }
        else{
            ans = 0;
        }
        cout<<ans<<endl;
    }
}
