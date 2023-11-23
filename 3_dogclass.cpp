#include<iostream>
using namespace std;
class Dog{
    private:
    char name[100];
    char species[100];
    int age;
    public:
    void set(char * , char * ,int);
    int get_age();
    char * get_name();
    char * get_species();
};
void Dog::set(char * n,char *s,int a){
    strcpy(name,n);
    strcpy(species,s);
    age=a;
}
int Dog::get_age(){
    return age;
}
char * Dog::get_name(){
    return name;
}
char * Dog::get_species(){
    return species;
}
int main(int argc, char const *argv[])
{
    Dog lab;
    char n[100]="Bruno";
    char s[100]="Labrador";
    lab.set(n,s,5);
    cout<<"Name is : "<<lab.get_name()<<", Species is : "<<lab.get_species()<<", Age is : "<<lab.get_age();
    return 0;
}
