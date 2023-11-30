#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key){
    if (n<=0){
        return -1;
    }
    if (arr[n-1]==key){
        return n-1;
    }
    else{
        return linear_search(arr,n-1,key);
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    int index=linear_search(arr,n,key);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<index<<endl;
    }
    return 0;

}