#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
void reversePrint(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    reversePrint(n-1);
}
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

int factorial(int n){
    if(n==1){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int power(int n){
    if(n==0){
        return 1;
        //since 2^0 =  1
    }
    int ans=2*power(n-1);
    //power(n-1) to recursio ki zimedari hai 
    //apna kam to bas ye ek case solve hi karna tha
    return ans;
}
void printNumber(int n){
if(n==0){
    return;
}
printNumber(n/10);
n=n%10;
cout<<n<<" ";
}
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