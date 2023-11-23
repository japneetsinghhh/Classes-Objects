#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<" + i "<<imag<<endl;
    }
    friend Complex operator+(Complex,Complex);
    friend Complex operator-(Complex,Complex);
    friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex X, Complex Y){
    int new_real=X.real+Y.real;
    int new_imag=X.imag+Y.imag;
    return Complex(new_real,new_imag);
}
Complex operator-(Complex X, Complex Y){
    int new_real=X.real-Y.real;
    int new_imag=X.imag-Y.imag;
    return Complex(new_real,new_imag);
}
Complex operator*(Complex X, Complex Y){
    int new_real=X.real*Y.real-X.imag*Y.imag;
    int new_imag=X.real*Y.imag+X.imag*Y.real;
    return Complex(new_real,new_imag);
}
int main(int argc, char const *argv[])
{
    Complex c1(1,2);
    Complex c2(2,3);
    cout<<"Addition"<<endl;
    Complex c3 = c1+c2;
    c3.display();
    cout<<"Multiplication"<<endl;
    c3=c1*c2;
    c3.display();
    cout<<"Subtraction"<<endl;
    c3=c1-c2;
    c3.display();
    return 0;
}
