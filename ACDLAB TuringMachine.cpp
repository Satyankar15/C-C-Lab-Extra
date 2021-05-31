#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	string word;
	int i,n;
	cout<<"Enter word\n";
	cin>>word;
	n=word.length();
	vector<char> vec;
	vec.push_back('X');
	vec.push_back('B');		//B is terminal symbol
	for(i=0;i<n;i++)
		vec.push_back(word[i]);
	vec.push_back('b');
	vec.push_back('b');
	vec.push_back('B');
	vec.push_back('X');
	int flag=0;
	int count=0;
	i=2;
	while(vec[i]!='X')
	{
		char letter=vec[i];
		cout<<i<<letter<<endl;
		if(letter=='a' && flag==0)
		{
			vec[i]='x';
			flag=1;
			i++;
		}
		else if(letter=='a' && flag==1)
				i++;
		else if(letter=='b' && flag==1)
		{
			vec[i]='y';
			flag=0;
			i--;
		}
		else if(letter=='b' && flag==0)
			i--;
		else if(letter=='x')
			{	if(flag==1)
					i++;
				else if(flag==0)
					i--;
			}
			else if(letter=='y')
			{	if(flag==1)
					i--;
				else if(flag==0)
					i++;
			}
		else if(letter=='y' && flag==1)
			i--;
	}
	for(i=0;i<vec.size();i++)
		cout<<vec[i]<<" ";
}
