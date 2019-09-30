#include<iostream>
#include<stdio.h>

#include<string.h>
using namespace std;
class String
{
	char str[20];
	public:
		void getdata()
		{
			gets(str);
		}
       int operator==(String s)
       {
       	if(!strcmp(str,s.str))
       	return 1;
       	return 0;
       	
	   }
       
};
main()
{
	String s1,s2;
	cout<<"enter first string";
	s1.getdata();
	cout<<"enter second string";
	s2.getdata();
	if(s1==s2)
	{
		cout<<"Strings are equal";
	}
	else
	{
		cout<<"strings are not equal";
		
	}
	return 0;
}

