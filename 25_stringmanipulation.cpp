#include<iostream>
#include<cstring>
using namespace std;
class Strings{
    char * str;
    public:
    Strings(char * s){
        str= new char[strlen(s)+1];
        strcpy(str,s);
    }
    Strings operator+(Strings s){
        char * ans=new char[strlen(str)+1];
        strcpy(ans,str);
        strcat(ans,s.str);
        return Strings(ans);
    }
    bool operator<(Strings s){
        if(strcmp(str,s.str)<0){
            return true;
        }
        return false;
    }
    bool operator>(Strings s){
        if(strcmp(str,s.str)>0){
            return true;
        }
        return false;
    }
    bool operator==(Strings s){
        if(strcmp(str,s.str)==0){
            return true;
        }
        return false;
    }
    void display(){
        cout<<str<<endl;
    }

};
int main(){
    char temp[]="abcd";
    char temp1[]="defgh";
    Strings s1(temp);
    Strings s2(temp1);
    Strings s3=s1+s2;
    s3.display();

    if(s1<s2){
        cout<<"s1 is smaller than s2"<<endl;
    }
    if(s1>s2){
        cout<<"s1 is greater than s2"<<endl;
    }
    else{
        cout<<"both strings are equal"<<endl;
    }
}