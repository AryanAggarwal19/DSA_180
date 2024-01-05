//Binary Search


#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start=0;
    int end= n-1;

    while(start <= end)
    {
        int mid= start+(end-start)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]>key)
        {
            //Search Left
            end=mid-1;
        }
        else{
            //Search Right
            start=mid+1;
        }
    }
    return -1;
}


int main(){
     
     int arr[1000];
     int n;

     cout<<"Enter the no of Elements:"<<" ";
     cin>>n;

     cout<<"Enter the nos in increasing order"<<endl;
     for(int i=0;i<n;i++){
        cin >> arr[i] ;
     }
     

     int key;
     cout<<"Enter the key"<<endl;
     cin >> key;


    
    cout<< binarySearch(arr,n,key);
    return 0;


}




