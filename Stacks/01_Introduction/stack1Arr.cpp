#include <iostream>
using namespace std;

  // 01_Intro_To_Stacks //1.1 Implement_Stack_using_Arrays

//Implementing_Using_Array
  class Stack
  {
     int *arr;
     int size;
     int top;

     public:

    //constructor
    Stack(int s)
    {
      size= s;
      top= -1;
      arr= new int[s];  //will dynamically create the array of size ,s
    }
    //operaions
    //push
    void push(int value)
    {
      if(top==size-1){
        cout << "Stack Overflow\n";
        return;
      }
      else{
        top++;
        arr[top]= value;
        cout<<"Pushed"<<value<<"into the stack\n";
      }
    }
    //pop
    void pop()
    {
      if(top== -1) //implies stack-> empty
      {
        cout << "Stack Underflow\n";
      }
      else{
        top--;
        cout << "Popped" << arr[top+1] << "from the stack\n";
      }
    }
    //peak 
    //simply return the peak elem of stack w/o doing any kind of manipulation
    int peek()
    {
      if(top== -1){
        cout<< "Stack is empty\n";
        return -1; //assuming stack is having only +ve values
      }
      else{
        return arr[top];
      }
    }
    //IsEmpty
    bool IsEmpty()
    {
      return top==-1;
    }
    //IsSize
    int IsSize(){
      return top+1;

    }

  };
int main() {
   
   Stack S(5);
   cout << S.peek() << endl;
   
}