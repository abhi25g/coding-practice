#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *z, *o, *t, *zl, *ol, *tl, *curr;
	l1.att(1);
	l1.att(1);
	l1.att(2);
	l1.att(0);
	l1.att(1);
	l1.att(0);
	l1.att(2);
	l1.att(1);
	l1.att(0);
	l1.att(1);
	l1.att(2);
	l1.att(1);
	l1.att(0);
	l1.att(2);
	l1.att(1);
	l1.att(0);
	zl = new node(-1);
	ol = new node(-1);
	tl = new node(-1);
	z = zl;
	o = ol;
	t = tl;
	curr = l1.head;
	while(curr)
	{
		if(curr->info == 0)
		{
			z->next = curr;
			z = z->next;
		}
		else if(curr->info == 1)
		{
			o->next = curr;
			o = o->next;
		}
		else if(curr->info == 2)
		{
			t->next = curr;
			t = t->next;
		}
		curr = curr->next;
	}
	z->next = NULL;
	o->next = NULL;
	t->next = NULL;
	z->next = ol->next ? ol->next : tl->next;
	o->next = tl->next;
	tl->next = NULL;
	l1.head = zl->next;
	delete zl;
	delete ol;
	delete tl;
	l1.display(l1.head);
}
