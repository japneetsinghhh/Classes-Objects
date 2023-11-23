#include <iostream>
using namespace std;
class Car{
    public:
    char * name;
    int * price;
    int * mileage;
    int * seats;
    Car(char * n,int p,int m,int s){
        name = new char[strlen(n)+1];
        strcpy(name,n);
        price = new int(p);
        mileage = new int(m);
        seats = new int(s);
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<*price<<endl;
        cout<<"Mileage : "<<*mileage<<endl;
        cout<<"Seats : "<<*seats<<endl;
    }
};
int main(int argc, char const *argv[])
{
    char name[]="BMW";
    Car C(name,100,10,2);
    C.display();
    return 0;
}
