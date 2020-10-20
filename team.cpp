#include<iostream>

using namespace std;

int main(void)
{
    int number_problem;
    cin>>number_problem;

    int p,v,t,slove,count = 0;
    while(number_problem--){
        slove = 0;
        cin>>p>>v>>t;
         slove = p+v+t;

         if(slove>=2)
            count++;
    }
    cout<<count<<endl;
}
