#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int i,j,n; 	
printf("請輸入數字:\n");
scanf("%d",&n);
printf("這個範圍的質數有:\n");



for(i=2;i<=n;i+
{
	for(j=2;j<=i;j++)
	{
		if(i%j==0)
		break;
	}
	if(i==j)
		printf("%d  ",i);
}	


system("pause");
return 0;
}
