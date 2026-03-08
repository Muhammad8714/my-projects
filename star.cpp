#include <iostream>
using namespace std;
int main()
{
	int r;
	cout<<"enter number of stars";
	cin>> r;
	for(int i=1;i<=r;i++)
	{
		cout<<'\n';
		for(int j=1;j<=i;j++)
		cout<<"*\t";
	}
	return 0;
}
