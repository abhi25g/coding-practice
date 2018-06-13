#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *ptr, *curr, *prev;
	int x;
	l1.att(5);
	l1.ath(13);
	l1.att(6);
	l1.att(7);
	l1.att(8);
	l1.ath(13);
	l1.att(9);
	l1.ath(10);
	l1.ath(11);
	l1.ath(12);
	l1.ath(13);
	l1.ath(14);
	l1.ath(13);
	l1.display(l1.head);
	cout<<"\nEnter x ";
	cin>>x;
	ptr = l1.tail;
	curr = l1.head;
	prev = NULL;
	while(curr != ptr)
	{
		if(curr->info == x)
		{
			l1.tail->next = curr;
			if(!prev)
				l1.head = l1.head->next;
			else
				prev->next = curr->next;
			curr = curr->next;
			l1.tail = l1.tail->next;
			l1.tail->next = NULL;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
	l1.display(l1.head);
}
