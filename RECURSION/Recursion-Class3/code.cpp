//RECURSION-3  Solving 4 Recusive Questions In One Shot


#include<iostream>
using  namespace std;

int fact(int n)
{
    //Base Case
    if(n==1 || n==0)
    return 1;

    return n*fact(n-1);
}
int Sum(int n){
    //Base Case
    if(n==1){
        return 1;
    }

    return n + Sum(n-1);
}

int Pow(int num, int n){
    //Base Case
    if(n==1){
        return num;
    }


    return num*Pow(num,n-1);
}

    int main(){
        
        //Factorial of a number n

        int n;
        n= 5;
        if(n<0) {
            cout<<"Factorial is not possible\n";
            return 0;
        }
        // cout<< fact(5);

        //Print Sum of n Natural Numbers
        n=5;
        // cout << Sum(n)<<endl;

        //Power of 2
        n=5; //=> Evaluate num^5 through recursion
        
        int num=3;
        cout<<Pow(num,n);





}