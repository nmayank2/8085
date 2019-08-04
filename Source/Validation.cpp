#include<bits/stdc++.h>
using namespace std;
bool validityRegisters(string reg)
{
	if(reg=="A"||reg=="B"||reg=="C"||reg=="D"||reg=="E"||reg=="H"||reg=="L")
		return true;
	else
		return false;
}
bool validityRegisterPair(string reg)
{
	if(reg=="B"||reg=="D"||reg=="H"||reg=="M")
		return true;
	else 
		return false;
}
int stoi(char character)
{	
		return character-'0';
}
int registerNumber(string str)
{
	if(str=="A")
		return 0;
	if(str=="B")
		return 1;
	if(str=="C")
		return 2;
	if(str=="D")
		return 3;
	if(str=="E")
		return 4;
	if(str=="H")
		return 5;
	if(str=="L")
		return 6;
	return 0;
}
string itos(int integer)
{	
		string temp="ABCD";
		int i=0;
		while(integer!=0)
		{
				temp[i]=(integer%10)+'0';
				integer/=10;	
		}
		int n=temp.length();
		reverse(temp.begin(),temp.end());
		return temp;
}
string split(string s)
{
	int i=0;
	while(s[i]!=' ')		
	{
					i++;
	}	
		s[i]='\0';
		return s;
}
bool memoryValidation(string start)
{
			int num=0;
			int n=start.length();
			for(int i=0;i<n;i++)
			{	
					int a=stoi(start[i]);
					num=(num*10) + a; 
			}
			if(num>=2000 && num<=8000)
							return 1;
			return 0;				
}
bool inputValidation(string input)
{
	input=split(input);
	string arithmetic[]={"ADD","ADI","SUB","INR","DCR","INX","DCX","DAD","SUI"};
	string logical[]={"CMA","CMP"};
	string branch[]={"JMP","JC","JNC","JZ","JNZ"};
	string transfer[]={"MOV","MVI","LXI","LDA","SHLD","STAX","XCHG","STA","LHLD","SET"};
	int n=sizeof(arithmetic)/sizeof(arithmetic[0]);
	for(int i=0;i<n;i++)
	{
				if(!input.compare(arithmetic[i]))
								return true;
	}
	n=sizeof(logical)/sizeof(logical[0]);
	for(int i=0;i<n;i++)
	{
				if(!input.compare(logical[i]))
								return true;
	}
	n=sizeof(branch)/sizeof(branch[0]);
	for(int i=0;i<n;i++)
	{
				if(!input.compare(branch[i]))
								return true;
	}
		n=sizeof(transfer)/sizeof(transfer[0]);
	for(int i=0;i<n;i++)
	{
				if(!input.compare(transfer[i]))
								return true;
	}
	return false;
}
