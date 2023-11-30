#include <iostream>
using namespace std;
int binary_search(int arr[],int start,int end,int key){
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key)
            return mid;
    else if (arr[mid]>key)
        return binary_search(arr,start,mid-1,key);
    else
        return binary_search(arr,mid+1,end,key);
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int start=0;
    int end=n-1;
    int arr[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    int index=binary_search(arr,start,end,key);
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<index<<endl;
    }
    return 0;

}
