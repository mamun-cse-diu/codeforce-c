#include<iostream>


using namespace std;

int main(void)
{
    int t,n,j;

    cin>>t;
    while(t--){
        cin>>n;
        long long int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        for(int i= 0,j = n-1; i<n/2+1; i++,j--){
            if(i<n/2)
              cout<<arr[i]<<" "<<arr[j]<<" ";
            else if(n%2!=0)
              cout<<arr[i];
        }
        cout<<endl;
    }
}
