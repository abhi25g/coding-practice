#include<iostream>
#include<conio.h>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *p1, *p2;
	cout<<"\nEnter the list ";
	l1.input();
	display(l1.head);
	l1.tail->next = l1.head->next->next;
	p1 = p2 = l1.head;
	do
	{
		p1 = p1->next;
		p2 = p2->next->next;
		if(p1 == p2)
		{
			cout<<"\nCycle detected";
			getch();
			return 1;
		}
	}while(p1 && p2);
	cout<<"\nNo cycle";
}
