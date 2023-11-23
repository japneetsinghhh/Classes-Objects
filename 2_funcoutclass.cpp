#include <iostream>
using namespace std;
class Student{
    private:
    char name[100];
    int roll_no;
    public:
    void set(char *,int );
    int get_roll_no();
    char* get_name();
};
void Student::set(char * n,int r){
    strcpy(name,n);
    roll_no=r;

}
char* Student::get_name(){
    return name;
}
int Student::get_roll_no(){
    return roll_no;
}
int main(int argc, char const *argv[])
{
    Student Jap;
    char b[100]="Japneet";
    Jap.set(b,434);
    cout<<"Name is : "<<Jap.get_name()<<" and Roll number is : "<<Jap.get_roll_no();
    return 0;
}
