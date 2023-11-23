#include<iostream>
using namespace std;
class Time{
    public:
    int hrs,mins,secs;
    Time(int h,int m ,int s){
        hrs=h;
        mins=m;
        secs=s;
    }
    Time operator+(Time T){
        int rhrs,rmins,rsecs;
        rhrs=hrs+T.hrs;
        rmins=mins+T.mins;
        rsecs=mins+T.secs;
        if(rmins>60){
            rhrs+=rmins/60;
            rmins=rmins%60;
        }
        if(rsecs>60){
            rmins+=rsecs/60;
            rsecs=rsecs%60;
        }
        rhrs%=24;
        return Time(rhrs,rmins,rsecs);
    }
    void display(){
        cout<<hrs<<":"<<mins<<":"<<secs<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Time T1(11,59,59),T2(12,59,59);
    Time T3=T1+T2;
    T3.display();
    return 0;
}
