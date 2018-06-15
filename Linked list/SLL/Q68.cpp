#include<iostream>
#include<ll.h>
using namespace std;
node* middle(node* head)
{
	node *mid = head;
	if(!head->next->next)
		return mid;
	while(head->next && head->next->next)
	{
		mid = mid->next;
		head = head->next->next;
	}
	return mid;
}
node* merge(node *s, node *n)
{
	node *temp, *ptr1 = s, *ptr2 = n, *hd;
	if(ptr1->info < ptr2->info)
	{
		temp = ptr1;
		ptr1 = ptr1->next;
	}
	else
	{
		temp = ptr2;
		ptr2 = ptr2->next;
	}
	hd = temp;
	while(ptr1 && ptr2)
	{
		if(ptr1->info < ptr2->info)
		{
			temp->next = ptr1;
			ptr1 = ptr1->next;
		}
		else
		{
			temp->next = ptr2;
			ptr2 = ptr2->next;
		}
		temp = temp->next;
	}
	if(ptr1)
	{
		temp->next = ptr1;
	}
	if(ptr2)
	{
		temp->next = ptr2;
	}
	return hd;
}
node* ms(node *head)
{
	if(!head || !head->next)
		return head;
	node *mid = middle(head);
	node *midnxt = mid->next;
	mid->next = NULL;
	return merge(ms(head),ms(midnxt));
}
int main()
{
	ll l1;
	node *md, *p1, *p2, *curr;
	cout<<"\nEnter the linked list ";
	l1.input();
	display(l1.head);
	l1.head = ms(l1.head);
	display(l1.head);
	md = middle(l1.head);
	curr = l1.head;
	p1 = curr->next;
	p2 = reverse(md->next);
	md->next = NULL;
	while(curr)
	{
		curr->next = p2;
		p2 = p2->next;
		curr = curr->next;
		if(!p1)
		{
			curr->next = NULL;
			break;
		}
		curr->next = p1;
		p1 = p1->next;
		curr = curr->next;
		if(!p2)
			break;
	}
	display(l1.head);
}
