#include<iostream>
using namespace std;
int main()
{
	int n[100],a[100],size;
	
	cout<<"Enter Size of Value = ";
	cin>>size;
	cout<<"Enter value = ";
	
	for(int i=0;i<size;i++)
	{
		cin>>n[i];
		n[i]=n[i]*n[i]*n[i];
	}
	cout<<"Cubes Array = ";
	for(int i=0;n[i]!=NULL;i++)
	{
		a[i]=n[i];
		cout<<a[i]<<" ,";
	}
	return 0;
}

