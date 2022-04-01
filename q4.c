#include<stdio.h>
int input()
{
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  return a,b,c;
}
int calc(int m,int n,int o)
{
  int large;
  if(m>n)
  {
    if(m>o)
    large=m;
    else
    large=0;
}
else
{
  if(n>o)
  large=n;
  else
  large=o;
}
return large;
}
int output(int p)
{
  printf("largest number is %d\n",p);
}
int main()
{
  
  int p,q,r,s;
  p=input();
  q=input();
  r=input();
  s=calc(p,q,r);
  output(s);
  return 0;

}