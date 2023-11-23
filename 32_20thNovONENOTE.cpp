#include<iostream>
using namespace std;
class Mammals{
    public:
    void showA(){
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals{
    public:
    void showB(){
        cout<<"I am marine animal"<<endl;
    }
};
class BlueWhale: public Mammals,public MarineAnimals{
    public:
    void showC(){
        cout<<"I belong to both of the categories: Mammals and Marine Animals"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Mammals mmls;
    MarineAnimals mals;
    BlueWhale bw;
    mmls.showA();
    mals.showB();
    bw.showC();
    bw.showA();
    bw.showB(); 
    return 0;
}
