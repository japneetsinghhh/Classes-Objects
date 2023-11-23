#include<iostream>
using namespace std;

class Employee{
protected:
	char name[100];
	int id;
	int age;
	static int ct; //value of ct=0
public:
	Employee(char *n,int i,int a){
		ct++;   //ct = ct+1 = 0+1 = 1
		strcpy(name,n);
		id = i;
		age = a;
	}
	void display(){
		cout<< "name: "<<name<<endl;
		cout<< "id: "<<id<<endl;
		cout<< "age: "<<age<<endl;
	}
	static int get_counter(){
		return ct; //returns 1
	}
};

int Employee::ct;

int main(){
	Employee e("abc",1,2);
	e.display();
	cout<< e.get_counter() <<endl;  //prints 1
	cout<< Employee::get_counter() <<endl;  //prints 1
	return 0;
}