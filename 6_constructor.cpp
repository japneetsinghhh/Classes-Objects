#include<iostream>
#include<cstring>
//constructors are called when we make an instance of the class
using namespace std;
class Student{
    private:
    char name[100];
    int roll_no;
    public:
    Student(char *n,int r){
         cout<<"Constructor called"<<endl;
         strcpy(name,n);
         roll_no=r;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no : "<<roll_no<<endl;
    }
};
int main(int argc, char const *argv[])
{
    char a[100] = "abc";
	Student s(a,123);	
	//s.set("abc",123);
	s.display();
    return 0;
}
