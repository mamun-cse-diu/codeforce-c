#include<iostream>

using namespace std;

int main(void)
{
    int t,n,m;

    cin>>t;

    while(t--){
        cin>>n>>m;

        int arr1[n],arr2[m],count = 0;

        for(int j = 0; j<n; j++)
            cin>>arr1[j];

        for(int j = 0; j<m; j++)
            cin>>arr2[j];

        for(int j = 0; j<n; j++){
            for(int k = 0; k<m; k++){
                if(arr1[j]==arr2[k])
                    count++;
            }
        }

        cout<<count<<endl;
    }
}
