#include<iostream>
using namespace std;
int main()
{
	for(;;)
	 {  
	
	// Program fro Calculating Power of a Number.
	
 int b,e,p=1;  // b for base and e for exponent.
 
 
    // Taking Inputs.
 
 cout<<"\t\t\t\tExponent Calculator by Azlan Tarar"<<endl<<endl;
 
 cout<<"Enter The Base: ";
 cin>>b;
 
 cout<<"Enter The Exponent: ";
 cin>>e;
  
   // Using For Loop.
   
   for(int i= 1; i<=e; i++)
   {
   	 p= (p*b);  	
   }
   
    // Displaying Outputs.
    
 cout<<"The Answer is: "<<p<<endl<<endl;
  }
 
return 0;

	
}

