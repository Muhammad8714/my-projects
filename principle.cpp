# include <iostream>
using namespace std;
int main()
{
	int p,n,r,i;
	char T_acc;
	cout<<"enter principle amount";
	cin>> p;
	cout<<"enter number of years";
	cin>> n;
	cout<<"select type of account(S for SB,C for Current)";
	cin>> T_acc;
	
	if(T_acc=='s'||T_acc=='S')
	r=6.5;
	if(T_acc=='c'||T_acc=='C')
	r=8.5;
	
	i=p*n*r/100;
	
	cout<<"enter principle amount on Rs"<<p
	<<"for"<<n<<"years in"<<"amount Rs"<<i;
	return 0;
}
