#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    Complex operator-(){
        return Complex(-real,-imag);
    }
    Complex operator++(int){    //post increment
        return Complex(++real,++imag);
    }
    Complex operator--(int){     //post decrement
        return Complex(--real,--imag);
    }                    
    Complex operator++(){
        return Complex(++real,++imag);
    }
    Complex operator--(){
        return Complex(--real,--imag);
    }
    void display(){
        if(imag>0){
            cout<<real<<" -i "<<imag<<endl;
        }
        else{
            cout<<real<<" +i "<<imag<<endl;
        }
    }
};
int main(int argc, char const *argv[]){
    Complex c1(1,2);
	cout << "c1: " <<endl;
	c1.display();
	// Complex c2 = -c1;
	// cout << "c2: " <<endl;
	// c2.display();
	Complex c3 = c1++;
	c1.display();
	c3.display();
	Complex c4 = c1--;
	c1.display();
	c4.display();
    return 0;
}
