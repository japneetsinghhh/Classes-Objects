#include<iostream>
using namespace std;
class Car{ //CLASS
    public:
    int engine; //Public variables so that values can be accessed or assigned by using object
    int price;
    void set(int e,int p){  //for assignment of values 
        engine=e;
        price=p;
    }
    int get_engine(){ 
        return engine;  //returning values
    }
    int get_price(){
        return price;   //returning values
    }
};
int main(int argc, char const *argv[])
{
    Car bmw;
    bmw.set(3000,200000);   //passing values to function set for assignment
    //OUTPUT
    cout<<"CC of engine is = "<<bmw.get_engine()<<" Price of BMW is = "<<bmw.get_price()<<endl;
    return 0;
}
