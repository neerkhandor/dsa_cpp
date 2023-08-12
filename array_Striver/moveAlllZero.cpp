#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>arr={1,2,0,3,0,4,3,0,2,0};
int n=arr.size();

//tc-> O(N)+O(N-X)+O(X)
//sc->O(X)

// vector<int>temp;
// int cnt=0;
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp.push_back(arr[i]);
//         cnt++;
//     }
// }
// for(int i=0;i<cnt;i++){
//     arr[i]=temp[i];
// }
// for(int i=cnt;i<n;i++){
//     arr[i]=0;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
cout<<endl;
//optimal
//thought process while iterating 
//tc-> O(N-X)+O(X)
//sc->O(1)
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        swap(arr[i],arr[j]);
        j++;
    }
}
//now reverse this
reverse(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
}
// j will alwaays be at 0
for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[j],arr[i]);
        j++;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}