#include<stdio.h>
int input_side(){
  int x;
 printf("Enter sides of triangle:");
   scanf("%d",&x);
   return x;
}
int check_scalene(int a,int  b,int  c){
int l;
if(a==b && b==c)
  l=-1;
else if(a==b || b==c || c==a )
  l=0;
else
   l=1;
 return l;
}
void output(int check_scalene){

  if(check_scalene ==-1){
  printf("the given triangle is equilateral\n");
  }

  else if(check_scalene == 0){
  printf("the given triangle is isosceles\n");
  }
   else{
  printf("the given triangle is scalene\n");
   }  
}
int main(){
  int a,b,c,isscalene,z;
 a=input_side();
 b=input_side();
 c=input_side();
 z=check_scalene(a,b,c);
 output(z);
 return 0;
}
