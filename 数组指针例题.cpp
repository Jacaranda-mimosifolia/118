#include<stdio.h>
int demo[5]={1,2,3,4,5};
int (*p)[5]=&demo;
int main()
{
	for(int i=0;i<5;i++)
	{
		printf("%p\n",demo+i);	
	}
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(*p+i));	
	}
	return 0;
}

p所指的是数组temp的地址，
*p+i 所指的是它在数组中的位置，
*(*p+i) 就表示相应位置上的值了。

temp指的是这个数组的第一个元素的首地址，&temp 指的是这整个数组的首地址。
int (*p)[5] = &temp;*p等于这个数组的第一个元素的首地址。
*（整个数组的首地址）=这个数组的第一个元素的首地址

数组地址和数组第一个元素的地址值是一样的，
但是指针指向这两个地址加一时的操作数不一样。 
指针指向数组地址，一加一的是数组的长度，即数组元素个数*元素类型长度，5 * sizeof(int)=20
指针指向数组第一个元素，一加一的是第一个元素的长度，即sizeof(int)=4

