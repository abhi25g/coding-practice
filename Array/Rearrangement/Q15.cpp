//Arrange given numbers to form the biggest number
#include <iostream>
#include<string.h>
using namespace std;
int comp(string x, string y)
{
	return x.append(y).compare(y.append(x))>0?1:0;
}
int main()
{
    int size,i,j;
    string *arr,temp;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new string[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
    	cin>>arr[i];
    for(i=0;i<size;i++)
    {
    	for(j=0;j<size-i-1;j++)
    	{
    		if(!comp(arr[j],arr[j+1]))
    		{
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
    for(i=0;i<size;i++)
        cout<<arr[i];
}
