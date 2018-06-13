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
node* merged(node *s, node *n)
{
	node *temp, *ptr1 = s, *ptr2 = n, *hd;
	if(ptr1->info > ptr2->info)
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
		if(ptr1->info > ptr2->info)
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
node* msd(node *head)
{
	if(!head || !head->next)
		return head;
	node *mid = middle(head);
	node *midnxt = mid->next;
	mid->next = NULL;
	return merged(msd(head),msd(midnxt));
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
	ll l1, l2;
	int count = 0, s;
	node *p1, *p2;
	cout<<"\nEnter 1st linked list ";
	l1.input();
	cout<<"\nEnter 2nd linked list ";
	l2.input();
	l1.display(l1.head);
	l2.display(l2.head);
	cout<<"\nEnter the number ";
	cin>>s;
	l1.head = ms(l1.head);
	l2.head = msd(l2.head);
	p1 = l1.head;
	p2 = l2.head;
	while(p1 && p2)
	{
		if(p1->info + p2->info == s)
		{
			count++;
			p1 = p1->next;
			p2 = p2->next;
		}
		else if(p1->info + p2->info < s)
			p1 = p1->next;
		else
			p2 = p2->next;
	}
	cout<<"\nNumber of pairs is "<<count;
}
