#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
      int count = 0;
      cin>>n>>k;
      if(n<k)
          cout<<k-n<<endl;
      else
          cout<<(n-k)%2<<endl;
    }
    return 0;
}
