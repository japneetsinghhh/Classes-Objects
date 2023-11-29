#include<iostream>
using namespace std;
// with virtual = runtime, dynamic binding, late binding
// without virtual = compile time, static binding, early binding
// A virtual function (also known as virtual methods) is a member
// function that is declared within a base class and is re-defined 
// (overridden) by a derived class. When you refer to a derived class 
// object using a pointer or a reference to the base class, you can call
// a virtual function for that object and execute the derived class’s 
// version of the method.
class A{
    public:
    virtual void display(){
        cout<<"Class A"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Class B"<<endl;
    }
};
class C:public B{
    public:
    void display(){
        cout<<"Class C"<<endl;
    }
};
int main(){
    A *aptr;
    C obj;
    aptr=&obj;
    (*aptr).display();
}