#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,t;
    cin>>n>>t;

    string str;

    cin>>str;

    while(t--)
    {
        for(int j = 0; j < n;)
        {
            if(str[j] == 'B' && str[j+1] == 'G')
            {
                str[j] = 'G';
                str[j+1] = 'B';
                j +=2;
            }
            else
                j++;
        }
    }
    cout<<str;

    return 0;
}
