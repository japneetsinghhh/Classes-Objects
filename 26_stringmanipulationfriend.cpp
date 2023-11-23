#include<iostream>
#include<cstring>
using namespace std;
class Strings{
    private:
    char *str;
    public:
    Strings(char * s){
        str= new char[strlen(s)+1];
        strcpy(str,s);
    }
    void display(){
        cout<<str<<endl;
    }
    friend Strings operator+ (Strings,Strings);
    friend bool operator> (Strings,Strings);
    friend bool operator< (Strings,Strings);
    friend bool operator== (Strings,Strings);
};
Strings operator+(Strings s1, Strings s2){
    char * ans=new char[strlen(s1.str)+1];
    strcpy(ans,s1.str);
    strcat(ans,s2.str);
    return Strings(ans);
}
bool operator<(Strings s1, Strings s2){
    if(strcmp(s1.str,s2.str)<0){
        return true;
    }
    return false;
}
bool operator>(Strings s1, Strings s2){
	if(strcmp(s1.str,s2.str)>0){
		return true;
	}
	return false;
}
bool operator==(Strings s1,Strings s2){
	if(strcmp(s1.str,s2.str)==0){
		return true;
	}
	return false;
}
int main(int argc, char const *argv[])
{
    Strings s1("abc");
	Strings s2("defgh");

	Strings s3 = s1 + s2;
	s3.display();

	if(s1 < s2){
		cout << "s1 is less than s2 " << endl;
	}
	if(s1 > s2){
		cout << "s1 is greater than s2 " << endl;
	}
	if(s1==s2){
		cout << "s1 and s2 are equal " << endl;
	}

    return 0;
}
