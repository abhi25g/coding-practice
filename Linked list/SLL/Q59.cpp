#include<iostream>
#include<llarb.h>
using namespace std;
int main()
{
	ll l1, l2;
	node *m, *max, *curr;
	cout<<"\nEnter the list ";
	l1.input();
	display(l1.head);
	m = l1.head;
	l1.head = reverse(l1.head);
	display(l1.head);
	max =  l1.head;
	curr = l1.head->next;
	l1.head->arb = NULL;
	while(curr)
	{
		curr->arb = max;
		if(curr->info > max->info)
			max = curr;
		curr = curr->next;
	}
	l1.head = reverse(l1.head);
	display(l1.head);
	displayarb(l1.head);
}
