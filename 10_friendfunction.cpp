#include<iostream>
using namespace std;
class Employee{
    private:
    char name[100];
    int id;
    public:
    Employee(char * n,int i){   //constructor to assign and set values
        strcpy(name,n);
        id=i;
    }
    friend void Printer(Employee);  //classification of friend function along with type of argument i.e. object
};
void Printer(Employee e){
    cout<<"name is "<<e.name<<" id is : "<<e.id;
}
int main(int argc, char const *argv[])
{
    char a[]="ABC";
    Employee e(a,123);      //object of class Employee passed to Constructor function of Employee
    Printer(e);         //object created passed to friend function of class employee
    return 0;
}
