#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *ptr, *prev, *temp;
	cout<<"\nEnter the list ";
	l1.input();
	ptr = l1.head->next;
	prev = l1.head;
	while(ptr)
	{
		if(ptr->info < 0)
		{
			prev->next = ptr->next;
			ptr->next = l1.head;
			l1.head = ptr;
			if(ptr == l1.tail)
				l1.tail = prev;
			ptr = prev->next;
		}
		else
		{
			prev = ptr;
			ptr = ptr->next;
		}
	}
	display(l1.head);
}
