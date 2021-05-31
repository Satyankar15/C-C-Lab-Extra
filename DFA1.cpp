#include<iostream>
#include<string.h>
#define rep(x,n) for(int x = 0; x < n; x++)
using namespace std;
int univ=0;
void transition(int a, int b)
{
	cout<<"q"<<a<<" -----> q"<<b<<endl;
	univ=b;
}
int main()
{
	string a;
	int i=1,n=-1;
	cout<<"DFA to check if string starts with a and ends with a"<<endl;
	cout<<"Enter string\n";
	cin>>a;
	int size=a.length();
	rep(i,size)
		{
		if(a[0]!='a')
			{
				univ=0;
				break;
			}
		else //if first letter a
		{
			if(a[i]=='a'&&i==0)
			{
				transition(0,1);
			}
			else if(a[i]=='a')
				transition(univ,3);
			else
				transition(univ,2);
		}
		}

if(univ==3)
	cout<<"Accepted";
else
	cout<<"Rejected";
		
	return 0;
}
