#include <iostream>
using namespace std;
/*n=5
print(4)
print(3)
print(2)
print(1)                    ^
print(0)->base case return -|
so now 1 will be removed from stack and it will print 1 
and similarly it will print 2 3 4 5
so basically if we use head recursion then we will get in ascending order
*/
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
/*
here we are printing first and then we are calling so if n=3
then it will print 3 and then make call for 2 and then it will print 2
and make call for 1 and print 1 and make call for 0 (base case)
so in tail recursion it is printed in reverse order
*/
void reversePrint(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    reversePrint(n-1);
}
/*
tc->O(2^n)
sc->O(n)
see recursive tree in book
*/
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

//tc->O(n)
//sc->O(n)
int factorial(int n){
    if(n==1){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
//tc->O(n)
//sc->O(n)
int power(int n){
    if(n==0){
        return 1;
        //since 2^0 =  1
    }
    int ans=2*power(n-1);
    //power(n-1) to recursion ki zimedari hai 
    //apna kam to bas ye ek case solve hi karna tha
    return ans;
}
//3456
//345
//34
//3
//n%10 ->3%10 ->3 ->cout<<3
//n%10 ->34%10 ->4 ->cout<<4
//n%10 ->345%10 ->5 ->cout<<5
//n%10 ->3456%10 ->6 ->cout<<6
void printNumber(int n){
if(n==0){
    return;
}
printNumber(n/10);
n=n%10;
cout<<n<<" ";
}
//n=345
//345%10->5 print->5
//
void reversePrintNumber(int n){
    // cout<<"b4 checking condition : n = "<<n<<endl;
    if(n==0){
        return;
    }
    int ans=n%10;
    cout<<ans<<" ";
    reversePrintNumber(n/10);
} 


int main(){
    int n=10;
    print(n);
    cout<<endl;
    reversePrint(n);
    cout<<endl;
    int ans=fibonacci(n);
    cout<<"Fibonacci of "<<n<<" is "<<ans<<endl;
    int ans1=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans1<<endl;
    int ans2=power(n);
    cout<<"2 to the power "<<n<<" is "<<ans2<<endl;
    int n1=123456;
    printNumber(n1);
    cout<<endl;
    reversePrintNumber(n1);
    cout<<endl;
}