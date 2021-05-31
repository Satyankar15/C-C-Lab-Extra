#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int curr=0, shift=0, out=0;
	int dfatable[5][4]={{0,0,1,0},{1,2,1,0},{2,0,3,0},{3,2,1,1}};
	cout<<"Enter string"<<endl;
	cin>>a;
	int size=a.length();
	int count=0;
	char x;
		while(count<size)
	{
		x=a[count];
		if(x=='0')
		{
			shift=1;
		}
		else if(x=='1') 
		{
			shift=2;
		}
		else
		{
			cout<<"Invalid Input "<<x;
			goto e;
		}
		
		if(count==0)
			cout<<"              Output: "<<dfatable[curr][0]<<endl;
		cout<<"q"<<dfatable[curr][0]<<" ------> "<<"q"<< dfatable[curr][shift];
		curr=dfatable[curr][shift];
		cout<<" Output: "<<dfatable[curr][3]<<endl;
		count++;
	}
	e:return 0;
}
