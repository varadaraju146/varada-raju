#include<iostream>
using namespace std;
class report
{
private:
int adno;
char name[20];
float marks[5];
float average;
float avg;
int i;
public:
readinfo()
{

cout<<"enter the admision number: "<<endl;
cin>>adno;
cout<<"enter the student name"<<endl;
cin>>name;
cout<<"enter the marks for 4 subjects"<<endl;
for(int i=0;i<5;i++)
{
cin>>marks[i];	

}
	}
getavg()
{ avg=0;
for(i=0;i<5;i++)
  {
  average=marks[i]/5;	
 avg=avg+average;
}
	}	
displayinfo()
{
cout<<"the student name:"<<name<<endl;
cout<<"admision number is:"<<adno<<endl;
cout<<" the average:"<<avg<<endl;	
	}	
};
int main()
{
report a;
a.readinfo();
a.getavg();
a.displayinfo();
return 0;	
}
