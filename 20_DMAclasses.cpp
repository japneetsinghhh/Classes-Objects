#include<iostream>
// DMA = Dynamic Memory Allocation
using namespace std;
class Car{
    public:
    char * name;
    int price;
    int mileage;
    int seats;
    Car(){
        cout<<"Default constructor called"<<endl;
        name=NULL;
        price=0;
        mileage=0;
        seats=0;
    }
    Car(char * n,int p){
        cout<<"Constructor with 2 parameters called"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
    }
    Car(char * n,int p,int m,int s){
        cout<<"Parameterised constructor passed"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        mileage=m;
        seats=s;
    }
    Car(Car &X){
        cout<<"Copy Constructor"<<endl;
        name=new char[strlen(X.name)+1];
        name=X.name;
        price=X.price;
        seats=X.seats;
        mileage=X.mileage;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<"Mileage : "<<mileage<<endl;
        cout<<endl;
    }       
    ~Car(){
        cout<<"Destructor called"<<endl;
        delete[] name;
        name=NULL;
    }
};
int main(int argc, char const *argv[])
{
    char name[]="BMW";
    Car * C = new Car(name,100,20,2);   //allocation
    (*C).display();
    C->display();
    delete C;   //deallocation
    C=NULL;
    return 0;
}
