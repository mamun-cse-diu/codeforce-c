#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n,i,len;
    string text;
    cin>>n;
    while(n!=0){
        cin>>text;
        len=0;
        for(i=0; text[i]!='\0'; i++){
            len++;
        }
        if(len>10){
            for(i=0; i<=len; i++){
                if(i==0)
                    cout<<text.substr(i,1);
                else if(i==len-2)
                    cout<<len-2;
                else if(i==len-1)
                    cout<<text.substr(i,1)<<endl;
            }
        }
        else
            cout<<text<<endl;
        n--;
    }
    return 0;
}
