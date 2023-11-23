#include<iostream>
using namespace std;
class A{
    public:
    void feature1(){
        cout<<"Feature 1 inside A"<<endl;
    }
};
class B:public A{

};
class C: public A{

};
class D:public C, public B{

};
int main(int argc, char const *argv[])
{
    D obj;
    obj.feature1(); //ambiguous error in syllabus lol :)
    
    return 0;
}
