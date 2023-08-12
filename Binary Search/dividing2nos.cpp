#include<iostream>
#include<vector>

using namespace std;
int quotient(int dividend,int divisor){
    if(dividend ==0 && divisor==0){
            return 0;
        }
    if(dividend==0 && divisor!=0){
            return 0;
    }
    int s=0;
    int e=abs(dividend);
    int ans=0;
    int mid=s+(e-s)/2;
    while(s<=e){
         if(abs(mid*divisor)==abs(dividend)){
            return mid;
         }
         else if(abs(mid*divisor)>abs(dividend)){
            e=mid-1;
         }
         else{
            ans=mid;
            s=mid+1;
         }
         mid=s+(e-s)/2;
    }
    if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)){
        return ans;
    }
    return -ans;
}

int main(){
    int dividend = -23;
    int divisor = -4;
    int ans=quotient(dividend,divisor);
    if(divisor==0 && dividend!=0){
        cout<<"Not a valid no"<<endl;
    }
    else{
    cout<<"quotient after dividing "<<dividend<<" with "<<divisor<<" is "<<ans<<endl;
    }
    // int precision;
    // cout<<"Enter the precision : ";
    // cin>>precision;
    // float step=0.1;
    // float finalAns=ans;
    // for(int i=0;i<precision;i++){
    //     for (float j=finalAns;j*divisor<=dividend;j=j+step){4
    //         finalAns=j;
    //     }
    //     step=step/10;
    // }
    // cout<<"final ans "<<finalAns<<endl;
    
    int precision;
    cout << "Enter the number of floating digits in precison "<<endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;
    for(int i=0; i<precision; i++) {

    for(double j=finalAns; j*divisor<=dividend; j = j + step) {
        finalAns = j;
    }
    step = step / 10;
    }
    cout << "Final ans is "<< finalAns << endl;
}