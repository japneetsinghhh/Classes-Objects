#include<iostream>
using namespace std;

class Employee{
	int balance;
public:
	Employee(int b){
		balance = b;
	}
	void display() const{
        // balance+=2; //cant modify values in this function because it is a constant member function
		cout << "balance: "<< balance <<endl;
	}
	void deposit(int amt){      //not a const member function
		balance += amt;
	}
	void withdrawl(int amt){        //not a const member function 
		balance -= amt;
	}
};

int main(){
	Employee e(1000000);
	e.display();
	e.withdrawl(101);
	e.display();
	return 0;
}