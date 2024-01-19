#include<iostream>
using namespace std;


int main()
{
   int arr[5]= {1,2,3,4,5};
   int *ptr = arr;

   //Print the address of first element

  //  cout << &arr << endl;
  //  cout << &arr[0] << endl;
  //  cout << arr+0 << endl;
  //  cout << ptr << endl;

   //Print the address of second element or 1st index

      // cout << arr+1 << endl;
      // cout << &arr[1] << endl;
      // cout << arr+1 << endl;

  // print value of 0 index
   
   /*
     cout << arr[0] << endl;
     cout << *ptr << endl;  //through pointer
     cout << *(arr) << endl;    // base address
     cout << *(arr+0) << endl;  //index

     */

   //saare address ko print krdo
   /*

     for(int i=0;i<5;i++)
     {
      cout << arr+i << endl;
     }  
    
    //saare values print krado -> 

    for(int i=0;i<5;i++)
    {
      cout << *(arr+i) << endl;
    }
    */
/*
    //through pointer print the address 

     for(int i=0; i<5; i++){
      cout << (ptr+i) << endl;
     }

     //print the values

     for(int i=0; i<5; i++){
      cout << *(ptr+i) << endl;
     }
     //second method- pointer can act like array itself
     for(int i=0; i<5; i++){
      cout << ptr[i] << endl;
     }
*/

     //ARITHMETIC OPERATIONS ON POINTERS PTR++; ptr--, ptr= ptr+1

    //  for(int i=0;i<5;i++){
    //   cout << *(ptr) << endl;
    //   ptr++;
    //  }

     //H.W Print the values in reverse
     //ptr= arr+4
    //  for(int i=4;i>=0;i--){
    //   cout << *(ptr) << endl;
    //   ptr--;
    //  }

     //Addition

     ptr=ptr+3;
     cout<< *ptr << endl;

     //Subtraction 
     ptr= ptr-2;
     cout<< *ptr << endl;

}