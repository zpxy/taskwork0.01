#include <stdio.h>
#include <stdlib.h>
int a1[100]={0};
int b2[100]={0};
void getnumber(){
     printf("welcome to use this number junge small program\n");
     printf("please enter a 8 number to bulid a number arrays\n");
     int a=0,b=0;
     for(a=0;a<8;a++)
     {
	     scanf("%d",&b);
	     b2[a]=b;
     }
}//获取数组


void merge(int a,int mid,int b)
{
     int i=a,k=a,j=mid+1;
     while(i<=mid&&j<=b){
     	if(a1[i]<b2[j])
	   a1[k++]=b2[i++];
	else
	   a1[k++]=b2[j++];
     }
     while(i<=mid){
        a1[k++]=b2[i++];
     }
     while(j<=b){
        a1[k++]=b2[j++];
     }

    for(int s=0;s<=b;s++)
     {
	b2[s]=a1[s];
	printf("%d ",a1[s]);
     }
     printf("\n");//
}//合并程序

void msort(int a,int b)
{
     if(a<b){
     	int mid=(a+b)/2;
	msort(a,mid);
	msort(mid+1,b);
	merge(a,mid,b);
     }
}//递归然后归并

void main()
{
	int a=0,b=7;
	getnumber();
        int i=0;
	for(i=0;i<=7;i++){
	   printf("%d  ",b2[i]);
	}
	printf("\n");

	msort(0,7);

	for(i=0;i<=7;i++){
	  printf("%d  ",b2[i]);
	}
	printf("\n");
	int ch=getchar();
}
