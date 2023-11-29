
// 2 Types of polymorphism 
// compile time polymorphism 
// run time polymorphism

// try throw catch
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     try{
//         if(b==0){
//             throw "Division by 0";
//         }
//         if(b==1){
//             throw "Division by 1"
//         }
//         cout<<"A/B "<<a/b<<endl;
//     }
//     catch(double e){
//         cout<<"Exception thrown of type: "<<e<<endl;
//     }
//     catch(int e){
//         cout<<"Exception thrown of type: "<<e<<endl;
//     }
//     catch(const char *e){
//         cout<<"Exception thrown of type: (char *)"<<e<<endl;
//     }
//     cout<<"After exception handling"<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int idx;
    cin>>idx;
    try{
        if(idx==10){
            throw "Index 10 does not exist";
        }
        if(idx==-1){
            throw "Index is -1";
        }
        cout<<"At index "<<idx<<"Value is"<<arr[idx]<<endl;
    }   
    catch(const char *e){
        cout<<"Exception throw is "<<e<<endl;
    }
    return 0;
}
