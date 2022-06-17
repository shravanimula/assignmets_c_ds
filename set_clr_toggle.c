#include<stdio.h>

#define SET_BIT(x,p) (x|(0x1<<p))
#define CLEAR_BIT(x,p) (x&(~(0x1<<p)))
#define TO_TOGGLE(x,p) (x^(0x1<<p))
 

int main()
{
	int x,p;
	printf("enter number: and position: \n");
	scanf("%d%d",&x,&p);

	printf("set:%d\n",SET_BIT(x,p));
	printf("clear:%d\n",CLEAR_BIT(x,p));
	printf("toggle:%d\n",TO_TOGGLE(x,p));
	return 0;
}