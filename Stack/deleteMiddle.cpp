#include<iostream>
#include<stack>
using namespace std;
void removeMiddle(stack<int> &st,int n,int count){
    //base case
    if(count == (n/2)){
        st.pop();
        return;
    }
    int num=st.top();
    st.pop();
    removeMiddle(st,n,count+1);
    st.push(num);
}
int main(){
//delete middle element from the stack
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
int n=st.size();
int count=0;
removeMiddle(st,n,count);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;


}
