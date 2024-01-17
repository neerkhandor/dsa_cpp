#include<iostream>
#include<climits>
#include<vector>
using namespace std;

//similar to fibonacci
int climbStairs(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return climbStairs(n-1)+climbStairs(n-2);
}
void print(int arr[],int n,int& i){
//if index goes out of bound then return 
if(i>=n){
    return ;
}
//cout<<arr[i]<<" ";//1 case solved
int val=i+1;
print(arr,n,val);
cout<<arr[i]<<" ";//reverse print
}
void print2(int arr[],int n){
if(n==0){
    return;
}
cout<<arr[0]<<" ";//1 case solved
print2(arr+1,n-1);
}

//this will fall in an infinite loop 
void print3(int arr[],int n,int &i){
if(i>=n){
    return ;
}
cout<<arr[i]<<" ";//1 case solved
int val=i+1;
print3(arr,n,val);
}

// void print(int arr[],int n,int i){
// if(i>=n){
//     return ;
// }
// cout<<arr[i]<<" ";//1 case solved
// print(arr,n,++i);
// }

int findMax(int arr[],int n,int &i,int &maxi){
    if(i>=n){
        //after traversing the whole array maximum will be stored in maxi variable
        return maxi;
    }
    //solving 1 case 
    //ie 1st element is maximum and then giving it to recursion
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    int val=i+1;
    return findMax(arr,n,val,maxi);
}

int findMin(int arr[],int n,int &i,int &mini){
    if(i>=n){
        return mini;
    }
    if(arr[i]<mini){
        mini=arr[i];
    }
    int val=i+1;
    return findMin(arr,n,val,mini);
}
bool isPresent(int arr[],int n,int& i,int key){
    if(i>=n){
        //if i goes out of bound and till that if nothing is returned means element is not present
        cout<<n<<endl;
        return false;
    }
    //solving 1 case 
    if(arr[i]==key){
        return true;
    }
    int val=i+1;
    return isPresent(arr,n,val,key);
}
bool isCharPresent(string &str,int& n,int& i,char& key){
    if(i>=n){
        return false;
    }
    if(str[i]==key){
        return true;
    }
    int value=i+1;
    return isCharPresent(str,n,value,key);
}
int isCharPres(string &str,int& n,int& i,char& key){
    if(i>=n){
        return -1;
    }
    if(str[i]==key){
        return i;
    }
    int value=i+1;
    return isCharPres(str,n,value,key);
}

void isCharPresStore(string &str,int& n,int& i,char& key,vector<int>&ans){
    if(i>=n){
        return ;
    }
    if(str[i]==key){
        ans.push_back(i);
        //kabhi bhi mein aisa variable pass kar raha hu function mein
        //jiski value mein ans mein store kar na chahta hu to ham pass 
        //by reference karenge
    }
    int value=i+1;
    isCharPresStore(str,n,value,key,ans);
}

int main(){
        // int n=1;
        // int ans=climbStairs(n);
        // cout<<ans<<endl;
        int arr[]={1,2,3,4,2,7,6,-1};
        int size=sizeof(arr)/sizeof(arr[0]);
        int i=0;
        // print(arr,size);//without index
        print(arr,size,i);
        cout<<endl;
        print2(arr,size);
        cout<<endl;
        cout<<"testing"<<endl;
        print3(arr,size,i);
        cout<<endl;
        int maxi=INT_MIN;
        int ans1=findMax(arr,size,i,maxi);
        cout<<"Maximum Element in the array is "<<ans1<<endl;
        int mini=INT_MAX;
        int ans2=findMin(arr,size,i,mini);
        cout<<"Maimum Element in the array is "<<ans2<<endl;
        int key=4;
        bool checkKey=isPresent(arr,size,i,key);
       
        if(checkKey){
            cout<<"key is present"<<endl;
        }
        else{
            cout<<"key is not present"<<endl;
        }

        string str="neer";
        int n=str.length();
        char key_char='e';
        bool checkChar=isCharPresent(str,n,i,key_char);
        if(checkChar){
            cout<<"character "<<key_char<<" is present in "<<str<<endl;
        }
        else{
            cout<<"character "<<key_char<<" is not present in "<<str<<endl;
        }
        int val=isCharPres(str,n,i,key_char);
        cout<<"Character is present at index "<<val<<endl;
        vector<int> storage;
        isCharPresStore(str,n,i,key_char,storage);
        for(auto val:storage){
        cout<<val<<" ";
        }
}