#include<iostream>
#include<bt.h>
using namespace std;
int main()
{
	tree t1;
	int l;
	t1.input();
	cout<<"\nWhich level do you want to print? ";
	cin>>l;
	printlevel(t1.root, l);
}
