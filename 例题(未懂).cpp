#include<stdio.h>
#include<string.h>
#define M 5   
#define N 20
void sort(char (*p)[N]);
int main()
{
    char a[M][N]={0}; 
    int i;
    printf("please input %d character strings:\n",M);
    for(i=0;i<M;i++)
    {
        scanf("%s",a[i]);//此处不能写成*a++，因为a是一个常量，不是变量，不能移动处理 
    }
    sort(a);
    printf("after sorting,the sequence is :\n");
    for(i=0;i<M;i++)
    {
        printf("%s\n",a[i]);//此处也同上，不能使用*a++，一个道理 
    }
    return 0;
}
void sort(char (*p)[N])
{
    int i,j;
    char temp[N]={0};
    for(i=0;i<M-1;i++)    //选择排序法 
    {
        for(j=i+1;j<M;j++)
        {
            if(strcmp(p[i],p[j])>0)
            { 
                strcpy(temp,p[i]);//因strcpy函数的传参类型限制，此处只能写p[i],不能是p+i
                strcpy(p[i],p[j]);//p[i]的类型是char *，而p+i的类型是char (*p)[N]
                strcpy(p[j],temp);//不管何时，一定一定注意数据类型的匹配 
            }
        }
    }
}
