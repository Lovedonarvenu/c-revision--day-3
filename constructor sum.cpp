//Write a program to find the number and T4Tutorials_Sum of all integer between 100 and 200 which are divisible by 9.

//constructor overloaded

#include<iostream>
using namespace  std;
class number
{
	private:
		int i,T4Tutorials_Sum=0;
		public:
			number(int n)
		{
	
				for(i=n; i<200; i++)
				if(i%9==0)
				{
					cout<<"numbers divisble by 9 is= "<<i<<endl;
					T4Tutorials_Sum=T4Tutorials_Sum+i;
				}
				cout<<" Sum of all numbers divisible by 9 is= "<<T4Tutorials_Sum<<endl;
		}
		number(long int a)
		{
	int i,T4Tutorials_Sum=0;
	
				for(i=a; i<200; i++)
				if(i%9==0)
				{
					cout<<"numbers divisble by 9 is= "<<i<<endl;
					T4Tutorials_Sum=T4Tutorials_Sum+i;
				}
				cout<<"T4Tutorials_Sum of all numbers divisible by 9 is= "<<T4Tutorials_Sum<<endl;
		}
};
int main()
{
	int choice;
	cout<<"enter choice";
	cin>>choice;
	switch(choice)
	{
		case 0:
		{
			int n;
			cout<<"enter first number to find the all numbers that are divisible by 9 between 100 and 200\n";
			cin>>n;
		number	obj(n);
			break;
		}
		case1:
			{
				long int a;
				cout<<"enter first number to find the all numbers that are divisible by 9 between 100 and 200\n";
				cin>>a;
				number obj2(a);
				break;
			}
			default:
				cout<<"invalid input";
	}
}
