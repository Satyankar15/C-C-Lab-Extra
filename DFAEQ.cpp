#include<iostream>
#include<string>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
int univ1=0,univ2=4;
void transition(int a,string s1, int b,string s2,int c)
{
	//cout<<"q"<<a<<" "<<s1<<" -----> q"<<c<" "<<s2<<endl;
	cout<<"q"<<a<<" ";
	cout<<s1;
	cout<<" -----> q"<<b<" ";
	cout<<s2;
	cout<<endl;
	if (c==1)
		univ1=b;
	else
		univ2=b;	
}
int main()
{
	string a;
	string s1="(Non-Final)";
	string s2="(Final)    ";
	int i, n;
	cout<<"This program checks whether 2 pre-defined DFAs are equivalent or not."<<endl;
	cout<<"Please refer to word file for more details on the DFAs\n\n"<<endl;
	cout<<"Enter number"<<endl;
	cin>>a;
	cout<<endl;
	n=a.length();
	for(i=0;i<n;i++)
	{
		if(a[i]!='0' && a[i]!='1')
		{
			cout<<"Invalid Input";
			cout<<"\nRejected";
			return 0;
		}
		else	//Valid Input
		{
			if(univ1==0)
			{
				if(a[i]=='0')
					transition(univ1,s1,1,s1,1);
				else
					transition(univ1,s1,2,s1,1);
			}
			else if(univ1==1)
			{
				if(a[i]=='0')
					transition(univ1,s1,3,s2,1);
				else
					transition(univ1,s1,2,s2,1);
			}
			else if(univ1==2)
			{
				if(a[i]=='0')
					transition(univ1,s1,2,s1,1);
				else
					transition(univ1,s1,2,s1,1);
			}
			else if(univ1==3)
			{
				if(a[i]=='0')
					transition(univ1,s2,2,s1,1);
				else
					transition(univ1,s2,1,s1,1);
			}
			if(univ2==4)
			{
				if(a[i]=='0')
					transition(univ2,s1,5,s1,2);
				else
					transition(univ2,s1,6,s1,2);
			}
			else if(univ2==5)
			{
				if(a[i]=='0')
					transition(univ2,s1,7,s2,2);
				else
					transition(univ2,s1,6,s1,2);
			} 
			else if(univ2==6)
			{
				if(a[i]=='0')
					transition(univ2,s1,6,s1,2);
				else
					transition(univ2,s1,6,s1,2);
			}
			else if(univ2==7)
			{
				if(a[i]=='0')
					transition(univ2,s2,4,s1,2);
				else
					transition(univ2,s2,6,s1,2);
			}
		}
	}
		if(univ1==2 && univ2==7)
		{
			cout<<"\nq"<<univ1<<" and q"<<univ2<<" both are non-homogeneous states"<<endl;
		cout<<"Both DFAs are not equivalent for given input"<<endl;
		return 0;
		}
		cout<<"\nq"<<univ1<<" and q"<<univ2<<" both are homogeneous states"<<endl;
		cout<<"Both DFAs are equivalent for given input"<<endl;
		return 0;
}
