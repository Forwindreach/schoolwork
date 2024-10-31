#include<stdio.h>      
int main()
{
	int n1 =1 ,n2 = 1,ns;
	int i;//用于遍历 
	int ret; //用于储存 
	printf("你要知道斐波那契数列的哪一项：");
	scanf("%d",&ns);
	for(i=3;i<=ns;i++){
		ret = n1+ n2;
		n1 = n2;
		n2 = ret;
		
	} 
	printf("%d",ret);
	return 0;
	
	
}
