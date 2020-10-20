#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        int fx,c;
        c = log10(x);
        fx = x/pow(10,c);

        int sum = 10*(fx-1);
        for(int i = 1; i<=c+1; i++)
            sum +=i;

        cout<<sum<<endl;

    }
}
