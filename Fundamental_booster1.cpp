#include<iostream>
using namespace std;

int main()
{
	char n;
	cout<<"Enter String = ";
	cin>>n;
	
	if (n>='0' && n<='9')
	 {
	   cout<<"This String is Numeric";
	 }
	else
	 {
	   cout<<"This String is not Numeric";
	 }
	
	return 0;
}
