#include<iostream>
using namespace std;
class A{
    public:
    void feature1(){
        cout<<"feature 1 in A"<<endl;
    }
};
class B:public A{
    public:
    void feature1(){
        cout<<"feature 1 in B"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    B obj;
    obj.feature1();
    return 0;
}
