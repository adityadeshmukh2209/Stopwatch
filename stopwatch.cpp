//Stopwatch
#include<iostream>
#include<cstdlib>
#include<windows.h>

using namespace std;

int main()
{
	short min,sec;int time;
	
	do{
		cout<<"Enter Seconds::  \n";
		cin>>sec;
	}while(sec>59);
	do{
		cout<<"Enter Minutes::  \n";
		cin>>min;
	}while(min>59);
	
	time=(min!=0)?min*60 : 0;
	time += sec;
	
	for(int i=time;i>0;i--)
	{
		system("cls");
		cout<<"Time remaining is 0 : "<<min<<" : "<<sec<<endl;
		min=(i%60==0)?--min:min;
		sec=(sec==0)?59:--sec;
		
		system("TIMEOUT 1");
	}
	system("cls");
	cout<<"****************\nTimer Ended!!!\n****************"<<endl;
	cout<<"Thank You!!";
	return 0;
}
