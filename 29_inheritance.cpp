// // in which a class inherits property from other class 
// Inheritance class accessibility: PUBLIC      PROTECTED        PRIVATE
// Base class accessibility:
                // PUBLIC:          PUBLIC      PROTECTED        PRIVATE
                // PRIVATE:              -----INHERITABLE-----         
                //PROTECTED:        PROTECTED   PROTECTED        PRIVATE



// 1.
// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     int id;
//     char name[100];
// };
// class Manager:public Employee{
//     public:
//     char department[100];
//     void get_data(int empId, char *n,char *dep){
//         id = empId;
//         strcpy(name,n);
//     strcpy(department,dep);
//     }
//     void display(){
//         cout<<"ID : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Department : "<<department<<endl;
//     }
// };
// int main(){
//     Manager m;
//     m.get_data(1,"Japi","Student");
//     m.display();
//     return 0;
// }

// 2.
// #include<iostream>
// using namespace std;
// class Employee{
//     protected:
//     int id;
//     char name[100];
// };

// class Manager:protected Employee{
//     public:
//     char department[100];
//     void get_data(int empId, char *n,char *dep){
//         id = empId;
//         strcpy(name,n);
//     strcpy(department,dep);
//     }
//     void display(){
//         cout<<"ID : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Department : "<<department<<endl;
//     }
// };
// int main(){
//     Manager m;
//     m.get_data(1,"Japi","Student");
//     m.display();
//     return 0;
// }

// 3.
// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     int id;
//     char name[100];
// };
// class Manager:private Employee{
//     public:
//     char department[100];
//     void get_data(int empId, char *n,char *dep){
//         id = empId;
//         strcpy(name,n);
//     strcpy(department,dep);
//     }
//     void display(){
//         cout<<"ID : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Department : "<<department<<endl;
//     }
// };
// int main(){
//     Manager m;
//     m.get_data(1,"Japi","Student");
//     m.display();
//     return 0;
// }

// 4.
// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//     int id;
//     char name[100];
// };
// class Manager:private Employee{
//     public:
//     char department[100];
//     void get_data(int empId, char *n,char *dep){
//         id = empId;
//         strcpy(name,n);
//     strcpy(department,dep);
//     }
//     void display(){
//         cout<<"ID : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Department : "<<department<<endl;
//     }
// };
// int main(){
//     Manager m;
//     m.get_data(1,"Japi","Student");
//     m.display();
//     return 0;
// }




