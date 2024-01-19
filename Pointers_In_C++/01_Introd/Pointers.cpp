#include<iostream>
using namespace std;


int main()
{
    int a=10;
    //Print the address of a
    cout<< &a <<endl;

    int *ptr= &a;
    cout<<ptr<<endl;

    float m=2.6;
    float *ptr1= &m;
    cout<<ptr1<<endl;

    //size of ptr => constant ,independent of data type

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr1);

    //accessing the value that ptr is pointing to
  
    cout << ptr <<endl;
    cout << *ptr <<endl;

}