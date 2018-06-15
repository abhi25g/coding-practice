#include<iostream>
#include<ll.h>
using namespace std;
node* merge(node *s, node *n)
{
	node *temp, *ptr1 = s, *ptr2 = n, *hd;
	if(ptr1->info < ptr2->info)
	{
		temp = ptr1;
		ptr1 = ptr1->next;
	}
	else
	{
		temp = ptr2;
		ptr2 = ptr2->next;
	}
	hd = temp;
	while(ptr1 && ptr2)
	{
		if(ptr1->info < ptr2->info)
		{
			temp->next = ptr1;
			ptr1 = ptr1->next;
		}
		else
		{
			temp->next = ptr2;
			ptr2 = ptr2->next;
		}
		temp = temp->next;
	}
	if(ptr1)
	{
		temp->next = ptr1;
	}
	if(ptr2)
	{
		temp->next = ptr2;
	}
	return hd;
}
int main()
{
	ll l1;
	node *p1, *p2, *temp, *ptr;
	cout<<"\nEnter the linked list ";
	l1.input();
	display(l1.head);
	p1 = l1.head;
	p2 = p1->next;
	ptr = p2;
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
	ptr = reverse(ptr);
	l1.head = merge(l1.head, ptr);
	display(l1.head);
}
