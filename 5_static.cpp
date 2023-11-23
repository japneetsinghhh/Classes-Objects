#include<iostream>
using namespace std;
class Student{
    public:
    char name[100];
    int roll_no;
    static int ct;      //static functions and variables can be accessed without making an object
    void set(char * n, int r){
        ct++;
        strcpy(name,n);
        roll_no=r;
    }
    int get_rollno(){
        return roll_no;
    }
    char * get_name(){
        return name;
    }
    void display(){
        cout<<"Name is : "<<name<<" Roll no is : "<<roll_no<<endl;;
    }
    static void print(){
        cout<<ct<<endl;
        cout<<"Static member function called"<<endl;
    }
};
int Student::ct=10; //value initialisation
int main(int argc, char const *argv[])
{
    // Student s1,s2,s3;
    // int ct=10;
    // char a[]="abc";
    // s1.set(a,123);
	// s2.set("def",234);
	// s3.set("fhi",345);
	// s1.display();
	// s2.display();
	// s3.display();
    cout<< Student::ct <<endl; //printing without making an object
	Student::print();  //accessing print function without making an object
    return 0;
}
