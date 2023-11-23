// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A(int aa){
//         a=aa;
//     }
//     void display(){
//         cout<<"A: "<<a<<endl;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     // int x='a';
//     A a(123);
//     A aa=234;
//     aa.display();
//     a.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class A{
    char a;
    public:
    A(char aa){
        a=aa;
    }
    void display(){
        cout<<"A: "<<a<<endl;
    }
};
int main(int argc, char const *argv[])
{
  A a('b');
  A aa='c';
  aa.display();
  a.display();
  return 0;
}
