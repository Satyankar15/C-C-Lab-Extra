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
	cout<<"DFA to check if string has equal occurences of ab and ba"<<endl;
	cout<<"Enter string\n";
	cin>>a;
	int size=a.length();
	if(size<2)
	goto e;
	rep(i,size)
		{
		if(a[i]=='a')
		{
			if(univ==0)
				transition(univ,1);
			else if(univ==1)
				transition(univ,1);
			else if(univ==2)
				transition(univ,4);
			else if(univ==3)
				transition(univ,1);
			else 
				transition(univ,4);
		}
		if(a[i]=='b')
		{
			if(univ==0)
				transition(univ,2);
			else if(univ==1)
				transition(univ,3);
			else if(univ==2)
				transition(univ,2);
			else if(univ==3)
				transition(univ,3);
			else 
				transition(univ,2);
		}
		}

if(univ==0 || univ==1 || univ==2)
	cout<<"Accepted";
else
	e:cout<<"Rejected";
		
	return 0;
}
