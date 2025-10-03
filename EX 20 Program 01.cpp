#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter Array elements : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"\nArray elements are : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the element to be searched : ";
    int key;
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i;
            return 0;
        }
    }
    cout<<"Element not found";
}
