#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int i,j,n; 	
printf("�п�J�Ʀr:\n");
scanf("%d",&n);
printf("�o�ӽd�򪺽�Ʀ�:\n");



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
