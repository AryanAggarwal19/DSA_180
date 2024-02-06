#include<iostream>
#include<stack>
using namespace std;

int main()
{

   stack<int>S;
   S.push(6);
   S.push(16);
   S.push(20);
   cout<< S.size()<<endl;
   //top
   cout<< S.top()<< endl;
   cout<< S.empty() << endl;

}
//In actual stack is implemented through deque
//why we need stack ?