#include<iostream>
using namespace std;
int main()
{
     for(;;)
  {
   // Special type Of Calculator.

   //Step: 1 Declaring Variables:

   string opr;
   float num1, num2, Answer;
   
   // Taking Inputs From User:

   cout<<"Calculator by Azlan Tarar"<<endl;
   cout<<"Operators= (+, -, *, /, x^)"<<endl;

   cout<<"Enter First Number: ";
   cin>>num1;

   cout<<"Enter The Operator: ";
   cin>>opr;

   cout<<"Enter Second Number: ";
   cin>>num2;

   // Conditions Of The Program:

   if(opr == "+")
   {
       Answer= (num1 + num2);

       cout<<num1<<" + "<<num2<<" = "<<(num1 + num2)<<endl<<endl;
   }

   if(opr == "-")
   {
       Answer= (num1 - num2);

       cout<<num1<<" - "<<num2<<" = "<<(num1 - num2)<<endl<<endl;
   }

   if(opr == "*")
   {
       Answer= (num1 *  num2);

       cout<<num1<<" * "<<num2<<" = "<<(num1 * num2)<<endl<<endl;
   }

   if(opr == "/")
   {
       Answer= (num1 / num2);

       cout<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl<<endl;
   }
   
   if(opr == "x^")
   {
   	int Ans=1;
   	
   	int i=1;
   	while(i<=num2)
   	{
   		Ans = Ans * num1;
   		i++;
	   }
	   cout<<"Answer = "<<Ans<<endl;
   }
  }
      system("pause");
      return 0;

}
