/***********************************MERGE SORT***************************************************/

#include<iostream>
#include <vector>
using namespace std;

void merge(int arr[],int start, int mid, int end)
{
    vector<int>temp(end-start+1);//this will create a temporay array of size(end-start+1)
    int left=start,
    right= mid+1,
    index=0;  //we are taking 3pointers for 3 arrays-> left,right and index
    
    while(left<=mid && right<=end)//this will copy the value of left and right to temp in sorted ordr
    {
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++, right++;
        }
    }
    //now copy the remaining values to temp array
    //agr left array mein values bachte hai => left arr not empty yet
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }
    //else do the same for right one
    while(right<=end)
    {
        temp[index]=arr[right];
        index++,right++;
    }
    //last step-> is to copy the values of temp array to original array

     index=0;
     while(start<=end)
     {
        arr[start]=temp[index];
        start++,index++;
     }


}

void mergeSort(int arr[],int start, int end)
{
    while(start<=end)
    {
         int mid= start+(end-start)/2;

        //BASE CONDITION
        if(start==end)
        return;
       
        //divide
        mergeSort( arr,start,mid); //left side
        mergeSort(arr,mid+1,end); //right side
        merge(arr,start,mid,end); //merge the sorted parts;
    }
}





int main()
{
   int arr[]= {6,3,1,2,8,9,10,7,3,10}; //we need to sort this array using merge sort algorithim

   mergeSort(arr,0,9);
   for(int i=0;i<10;i++)
   {
    cout<<arr[i]<<" ";
   }
}

