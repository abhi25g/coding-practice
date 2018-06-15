#include<iostream>
#include<llarb.h>
node* middle(node *head)
{
	node *mid=head,*ptr=head;

	if(!ptr->arb->arb)
		return mid;
	while(ptr&&ptr->arb)
	{
		mid=mid->arb;
		ptr=ptr->arb->arb;
	}
	return mid;
}
node* merge(node *ptr1,node*ptr2)
{
	node *ptr,*temp;
	if(ptr1->info<ptr2->info)
	{
		temp=ptr=ptr1;
		ptr1=ptr1->arb;
	}
	else
	{
		temp=ptr=ptr2;
		ptr2=ptr2->arb;
	}
	while(ptr1&&ptr2)
	{
		if(ptr1->info<ptr2->info)
		{
			ptr->arb=ptr1;
			ptr1=ptr1->arb;
		}
		else
		{
			ptr->arb=ptr2;
			ptr2=ptr2->arb;
		}
		ptr=ptr->arb;
	}
	if(ptr1)
	{
		ptr->arb=ptr1;
	}
	if(ptr2)
	{
		ptr->arb=ptr2;
	}
	return temp;
}
node* ms(node*ptr1)
{
	if(!ptr1||!ptr1->arb)
	{
		return ptr1;
	}
	node *mid=middle(ptr1);
	node *midnxt=mid->arb;
	mid->arb=0;
	return(merge(ms(ptr1),ms(midnxt)));
}
int main()
{
	ll l1;
	node *hd;
	l1.att(10);
	l1.att(11);
	l1.att(12);
	l1.att(13);
	l1.att(14);
	l1.att(5);
	l1.att(6);
	l1.att(7);
	l1.att(8);
	l1.att(9);
	hd=ms(l1.head);
	display(l1.head);
	cout<<"\nThe sorted list is ";
	displayarb(hd);
}
