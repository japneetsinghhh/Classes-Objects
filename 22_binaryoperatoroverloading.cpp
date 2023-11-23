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
    Complex operator+(Complex X){
        int new_real=real+X.real;
        int new_imag=imag+X.imag;
        Complex ans=Complex(new_real,new_imag);
        return ans;
    }
    Complex operator-(Complex X){
        int new_real=real-X.real;
        int new_imag=imag+X.imag;
        Complex ans=Complex(new_real,new_imag);
        return ans;
    }
    Complex operator*(Complex X){
        int new_real=real*X.real - X.imag*imag;
        int new_imag=imag*X.real + X.imag*real;
        Complex ans=Complex(new_real,new_imag);
        return ans;
    }
    void display(){
        if(imag<0){
            cout<<real<<" - i "<<-imag<<endl;
        }
        else{
            cout<<real<<" + i"<<imag<<endl;
        }
    }
};
int main(int argc, char const *argv[])
{
    Complex C1(1,2),C2(2,3);
    Complex C3=C1+C2;
    C3.display();
    Complex C4=C1.operator+(C2); //same as C3
    return 0;
}
