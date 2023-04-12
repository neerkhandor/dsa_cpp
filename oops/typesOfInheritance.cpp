#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int weight;
    int age;
    Car(){
     this->age=0;
     this->weight=0;
     this->name="";
    }
    void speedup(){
cout<<"Speed Up"<<endl;
    }
    void breakMaro(){
cout<<"break maro"<<endl;
    }
};
class Scorpio:public Car{
    public:
    void print(){
        cout<<"Age is "<<this->age<<endl;
        cout<<"Weight is "<<this->weight<<endl;
        cout<<"Name is "<<this->name<<endl;
    }
};
int main()
{
 Car c;
 c.weight=42;
 c.name="Scorpio";
 c.age=43;
 Scorpio NeerWali;
 NeerWali.speedup();
 NeerWali.breakMaro();
 NeerWali.print();
} 
