#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *p1, *p2, *temp, *l2;
	cout<<"\nEnter the list ";
	l1.input();
	l1.display(l1.head);
	p1 = l1.head;
	p2 = p1->next;
	l2 = p2;
	temp = p2->next;
	while(temp)
	{
		p1->next = temp;
		p1 = p1->next;
		temp = temp->next;
		if(!temp)
			break;
		p2->next = temp;
		p2 = p2->next;
		temp = temp->next;
	}
	if(p1)
		p1->next = temp;
	if(p2)
		p2->next = temp;
	p1 = l1.head;
	while(p1->next)
		p1 = p1->next;
	p1->next = l2;
	l1.display(l1.head);
}
