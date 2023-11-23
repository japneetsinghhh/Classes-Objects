#include<iostream>
using namespace std;
class Complex{
    private:
    int real,imag;
    public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    } 
    friend void addComplex(Complex,Complex);
    friend void mulComplex(Complex,Complex);
};
void addComplex(Complex a, Complex b){
    int new_real=a.real+b.real;
    int new_imag=a.imag+b.imag;
    Complex ans(new_real,new_imag);
    ans.display();
}
void mulComplex(Complex a, Complex b){
    int new_real=a.real*b.real - a.imag*b.imag;
    int new_imag=a.real*b.imag + a.imag*b.real;
    Complex ans(new_real,new_imag);
        ans.display();
}
int main(int argc, char const *argv[])
{
    Complex a(1,2);
    Complex b(2,3);
    addComplex(a,b);
    mulComplex(a,b);
    return 0;
}
