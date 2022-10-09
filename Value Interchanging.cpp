#include<iostream>
using namespace std;
int main()
{
  // A program for interchanging values of two variabes. Only a logic question.
   
  // Declaring the Variables.
 int a;
 int b;
 int tempo;                     // Temporary Variable.
 
  // Taking Inputs From User.
  
  cout<<"Enter the Value of a= ";
  cin>>a;
  
  cout<<"Enter the value of b= ";
  cin>>b;

  
  // Process for Interchanging values of A and B using the third variable.
  
  tempo= b;        
  b= a;
  a= tempo;
  
  // Displaying Output after Interchanging.
  
  cout<<"Value of A now becomes= "<<a<<endl;        
  
  cout<<"Value of B now becomes= "<<b<<endl;
  
  system("pause");
  
   return 0;
  
   	
   
}
