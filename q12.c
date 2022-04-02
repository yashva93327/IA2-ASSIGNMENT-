#include<stdio.h>
int input(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n){
  int value=0;
  for(int i=0;i<=n/2;i++){
    if(n%i==0)
      value=value+1;
    else
      value=value;
  }
  return value;
}
void output(composite){
  if(composite>1)
  printf(" %d is composite\n",composite);
  else
  printf(" %d is not composite\n",composite);  
}
int main(){
 int n=input();
 int p=is_composite(n);
  output(p);
  return 0;
}