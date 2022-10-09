#include<iostream>
using namespace std;
int main()
{
	/* Declaring variables. A program for converting temperature from Celsius to Fahranheit scale*/
	
	float C, F;
	
	// Getting inputs from users.
	
	cout<<"Enter the temperature in Degree Celsius= ";
	cin>>C;
	
    // Compute Formula.
    
    F= (C*9/5) + 32;
    
    // Displaying Outputs.
    
    cout<<"Temperature in Fahranheit Scale is =  "<<F<<endl;
	}
