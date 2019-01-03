#include<iostream>
#include<cctype>
using namespace std;
void linechar (int a);

int linechar (int b, int c)
{
	for(int g=0;g<10;g++)
	{
	cout << "*";
	}
	cout<<"\n";
	for (int g=0;g<15;g++)
	{
		cout << "#";
	}
}
int main ()
{
	int a,b,c;
	linechar (a);
	linechar (b,c);
return 0;
}

void linechar (int a)
{
	for(int g=0;g<=20;g++)
	{
		cout <<"*";
	}
	cout <<"\n";
	for( int g=0;g<=20;g++)
	{
		cout<<"@";
	}
	cout <<"\n";
}
