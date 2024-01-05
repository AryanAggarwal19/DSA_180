

#include<iostream>
using namespace std;

class Student //User Defined Datatype
{
    private: //access modifiers , bydefault- private,( public, protected )
    string name;
    int age, roll_number;
    string grade;
    // Function Getter and Setter
    public:
    void setName(string s){

        if(s.size()==0){
            cout<< "Invalid name: ";
            return;
        }
        name=s;
    }
    void setAge(int x){
        if(age<0){
            cout<<"Invalid Age";
            return;
        }
        age=x;
    }
    void setRoll_Number(int r){
        roll_number=r;
    }
    void setGrade(string s){
        grade=s;
    }

    void getName(){ //getter function => Is used to print the information
        cout<<name<<endl;
    }

    int getAge(){
        return age;
    }

  string get_Grade(int pin){ //IMportant Example
    if(pin==123){
        return grade;
    }
    return " ";
  }

};



int main(){

    // //Student-1
    // string name;
    // int age, roll_number;
    // string grade;

    // cin>>name>>age>>roll_number>>grade;

    // //Student-2
    // string name1;
    // int age1, roll_number1;
    // string grade1;

    // cin>>name1>>age1>>roll_number1>>grade1;
    // //multiple time same operation -> perform

// Student S1;
// S1.name= "Aryan";
// S1.age= 21;
// S1.roll_number=37;
// S1.grade="A+";

// cout<< S1.age<<" ";

// Student S2;
// S1.name= "Brijesh";
// S1.age= 21;
// S1.roll_number=46;
// S1.grade="A+";

// cout<<S2.name<<" "; //when access modifier was public object can be accsessed outside class

//when made private // function methods  are used

Student S1;
S1.setName("Aryan Aggarwal");
S1.setAge(22);
S1.setRoll_Number(37);
S1.setGrade("A+");

S1.getName();
cout<<S1.getAge()<<endl;

cout<<S1.get_Grade(123);





























}