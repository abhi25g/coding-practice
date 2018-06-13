#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1, l2;
	int k, i = 1;
	node *curr, *prev;
	l1.att(5);
	l1.att(6);
	l1.att(7);
	l1.att(8);
	l1.att(9);
	l1.ath(10);
	l1.ath(11);
	l1.ath(12);
	l1.ath(13);
	l1.ath(14);
	l1.display(l1.head);
	cout<<"\nEnter k ";
	cin>>k;
	curr = l1.head;
	prev = NULL;
	while(curr)
	{
		i++;
		prev = curr;
		curr = curr->next;
		if(i%k == 0)
		{
			prev->next = curr->next;
			delete curr;
			curr = prev->next;
			i++;
			if(!curr)
				l1.tail = prev;
		}
	}
	l1.display(l1.head);
}
