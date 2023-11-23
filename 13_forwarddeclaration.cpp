#include<iostream>
using namespace std;
class Second;       //Forward Declaration
class First{
    private:
    int val;
    public:
    First(int v){
        val=v;
    }
    friend void AddFirSec(First,Second);
};
class Second{
    private:
    int data;
    public:
    Second(int d){
        data=d;
    }
    friend void AddFirSec(First,Second);
};
void AddFirSec(First f, Second s){
    cout<<"Val + Data "<<f.val+s.data;
}
int main(int argc, char const *argv[])
{
    First f(5);
    Second s(5);
    AddFirSec(f,s);
    return 0;
}
