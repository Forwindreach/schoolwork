#include<stdio.h>      
int main()
{
	int n1 =1 ,n2 = 1,ns;
	int i;//���ڱ��� 
	int ret; //���ڴ��� 
	printf("��Ҫ֪��쳲��������е���һ�");
	scanf("%d",&ns);
	for(i=3;i<=ns;i++){
		ret = n1+ n2;
		n1 = n2;
		n2 = ret;
		
	} 
	printf("%d",ret);
	return 0;
	
	
}
