#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	vector<char> a;
	a.push_back('Z');
	int n,i;
	char x,y;
	bool Bflag=0;
	string word;
	cout<<"Enter string\n";
	cin>>word;
	n=word.length();
	for(i=0;i<n;i++)
	{
		x=word[i];
		if(x=='a' && Bflag==0)
		{
				a.push_back(x);

		}
		else if(x=='b')
			a.push_back(x);
		else if(x=='c')
			{
				if(a.back()=='b')
				a.pop_back();
			}
		else if(x=='d')
			{
				if(a.back()=='a')
				a.pop_back();
			}
	    
	}
	
	if(a.size()==1 && a[0]=='Z')
		cout<<"Accepted";
	else
		cout<<"Rejected";
	 return 0;
}
