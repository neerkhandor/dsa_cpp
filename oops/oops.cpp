#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
    int weight;
    public:
        int age;
        string name;
//constructor
    Animal(){
        cout<<"Constructor ByDefault Call hota hai"<<endl;
        this->age=0;
        this->weight=0;
        this->name="";
    }
    Animal(int age){
        this->age=age;
        cout<<"parameterized constructor called"<<endl;
    }
    // Animal(int weight){
    //     this->weight=weight;
    //     cout<<"parameterized "<<endl;
    // }
     Animal(int age,int weight){
        this->age=age;
        this->weight=weight;
        cout<<"2 parameterized constructor called"<<endl;
    }
    Animal(int age,int weight,string name){
        this->age=age;
        this->weight=weight;
        this->name=name;
    }
    Animal(Animal &obj){
        cout<<"copy constructor"<<endl;
        this->age=age;
        this->weight=weight;
        this->name=name;
    }
        //behaviour(method/function)
        void eat(){
            cout<<"Eats";
        }
        void sleep(){  
            cout<<"Sleeps";
        }

        int get_weight(){
            return weight;
        }

        void set_weight(int weight){
           this-> weight = weight;
//this weight is the one    this weight is the input parameter
// created in the class 
        }
      
      void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
      }
    ~Animal(){
        cout<<"Destructor Called"<<endl;
    }
};

int main(){
cout<<"size of empty class is "<<sizeof(Animal)<<endl;
//static allocation
Animal dog;//animal type ka object hai jiska nam hai dog
dog.age=12;
dog.name="Tommy";
cout<<"Age of dog is "<<dog.age<<endl;
cout<<"name of dog is "<<dog.name<<endl;
dog.eat();
cout<<endl;
dog.sleep();
cout<<endl;
// cout<<dog.weight;   gives error since it is private
int w=43;
dog.set_weight(w);
int weight=dog.get_weight();
cout<<weight<<endl;

//dynamic memory allocation
// int *a =new int;
Animal* dog1=new Animal();
// (*dog1).age=15;
//method 2 use -> for dynamic memory allocation
dog1->age=12;
dog1->name="brownie";
cout<<"Age of dog in dynamic memory allocation is "<<dog1->age<<endl;
cout<<"Name of dog in dynamic memory allocation is "<<dog1->name<<endl;
cout<<endl;
dog1->eat();
cout<<endl;
dog1->sleep();
cout<<endl;
dog1->set_weight(54);
cout<<"Weight of dog in dynamic memory allocation is "<<dog1->get_weight();
// *(this).age=12;
Animal dog2(13);

//copy constructor
Animal b = dog;//M-1
Animal c(b);//M-2

dog.print();
b.print();

delete dog1;//manually destructor is called for dynamic memory allocation

//scope end to destructor called for static
//for static we dont need to  manually call in case of static
}

//garbage collector
//what is memory leak and how to prevent it
//padding and greedy alignment

