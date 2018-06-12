#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *prev, *ptr, *curr;
	l1.att(1);
	l1.att(2);
	l1.att(5);
	l1.att(3);
	l1.att(6);
	l1.att(4);	
	l1.att(7);
	l1.display();
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
		l1.display();
	}
}
