//header file and operators
# include <iostream>        
// there are two type of header FILE
// 1. system header files: it comes with the compiler
// 2. user defined header files: it is written by the  programmer
using namespace std;

int main() {
    int a=4 ,b=5;

      cout<<"operator in c++ \n";
      cout<<"following are the comparision operator \n";
      //arithamatic operators
      cout<< "the value of a+b is"<<  a+b  <<endl;
      cout<< "the value of a-b is"<<  a-b  <<endl;
      cout<< "the value of a*b is"<<  a*b  <<endl;
      cout<< "the value of a/b is"<<  a/b  <<endl;
      cout<< "the value of a%b is"<<  a%b  <<endl;
      cout<< "the value of a++ is"<<  a++  <<endl; // increment value by 1 after code run(print) 
      cout<< "the value of a-- is"<<  a--  <<endl; // decrement by 1 afer code run(print)
      cout<< "the value of ++a is"<<  ++a  <<endl; // increment value by 1 before print 
      cout<< "the value of --a is"<<  --a  <<endl; // decrement by 1 before print 
      cout<< endl;
      cout<< endl;
      cout<< endl;
      cout<< "\n";



    // Assignment operator --> use to assign values to variables
      // int a=4 , b =5;
      //char f ='d';

    //Comparision operaator
       cout<< "following are comparision operator\n";    // 1 means true;  0 means false;
       cout<<"the value of a == b is "<<  (a==b) <<endl;
       cout<<"the value of a != b is "<<  (a!=b) <<endl;
       cout<<"the value of a >= b is "<<  (a>=b) <<endl;
       cout<<"the value of a <= b is "<<  (a<=b) <<endl;
       cout<<"the value of a > b is  "<<   (a>b)  <<endl;
       cout<<"the value of a < b is  "<<   (a<b)  <<endl;
       cout<< endl;
       cout<< endl;
       cout<< endl;

      
      //logical operator
      cout<< "following are type of logical operators"<<endl;
      cout<< "the value of logical and operator ((a==b) && (a>=b))  is: "<<        ((a==b) && (a>=b))<<endl;
      cout<< "the value of logical or operator ((a==b) || (a>=b))   is: "<<        ((a==b) || (a>=b))<<endl;
      cout<< "the value of logical not operator (!(a==b))           is: "<<        (!(a==b))<<endl;

          cout<< endl;
          cout<< endl;
      
    
      
      return 0;

}