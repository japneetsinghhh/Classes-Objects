#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()=0; //virtual func. without a func. def. is pure virtual function
    void func(){
        cout<<"Function inside class A"<<endl;
    }
    // class having a pure virtual function is called an abstract class
};
// we cannot create an object of an abstract class
class B:public A{
    public:
// if we overwrite the pure virtual function of A. B does not remain abstract 
};
class C:public B{
    
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
