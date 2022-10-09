#include<iostream>
using namespace std;
int main()
{
	// Program for checking LEAP YEAR.
	
	// Declaring Variable.
	
	int day, month, year;
	
	// Taking Inputs From Users.
	
	cout<<"Enter Day: ";
	cin>>day;
	
	cout<<"Enter Month: ";
	cin>>month;
	
	cout<<"Enter Year: ";
	cin>>year;
	
	// Computing Formula for Leap Year.
	
	if(year%4 ==0)
    {
    	cout<<"This is a LEAP YEAR"<<endl;
    }
    else
    {
    	cout<<"This is not a LEAP YEAR"<<endl;
	}
       system("pause");
        return 0;
}

