#include<iostream>
using namespace std;

// int solve(){
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }
    
// }
void print(int n){
    if(n<0)
    return;
    print(n--);
    cout<<n<<" ";
}
int main(){
cout<<"hello1"<<endl;
// print(3);
main();
// cout<<"hello";
}