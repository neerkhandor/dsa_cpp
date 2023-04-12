#include <iostream>
using namespace std;
// inheritance
class Animal{
    public:
    int age;
    int weight;
    void eat(){
        cout<<"Eating"<<endl;
    }
    int getAge(){
       return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
    int getWeight(){
       return this->weight;
    }
    void setWeight(int age){
        this->weight=weight;
    }

};
class Dog : private Animal{
//derived class
public:
void print(){
cout<<this->age;
}
};
int main(){
    Animal a;
    a.setAge(32);
    cout<<a.getAge()<<endl;
    Dog d1;
    // d1.eat();
    d1.print();
    // cout<<d1.age;  class ke andar i can access the elements in private as well as protected access modifiers
    
}