#include<iostream>
using namespace std;
int main()
{
	// Factorial Calculator.
	
	int num,Ans=1;
	
	cout<<"Enter The ! Number : ";
	cin>>num;
	
	for(int i=num; i>0; i--)
	{
		Ans= Ans * i;
	}
	
	cout<<"Factorial of given Number : "<<Ans<<endl;
	
	system("pause");
	
	return 0;
}
