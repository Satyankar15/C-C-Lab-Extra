#include<iostream>
#include<cmath>
using namespace std;
int rectcheck(int a, int b, int c, int d)
{
	if(a==b && b==c && c==d)
		return 1;
	else if(a==b)
	{
		if(c==d)
			return 1;
	}
	else if(a==c)
	{
		if(b==d)
			return 1;
	}
	else if(a==d)
	{
		if(b==c)
			return 1;
	}
	else return 0;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(rectcheck(a,b,c,d))
		cout<<"Rectangle possible\n";
	else
		cout<<"Rectangle not possible\n";
	return 0;
}
