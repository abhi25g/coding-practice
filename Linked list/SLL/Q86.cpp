#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1, l2;
	node *curr, *p1, *p2;
	cout<<"\nEnter the first list ";
	l1.input();
	cout<<"\n";
	l1.display(l1.head);
	cout<<"\nEnter the second list ";
	l2.input();
	cout<<"\n";
	l2.display(l2.head);
	curr = l1.head;
	p1 = curr->next;
	p2 = l2.head;
	while(curr)
	{
		curr->next = p2;
		p2 = p2->next;
		curr = curr->next;
		if(!p1)
		{
			curr->next = NULL;
			break;
		}
		curr->next = p1;
		p1 = p1->next;
		curr = curr->next;
		if(!p2)
			break;
	}
	l2.head = p2;
	cout<<"\nThe 1st list is ";
	l1.display(l1.head);
	cout<<"\nThe 2nd list is ";
	l2.display(l2.head);
}
