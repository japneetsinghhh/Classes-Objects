#include<iostream>
using namespace std;
class Distance{
    public:
    int km;
    int met;
    Distance(int k,int m){
        km=k;
        met=m;
    }
    operator int(){
        return km*1000+met;
    }
};
int main(int argc, char const *argv[])
{
    Distance d(1,2);
    int meter=d;
    cout<<meter<<endl;
    return 0;
}
