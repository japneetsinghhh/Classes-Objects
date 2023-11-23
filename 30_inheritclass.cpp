#include<iostream>
using namespace std;
class Vehicle{
    protected:
    char company[100];
    int no_of_wheels;
};
class Car:private Vehicle{
    private:
    int mileage;
    void set_data(char *c,int now,int m){
        strcpy(company,c);
        no_of_wheels=now;
        mileage=m;
    }
    void get_data(){
        cout<<"Company name : "<<company<<endl;
        cout<<"Number of wheels : "<<no_of_wheels<<endl;
        cout<<"Mileage : "<<mileage<<endl; 
    }
};
int main(int argc, char const *argv[])
{
    return 0;
}
