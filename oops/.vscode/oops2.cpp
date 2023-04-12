#include <iostream>
using namespace std;

class Animal{
    //for perfect encapsulation
    private:
    int age;
    int weight;
    public:
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

int main(){

}