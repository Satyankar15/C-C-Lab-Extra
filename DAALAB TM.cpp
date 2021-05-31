#include <iostream>
#include <vector>
#include <string>
using namespace std;
string input;
int index;
int transitions(int curr)
{
if (curr == 3)
{
if (input[index] == 'y')
{
cout << "Q2->(y->y,R)->";
index++;
return 6;
}
if (input[index] == '_')
{
cout << "Q2->(_->_,R)->Q7";
index++;
return 7;
}
if (input[index] == 'a')
{
cout << "Q2->(a->x,R)->";
input[index] = 'x';
index++;
return 4;
}
//cout << "\nREJECT FROM Q3";
return -1;
}
if (curr == 4)
{
if (input[index] == 'a')
{
cout << "Q3->(a->a,R)->";
input[index] = 'a';
index++;
return 4;
}
if (input[index] == 'y')
{
cout << "Q3->(y->y,R)->";
input[index] = 'y';
index++;
return 4;
}
if (input[index == 'b'])
{
cout << "Q3->(b,y,L)->";
input[index] = 'y';
index--;
return 5;
}
return -1;
}
if (curr == 5)
{
if (input[index] == 'y')
{
cout << "Q5->(y->y,L)->";
input[index] = 'y';
index--;
return 5;
}
if (input[index] == 'a')
{
cout << "Q5->(a->a,L)";
input[index] = 'a';
index--;
return 5;
}
if (input[index] == 'x')
{
cout << "Q5->(x->x,R)->";
input[index] = 'x';
index++;
return 3;
}
return -1;
}
if (curr == 6)
{
if (input[index] == 'y')
{
cout << "Q6->(y->y,R)->";
index++;
return 6;
}
if (input[index] == '_')
{
cout << "Q6->(_->_,R)->Q7";
index++;
return 7;
}
return -1;
}
}
int main()
{
cout << "Enter the input: ";
cin >> input;
cout << "->Q0->";
input.push_back('_');
index = 2;
if (input[0] != 'a')
{
cout << "Rejected";
return 0;
}
cout << "(a->$,R)->Q2->";
if (input[1] != 'a')
{
cout << "Rejectec";
return 0;
}
cout << "(a->$,R)->";
int curr = 3;
while (index < input.size())
{
curr = transitions(curr);
if (curr == -1)
{
cout << "\nREJECTED";
return 0;
}
}
if (curr == 7)
cout << "\nACCEPTED";
else
cout << "\nREJECTED";
return 0;
}
