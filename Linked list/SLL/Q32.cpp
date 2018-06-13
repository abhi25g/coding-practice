#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *prev, *ptr, *curr, *p1, *p2;
	l1.input();
	l1.display(l1.head);
	ptr = l1.tail;
	curr = l1.head;
	prev = NULL;
	while(curr != ptr)
	{
		if(curr->info % 2)
		{
			if(prev)
			{
				prev->next = curr->next;
			}
			else if(curr == l1.head)
				l1.head = l1.head->next;
			l1.tail->next = curr;
			l1.tail = curr;
			curr = curr->next;
			l1.tail->next = NULL;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
	ptr = l1.head;
	prev = NULL;
	while(ptr->info % 2 == 0)
	{
		prev = ptr;
		ptr = ptr->next;
	}
	prev->next = NULL;
	curr = l1.head;
	p1 = curr->next;
	p2 = ptr;
	while(curr)
	{
		curr->next = p2;
		p2 = p2->next;
		if(!p2)
			break;
		curr = curr->next;
		curr->next = p1;
		p1 = p1->next;
		curr = curr->next;
	}
	l1.display(l1.head);
}
