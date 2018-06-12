#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *prev, *ptr;
	l1.att(5);
	l1.att(5);
	l1.att(7);
	l1.att(8);
	l1.att(9);
	l1.att(9);
	l1.att(9);
	l1.att(12);
	l1.att(14);
	l1.att(14);
	prev = l1.head;
	ptr = prev->next;
	while(ptr)
	{
		if(ptr->info == prev->info)
		{
			prev->next = ptr->next;
			delete ptr;
		}
		else
			prev = prev->next;
		ptr = prev->next;
	}
	if(!prev->next)
		l1.tail = prev;
	l1.display();
}
