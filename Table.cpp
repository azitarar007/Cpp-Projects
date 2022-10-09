#include<iostream>
using namespace std;
int main()
{
   // A Program for finding Table of any number using for loop.

   //Declaring Variables.
   int num, i;              // num= number entered, i = variable on which for loop applied.
  
  // Taking Input.

  cout<<"Enter Number about your Wish: ";
  cin>>num;

  // Conditions of the Programme.

  for(i=1;i<=10;i++)     /* Using For loop. start from 1 to users choice(put in i<=100).
                              i++ means increment of 1.*/
      
  // Displaying Output.

  cout<<num<<" * "<<i<<" = "<<(num * i)<<endl;
     system("pause");
     return 0;
}