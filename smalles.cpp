#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	if (a<b && a<c)
	cout<<a<<"isthe smallest";
	else if (b<c)
	cout<<b<<"is the smallest";
	else
	cout<<c<<"is the smallest";
	return 0;
}
	
