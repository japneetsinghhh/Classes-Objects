#include<iostream>
using namespace std;
class A{
    public:
    int x;
    int y;
    A(int xx,int yy){
        x=xx;
        y=yy;
    }
    void display(){
        cout<<"A: "<<x<<" "<<y<<endl;
    }
};
class B{
    public:
    int n;
    int m;
    B(int mn,int nn){
        n=nn;
        m=mn;
    }
    void display(){
        cout<<"B: "<<n<<" "<<m<<endl;
    }
    void operator=(A a){
        n=a.x;
        m=a.y;
    }
};

int main(int argc, char const *argv[])
{
    A a(1,2);
    B b(2,3);
    b=a;
    b.display();
    return 0;
}
