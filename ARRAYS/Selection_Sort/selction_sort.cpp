


#include<iostream>
using namespace std;

int main(){

    int arr[1000];
    cout<< "Enter the size of array: ";
    int n;
    cin>>n; //Size of array
    cout<< "Enter the Elements of array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //Selection Sort:
    for(int i=0;i<n-1;i++)
    { int index= i;
    for(int j=i+1; j<n; j++)
    {
        if(arr[j]<arr[index]){
            index=j;
        }
    }
    swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
    






}