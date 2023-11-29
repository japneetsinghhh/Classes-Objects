// Find the longest word in the string
#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    getline(cin,s);
    string temp="";
    string longestword="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            // cout<<temp<<endl;
            if(temp.length()>longestword.length()){
                longestword=temp;
            }
            temp="";
        } 
        else{
            temp+=s[i];
        }
    }
    if(temp.length())
    return 0;
}