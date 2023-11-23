// #include<iostream>
// using namespace std;
// class Time{
//     public:
//     int hrs;
//     int mins;
//     Time(int m){
//         hrs=m/60;
//         mins=m%60;
//     }
//     void display(){
//         cout<<hrs<<" hrs: "<<mins<<" mins";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     Time t(122);
//     t.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class Time{
    public:
    int mins;
    int hrs;
    Time(int h,int m){
        hrs=h;
        mins=m;
    }
    // void display(){
    //     cout<<mins<<endl;
    // }
    operator int(){
        return hrs*60+mins;
    }
};
int main(int argc, char const *argv[])
{
    Time t(2,2);
    // t.display();
    int x = t; 
    cout<<x<<endl;
    return 0;
}
