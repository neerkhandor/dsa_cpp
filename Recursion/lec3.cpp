#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int *arr,int &n,int &i){
if(i+1>=n){
    return true;
}
if(arr[i+1]>=arr[i]){
    int val=i+1;
     return isSorted(arr,n,val);
}
    return false;
}
// bool isSorted(int arr[],int n,int i){
//     if(i == n-1){
//         return true;
//     }
//     if(arr[i+1]<arr[i]){
//         return false;
//     }
//     return isSorted(arr,n,i+1);
// }
int binarySearch(int *arr,int &n,int &s,int &e,int &key){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        //ye 1 case maine sambhal liya
        return mid;
    }
    if(arr[mid]>key){
        e=mid-1;
        return binarySearch(arr,n,s,e,key);
    }
    else{
        s=mid+1;
        return binarySearch(arr,n,s,e,key);
    }

    mid=s+(e-s)/2;
}
void printSubsequence(string ip,string op,int i,vector <string> &v){
    int n=ip.length();
    if(i>=n){
        v.push_back(op);
        // cout<<op<<endl;

        return;
    }
    // // exclusion
    // printSubsequence(ip,op,i+1);
    // //inclusion
    // op.push_back(ip[i]);
    // printSubsequence(ip,op,i+1);

    // inclusion
    //below line is responsible for concating the output string with the correct input character
    //output ek temp string hai jo ans banate jata hai
    //we cant do changes in the original string or else we will lose characters
    // //op.push_back(ip[i]);
    // op=op+ip[i];
    // printSubsequence(ip,op,i+1,v);
    // op.pop_back();
    // // exclusion
    // printSubsequence(ip,op,i+1,v);

    printSubsequence(ip,op+ip[i],i+1,v);
    printSubsequence(ip,op,i+1,v);

}


int main(){
int arr[]={10,30,50,70,90,100};
int n=sizeof(arr)/sizeof(arr[0]);
int i=0;
bool ans=isSorted(arr,n,i);
if(ans){
    cout<<"array is sorted"<<endl;
}
else{
    cout<<"array is not sorted"<<endl;
}
int s=0;
int e=n-1;
int key=100;
int ans1=binarySearch(arr,n,s,e,key);
cout<<key<<" is present at index "<<ans1<<endl;
string inp="abcd";
string op="";
vector<string> v;

printSubsequence(inp,op,i,v);
//if i make character in the main string then my character will get lost 
//for that reason i have made other output string 
for(auto val:v){
    cout<<val<<" ";
}
cout<<endl;
cout<<v.size()<<endl;

}