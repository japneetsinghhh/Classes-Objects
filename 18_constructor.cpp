#include<iostream>
#include<cstring>
using namespace std;
class Car{
    public:
    char * name;
    int price;
    int mileage;
    int seats;

    Car(){      //default constructor just for assigning default values 
        cout<<"Default constructor called."<<endl;
        name=NULL;
        price=0;
        mileage=0;
        seats=0;
    }
    Car(char * n,int p){
        cout<<"Constructor with 2 parameters called."<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        mileage=0;
        seats=0;
    }
    Car(char *n,int p,int m,int s){
        cout<<"Parameterised constructor called."<<endl;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        mileage=m;
        seats=s;
    }
    void Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Mileage : "<<mileage<<endl;
        cout<<"Seats : "<<seats<<endl;
        cout<<endl;
    }
};
int main(int argc, char const *argv[])
{
    char name[]="BMW";
    Car E;
    Car C(name,20);
    Car D(name,100,10,4);
    D.Display();
    return 0;
}
