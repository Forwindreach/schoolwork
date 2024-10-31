#include<stdio.h>
int main()
{
	int m = 0,n = 0;
	int i;
	printf("请输入两个整数来计算最小公倍数");
	scanf("%d %d",&m,&n);
	for(i = 1;i<=m*n;i++){
		if((i%m==0)&&(i%n==0)){
		printf("%d",i);
		break;
		}
	}
	 	
	return 0;
}
