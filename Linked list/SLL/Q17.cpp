#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *prev, *ptr, *temp;
	l1.att(5);
	l1.att(7);
	l1.att(8);
	l1.att(9);
	l1.att(14);
	l1.att(5);	
	l1.att(9);
	l1.att(12);
	l1.att(9);
	l1.att(14);
	l1.display();
	ptr = l1.head;
	while(ptr)
	{
		prev = ptr;
		temp = prev->next;
		while(temp)
		{
			if(temp->info == ptr->info)
			{
				prev->next = temp->next;
				delete temp;
			}
			else
				prev = prev->next;
			temp = prev->next;
		}
		ptr = ptr->next;
		if(!prev->next)
			l1.tail = prev;
	}
	l1.display();
}
