#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;
    cin>>n;

    int i=0;

    while(i<14)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES";
            return 0;
        }
        i++;
    }
    cout<<"NO";

    return 0;

}
