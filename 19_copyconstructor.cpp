#include<iostream>
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
    Car(char *n,int p,int m,int s){
        cout<<"Parameterised constructor called"<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        mileage=m;
        seats=s;
    }
    Car(Car &X){
        cout<<"Copy constructor called"<<endl;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        mileage=X.mileage;
        seats=X.seats;
    }
    void display(){
        cout<<"Name "<<name<<endl;
        cout<<"Price "<<price<<endl;
        cout<<"Mileage "<<mileage<<endl;
        cout<<"Seats "<<seats<<endl;
    }

};
int main(int argc, char const *argv[])
{
    char name[]="BMW";
    Car D(name,100,10,4);
    Car C=D;
    Car E(D);
    E.name[0]='Z';      //deep copy, shallow copy
    D.display(); 
    C.display();
    E.display();
    return 0;
}