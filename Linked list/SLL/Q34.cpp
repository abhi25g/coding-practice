#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1, l2;
	node *p1, *p2, *temp;
	int i=1;
	l1.att(5);
	l1.att(6);
	l1.att(7);
	l1.att(8);
	l1.display();
	p1 = l1.head;
	p2 = p1->next;
	l2.head = p2;
	temp = p2->next;
	while(temp)
	{
		p1->next = temp;
		temp = temp->next;
		p2->next = temp;
		if(!temp)
			break;
		p1 = p1->next;
		p2 = p2->next;
	}
	p1->next = temp;
	p2->next = temp;
	l1.display();
	l2.display();
}
