#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int curr=0, shift=0;
	int dfatable[5][4]={{0,1,2,1},{1,1,3,1,},{2,4,2,1},{3,1,3,0},{4,4,2,0}};	
	cout<<"Enter string"<<endl;
	cin>>a;
	int size=a.length();
	int count=0;
	char x;
	if(size<2)
		goto e;
	while(count<size)
	{
		x=a[count];
		if(x=='a')
			shift=1;
		else if(x=='b')
			shift=2;
		else
		{
			cout<<"Invalid Input "<<x<<"\n";
			goto e;
		}
		
		cout<<"q"<<dfatable[curr][0]<<" ------> "<<"q"<< dfatable[curr][shift]<<endl;
		curr=dfatable[curr][shift];
		count++;
	}
	if(dfatable[curr][3]==1)
		cout<<"Accepted";
	else
		e:cout<<"Rejected";
}
