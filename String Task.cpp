#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
    string str, tmp = "AaOoYyEeUuIi";
    //char tmp1;
    cin>>str;
    //cout<<str;
    for(unsigned int i = 0; i<tmp.size(); i++)
        str.erase(remove(str.begin() , str.end(), tmp[i]),str.end());
    for(int j = 0; j<str.size(); j++){
        str[j] = tolower(str[j]);
        cout<<"."<<str[j];
    }
}
