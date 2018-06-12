#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1, l2;
	node *prev, *ptr;
	l1.att(5);
	l1.att(6);
	l1.att(7);
	l1.att(8);
	l1.att(9);
	l1.ath(10);
	l1.ath(11);
	l1.ath(12);
	l1.ath(13);
	l1.display();
	prev = l1.head;
	ptr = prev->next;
	while(ptr)
	{
		prev->next = ptr->next;
		delete ptr;
		if(!prev->next)
		{
			l1.tail = prev;
			break;
		}
		prev = prev->next;
		ptr = prev->next;
	}
	l1.display();
}
