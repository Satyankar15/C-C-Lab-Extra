#include<iostream>
#include<string.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
int univ=0;
void transition(int a, int b)
{
	cout<<"q"<<a<<" -----> q"<<b<<endl;
	univ=b;
}
int main()
{
	string num;
	cout<<"\t\tThis is a DFA that accepts those inputs where every 00 is followed by a 1"<<endl;
	cout<<"Enter string number\n"<<endl;
	cin>>num;
	cout<<endl;
	int i,n=num.length();
	rep(i,n)
	{
		if(num[i]!='1' && num[i]!='0')
		{
			cout<<"Invalid input"<<endl;
			cout<<"Rejected";
			return 0;
		}
		else  //Valid string
		{
			if(univ==0)
			{
			if(num[i]=='1')
				transition(univ,0);
			else if(num[i]=='0')
				transition(univ,1);
			}
			else if(univ==1)
			{
				if(num[i]=='1')
					transition(univ,0);
				else
					transition(univ,2);
			}
			else if(univ==2)
			{
				if(num[i]=='1')
					transition(univ,4);
				else
					transition(univ,3);
			}
			else if(univ==3)
			{
				if(num[i]=='1')
					transition(univ,3);
				else
					transition(univ,3);
			}
			else if(univ==4)
			{
				if(num[i]=='1')
					transition(univ,4);
				else
					transition(univ,1);
			}
			
		}
	}
	if(univ==0 || univ==1 || univ==4)
		cout<<"\nAccepted";
	else
		cout<<"\nRejected";
	return 0;
}
