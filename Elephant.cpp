#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,cont = 0;

    cin>>num;

    while(1){
        if(num>=5){
           cont += (num/5);
           num = num%5;
        }
        if(num>=4){
           cont += (num/4);
           num = num%4;
        }
        if(num>=3){
           cont += (num/3);
           num = num%3;
        }
        if(num>=2){
           cont += (num/2);
           num = num%2;
        }
        if(num>=1){
           cont += (num/1);
           num = num%1;
        }
        if(num == 0)
            break;
    }
    cout<<cont<<endl;

    return 0;

}
