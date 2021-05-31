#include<iostream>
#include<string.h>
#define rep(x,n) for(int x = 0; x < n; x++)
using namespace std;
int main()
{
	string a;
	int curr=0, shift=0, out=0;
	int dfatable[5][4]={{0,0,1,0,0},{1,2,1,0,0},{2,0,3,0,1},{3,2,1,0,0}};
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
			out=3;
		}
		else 
		{
			shift=2;
			out=4;
		}
		cout<<"q"<<dfatable[curr][0]<<" ------> "<<"q"<< dfatable[curr][shift]<<" Output: "<<dfatable[curr][out]<<endl;
		curr=dfatable[curr][shift];
		count++;
	}
	return 0;
}
