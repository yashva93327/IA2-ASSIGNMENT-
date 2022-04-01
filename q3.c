#include<stdio.h>
int input()
{
  int a;
  printf("enter two numbers\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int c)
{
  printf("sum of the two numbers %d and %d id = %d\n",a,b,c);
}
int main()
{
  int n1,n2,n3;
 n1=input();
 n2=input();
 n3=add(n1,n2);
 output(n1,n2,n3);
 return 0;
 
}