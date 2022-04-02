#include<stdio.h>
int input(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a,int b){
  int gcd=1;
  for(int i=2;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }
return gcd;
  }
void output(int a,int b,int gcd){
  printf("%d is the gcd of %d and %d\n");
}
int main(){
  int a,b,result;
  a=input();
  b=input();
  result=gcd(a,b);
  output(a,b,result);
  return 0;
}
