#include <stdio.h>
#include <stdlib.h>

void insertSort(int x[],int a)//a是数组对应的大小
{
	int i=0,j=0;
       	for(i=1;i<a;i++)
       	{
	       	int temp=x[i];
	       	for(j=i;j>0&&x[j-1]>temp;--j)
		       	x[j]=x[j-1];
	       	x[j]=temp;
       	}
}//实现简单插入排序，假设第一个元素是已经排好的序列，用后一元素从后往前扫描比较
//时间复杂度从o（n）到o(n^2)，依赖于数字序列

int main()
{
	int num=0,i=0;
	int number[10]={0};
	num=sizeof(number)/sizeof(int);
	printf("please enter 10 numbers:\n");
	for(i=0;i<num;i++)
		scanf("%d",&number[i]);
	insertSort(number,num);
	printf("the array sorted:\n");
	for(i=0;i<num;i++)
        	printf("%d  ",number[i]);
	i=getchar();
	return 0;
}//主程序
