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
        scanf("%s",a[i]);//�˴�����д��*a++����Ϊa��һ�����������Ǳ����������ƶ����� 
    }
    sort(a);
    printf("after sorting,the sequence is :\n");
    for(i=0;i<M;i++)
    {
        printf("%s\n",a[i]);//�˴�Ҳͬ�ϣ�����ʹ��*a++��һ������ 
    }
    return 0;
}
void sort(char (*p)[N])
{
    int i,j;
    char temp[N]={0};
    for(i=0;i<M-1;i++)    //ѡ������ 
    {
        for(j=i+1;j<M;j++)
        {
            if(strcmp(p[i],p[j])>0)
            { 
                strcpy(temp,p[i]);//��strcpy�����Ĵ����������ƣ��˴�ֻ��дp[i],������p+i
                strcpy(p[i],p[j]);//p[i]��������char *����p+i��������char (*p)[N]
                strcpy(p[j],temp);//���ܺ�ʱ��һ��һ��ע���������͵�ƥ�� 
            }
        }
    }
}
