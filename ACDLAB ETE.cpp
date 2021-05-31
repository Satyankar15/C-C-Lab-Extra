#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	vector<char> a;
	a.push_back('Z');
	int n,i,k,j=0,m;
	char x,y;
	bool Bflag=0;
	string word;
	cout<<"Enter string\n";
	cin>>word;
	n=word.length();
	for(k=0;k<n;k++)
	{
		if(word[k]=='a')
			j++;
	}
	//cout<<"J is "<<j<<endl;
	for(k=0;k<n;k++)
	{
		x=word[k];
		//cout<<"W[k] is "<<x<<endl;
		if(x=='a' && Bflag==0)
			{
				a.push_back(x);
			}
		else if(x=='b')
		{
			if(j>0)
			{
				if(a.back()=='a')
					a.pop_back();
				j--;
			}
			else
			{
				a.push_back(x);
			}
			Bflag=1;
		}
		else if(x=='c')
		{
			if(a.back()=='b')
				a.pop_back();
			else if(a.back()=='Z')
				a.push_back(x);
		}
		cout<<"Stack: ";
		for(m=0;m<a.size();m++)
			cout<<a[m];
			cout<<endl;
		}
	if(a.size()==1 && a[0]=='Z')
		cout<<"Accepted";
	else
		cout<<"Rejected";
	 return 0;
}
