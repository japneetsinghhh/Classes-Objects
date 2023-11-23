#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    void addition(Complex c);
    void subtraction(Complex c);
    void multiplication(Complex c);
};
void Complex::addition(Complex c){
    int new_real=real+c.real;
    int new_imag=imag+c.imag;
    cout<<"Addition : "<<endl;
    cout<<new_real<<" + i "<<new_imag<<endl;
}
void Complex::subtraction(Complex c){
    int new_real=real-c.real;
    int new_imag=imag-c.imag;
    cout<<"Subtraction : "<<endl;
    cout<<new_real<<" + i "<<new_imag<<endl;
}
void Complex::multiplication(Complex c){
    int new_real=real*c.real - imag*c.imag;
    int new_imag=real*c.imag + imag*c.real;
    cout<<"Multiplication : "<<endl;
    cout<<new_real<<" + i "<<new_imag<<endl;
}
int main(int argc, char const *argv[])
{
    Complex n1,n2;
    n1.real=10;
    n1.imag=5;
    n2.real=5;
    n2.imag=2;
    n1.addition(n2);
    n1.subtraction(n2);
    n1.multiplication(n2);
    return 0;
}
