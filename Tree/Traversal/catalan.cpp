#include<iostream>
using namespace std;
int count(int n)
{
	if(n == 0 || n == 1)
		return 1;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += count(i)*count(n-i-1);
	}
	return sum;
}
int main()
{
	int size;
	cout<<"\nEnter the number of nodes ";
	cin>>size;
	cout<<"\nThe number of possible trees is "<<count(size);
}
