#include<iostream>
#include<llarb.h>
using namespace std;
int main()
{
	ll l1, l2;
	node *a1, *a2, *a3, *a4, *a5, *ptr, *prev, *p1, *p2, *temp;
	a1 = new node(5);
	a2 = new node(6,a1);
	a3 = new node(7,a2);
	a4 = new node(8,a3);
	a5 = new node(9,a4);
	a1->arb = a3;
	a2->arb = a4;
	a3->arb = a5;
	a4->arb = a1;
	a5->arb = a2;
	l1.head = a5;
	ptr = l1.head;
	while(ptr)
	{
		ptr->next = new node(ptr->info,ptr->next);
		ptr = ptr->next->next;
	}
	prev = l1.head;
	ptr = prev->next;
	while(prev)
	{
		ptr->arb = prev->arb->next;
		prev = prev->next->next;
		if(!prev)
			break;
		ptr = prev->next;
	}
	p1 = l1.head;
	p2 = p1->next;
	l2.head = p2;
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
	cout<<"\nThe original list is \n";
	displayarb(l1.head);
	cout<<"\n";
	cout<<"\nThe cloned list is \n";
	displayarb(l2.head);
}  
