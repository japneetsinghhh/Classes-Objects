#include<iostream>
using namespace std;
class Shape{
    public:
    virtual int Calc_area()=0;
};
class Circle:public Shape{
    public:
    int Calc_area(int r){
        return 3.14*r*r;
    }
};
class Square:public Shape{
    public:
    int Calc_area(int l,int b){
        return l*b;
    }
};
int main()
{
    
    return 0;
}
