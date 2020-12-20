#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int t,n;

    cin>>t;
    while(t--){
        cin>>n;
        if(n>45)
          cout<<"-1"<<endl;
        else{
            vector<int> v;
            for(int i = 9; i > 0; i--){
              if(n>=i){
                v.push_back(i);
                n -= i;
              }
            }
            for(int i = v.size()-1; i>=0; i--){
              cout<<v[i];
            }
            cout<<endl;
        }
    }
}
