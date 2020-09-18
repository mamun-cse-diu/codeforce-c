#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for (int i=0; i<s1.size(); i++){
        s1[i]=(toupper(s1[i]));
        s2[i]=(toupper(s2[i]));
    }
    int m = s1.compare(s2);
    if (m==0)
        cout <<"0"<<endl;
    else if(m>0)
        cout <<"1"<<endl;
    else
        cout <<"-1"<<endl;
    return 0;
}
