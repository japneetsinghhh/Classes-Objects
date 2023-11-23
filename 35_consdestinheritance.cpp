#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Inside of constructor A"<<endl;
    }
    A(int x){
        cout<<"Inside of parameterised constructor A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Inside of constructor B"<<endl;
    }
    B(int x,int y){
        cout<<"Inside of parameterised constructor B"<<endl;
    }
};
class C:public A,public B{
    public:
    C():B(1,2){
        cout<<"Inside default constructor of C"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    C obj;  
    return 0;
}
