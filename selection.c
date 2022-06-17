#include<stdio.h>
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
void selection(int a[],int size)
{
	int i,j,min,temp;
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[min]>a[j])
			{
				min=j;//small value assigned to min
				temp=a[min];//small value assigned to temp
				a[min]=a[i];//max value assigned to 2nd index
				a[i]=temp;//small value assigned to first index
			}
		}
	}
}
int main()
{
	int array[5]={2,8,4,6,1};
	int n=sizeof(array)/sizeof(array[0]);
	printf("before sorting elements\n");
	display(array,n);
	selection(array,n);
	printf("\nafter sorting elements\n");
	display(array,n);
}
