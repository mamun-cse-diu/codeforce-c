#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5],tmp1 = 0,tmp2 = 0,res = 0;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            if(arr[i][j]==1){
                tmp1 = i; tmp2 = j;
                break;
            }

        }
    }
    tmp1++; tmp2++;
    res = abs(3-tmp1)+abs(3-tmp2);

    cout<<res<<endl;

    return 0;

}
