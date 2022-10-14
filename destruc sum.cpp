//Write a program to find the number and T4Tutorials_Sum of all integer between 100 and 200 which are divisible by 9.

//constructor & destructor

#include<iostream>
using namespace  std;
class number
{
	public:
		number(int i,int T4Tutorials_Sum)
		{
	cout<<"numbers that are divisible by 9 between 100 and 200\n";
				for(i=101; i<200; i++)
				if(i%9==0)
				{
					cout<<"numbers divisble by 9 is= "<<i<<endl;
					T4Tutorials_Sum=T4Tutorials_Sum+i;
				}
				cout<<"T4Tutorials_Sum of all numbers divisible by 9 is= "<<T4Tutorials_Sum<<endl;
		}
		~number()
		{
			cout<<"\n destructor completed its work to free up memory"<<endl;
		}
};
int main()
{
	number f(101,0);
}n#include<iostream>
using namespace std;
class T4Tutorials
{
	private:
		int n,i;
		public:
	T4Tutorials()
	{
		cout<<"Enter number to reverse: ";
		cin>>n;
	}
	void out()
	{
		cout<<endl<<"The reverse of the Entered number: ";
		for(i=n;n>0;n=n/10)
		{
			cout<<n%10;
		}
	}
};
int main()
{
	T4Tutorials r;
	r.out();
}
