#include<iostream>
#include<string.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
int univ1=0,univ2=0;
void transition(int a, int b,int c, int d)
{
	cout<<"q"<<a<<b<<" -----> q"<<c<<d<<endl;
	univ1=c;
	univ2=d;	
}
int main()
{
	int i,n,x,y;
	string s;
	cout<<"\t\tThis is a DFA that only accepts strings with number of a divisible by 3 and number of b should be divisible by 2\n";
	cout<<"Enter String\n\n\n";
	cin>>s;
	n=s.length();
	rep(i,n)
	{
		if(s[i]!='a'&& s[i]!='b')
		{
			cout<<"Rejected";
			return 0;
		}
		else//valid input
		{
			if(i==0) //first letter a
				{
					if(s[i]=='a')
						transition(0,0,1,0);	
					else if(s[i]=='b')// first letter b
						transition(0,0,0,1);
				}
			 else
			 {
			 	if(s[i]=='a')
			 	{
					x=(univ1+1)%3;
					y=univ2;
			 		transition(univ1,univ2,x,y);
			 	}
			 	else
			 	{
			 		x=univ1%3;
			 		y=(univ2+1)%2;
			 		transition(univ1,univ2,x,y);
				 }
			 }
		}
		
	}
	if(univ1==0 && univ2==0)
		cout<<"\nAccepted";
	else
		cout<<"\nRejected";
	return 0;
}
