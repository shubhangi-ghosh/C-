// prgram to toggle a string between its lowercase and uppercase characters.
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string\n";
    cin>>str;
    for(int i=0; i<str.length(); ++i)
        {
            if(str[i]>=65 && str[i]<=90)
                {
                    str[i]+=32;
                }
            else if(str[i]>=97 && str[i]<=122)
                {
                    str[i]-=32;
                }
        }
    cout<<"String after toggle: "<<str<<endl;   
}