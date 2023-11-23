#include<iostream>
using namespace std;
class Employee{
    char name[100];
    int id;
    public:
    Employee(char * n,int i){   //constructor to assign and set values
        strcpy(name,n);
        id=i;
    }
    friend class Printer;  //classification of friend class
};
class Printer{      //definition of friend class
    public:
    void printDetails(Employee e){     
        cout<<e.name<<" "<<e.id;
    }
};
int main(int argc, char const *argv[])
{
    char a[]="ABC";
    Employee e(a,123);      //object of class Employee passed to Constructor function of Employee
    Printer p;              //object of class Printer
    p.printDetails(e);      //using function printDetails() to print details of the employee 
    return 0;
}
