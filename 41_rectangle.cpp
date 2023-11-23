#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    Rectangle(int l,int w){
        length =l;
        width=w;
    }
    operator int(){
        return length*width;
    }
    operator double(){
        return length*width*1.11
;    }
};
int main(){
    Rectangle r(2,3);
    int x=int(r);
    double y=r;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}

