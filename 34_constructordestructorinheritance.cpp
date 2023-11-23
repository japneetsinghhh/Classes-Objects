// order of constructor and destructor calling **IMPORTANT**
#include<iostream>
using namespace std;
class A{
    public:
    A(){    //constructor of A
        cout<<"Inside of constructor A"<<endl;
    }
    ~A(){   //constructor of A
        cout<<"Inside of destructor A"<<endl;
    }
};
class B:public A{
    public:
    B(){    
        cout<<"Inside of constructor B"<<endl;
    }
    ~B(){
        cout<<"Inside of destructor B"<<endl;
    }
};
class D{
    public:
    D(){
        cout<<"Inside of constructor D"<<endl;
    }
    ~D(){
        cout<<"Inside of destructor D"<<endl;
    }
};

class C:public D,public B{
    public:
    C(){
        cout<<"Inside of constructor C"<<endl;
    }
    ~C(){
        cout<<"Inside of destructor C"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    C obj;
    return 0;
}
