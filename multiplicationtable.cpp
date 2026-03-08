#include <iostream>
using namespace std;
int main()
{
	int a,i;
	cout<<"enter a number";
	cin>> a;
	cout<<"\n multiplication table of"<<a;
	for(i=1;i<=12;i++)
	{
		cout<<'\n'<<a<<"x"<<i<<"="<<a*i;
	}
	return 0;
}
