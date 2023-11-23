// Make a class named Fruit with a data member to calculate the 
// number of fruits in a basket. Create two other classes named Apples 
// and mangoes to calculate the number of apples and mangoes in the 
// basket. Print the number of fruits of each type and the total number 
// of fruits of each type and the total number of fruits in the basket 
#include <iostream>
using namespace std;
class Fruits{
    public:
    int total_fruits;
    Fruits(){
        total_fruits=0;
    }
    void add_fruits(){
        total_fruits++;
    }
    int get_fruits(){
        return total_fruits;
    }
};
class Apples:  public Fruits{
    public:
    int number_of_apples;
    Apples(){
        number_of_apples=0;
    }
    void add_apples(){
        number_of_apples++;
        add_fruits();
    }
    int get_apples(){
        return number_of_apples;
    }
};
class Mangoes: public Fruits{
    public:
    int number_of_mangoes;
    Mangoes(){
        number_of_mangoes=0;
    }
    void add_mangoes(){
        number_of_mangoes++;
        add_fruits();
    }
    int get_mangoes(){
        return number_of_mangoes;
    }
};
int main(int argc, char const *argv[])
{
    Apples a;
    Mangoes m;
    a.add_apples();
    m.add_mangoes();
    m.add_mangoes();
    cout<<a.get_fruits()<<endl;
    cout<<m.get_fruits()<<endl;
    cout<<"Total "<<a.get_fruits()+m.get_fruits();
    return 0;
}
