#include<iostream>
using namespace std;
int getLength(char arr[]){
int i=0,cnt=0;
while(arr[i]!='\0'){
    cnt++;
    i++;
}
return cnt;
}
void reverse(char arr[]){
    int i=0;
    int len=getLength(arr);
    int j=len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    char arr[]="khandor";
    int ans=getLength(arr);
    cout<<ans<<endl;
    cout<<arr<<endl;
    reverse(arr);
    cout<<arr<<endl;

}