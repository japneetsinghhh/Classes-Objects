// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void showA(){
//         cout<<"A";
//     }
// };
// class B: public A{
//     public:
//     void showB(){
//         cout<<"B";
//     }
// };
// class C: public A{
//     public:
//     void showC(){
//         cout<<"C";
//     }
// };
// int main(int argc, char const *argv[])
// {
    
//     return 0;
// }

// HYBRID combination of 2 or more than 2 types of inheritance(single,multiple,multi level, hierarchial);
// Predict the output 
#include <iostream>
using namespace std;
class A{
    public:
    void show(){
       cout << "A" << endl; 
    }
};
class B{
    public:
    void show(){
       cout << "B" << endl; 
    }
};
class C:public A, public B{
    public:
    void showC(){
        cout << "C" <<endl;
    }
};
int main(int argc, char const *argv[])
{
    C c;
    c.show();   //error lol this is in syllabus
    return 0;  
}
