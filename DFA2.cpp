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
void reverseArray(string &s, int start, int end)
{
    while (start < end)
    {
        int temp = s[start]; 
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    } 
}
int main()
{
string number;
cout<<"\t\tDFA to input binary number and check if number is divisible by 3\n";
cout<<"Enter binary number\n\n";
cin>>number;
cout<<endl;
int n=number.length(), i;
reverseArray(number,0,n-1);
rep(i,n)
{
	if(number[i]!='1' && number[i]!='0')
	{
		univ=-1;
		break;
	}
	if(i==0)
	{
		if(number[i]=='0')
			transition(0,1);
		else
			transition(0,2);
	}
	else
	{
		if(univ==1)
			{
				if(number[i]=='0')
					transition(1,1);
				else
					transition(1,2);
			}
		else if(univ==2)
			{
				if(number[i]=='0')
					transition(2,3);
				else
					transition(2,1);
			}
		else if(univ==3)
			{
				if(number[i]=='0')
					transition(3,2);
				else
					transition(3,3);
			}	
	}

}
if(univ==1)
	cout<<"\nAccepted";
else
	cout<<"\nRejected";
return 0;
}

