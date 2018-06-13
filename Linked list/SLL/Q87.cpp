#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1, l2;
	node *curr, *p1, *p2;
	int temp;
	cout<<"\nEnter the first list ";
	l1.input();
	cout<<"\n";
	l1.display(l1.head);
	cout<<"\nEnter the second list ";
	l2.input();
	cout<<"\n";
	l2.display(l2.head);
	p1 = l1.head;
	while(p1)
	{
		if(p1->info <= l2.head->info)
			p1 = p1->next;
		else
		{
			temp = p1->info;
			p1->info = l2.head->info;
			l2.head->info = temp;
			p2 = l2.head;
			temp = p2->info;
			while(p2->next->info < temp)
			{
				p2->info = p2->next->info;
				p2 = p2->next;
			}
			p2->info = temp;
		}
	}
	l1.display(l1.head);
	l2.display(l2.head);
}
