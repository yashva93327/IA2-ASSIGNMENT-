#include<stdio.h>
void input(float *base,float *height){
  printf("enter the base and height of the triangle\n");
  scanf("%f%f",base,height);  
}
void find_area(float base,float height,float *area){
  *area=base*height/2.0;
}
void output(float area){
  printf("the area of triangle is %f",area);
}
int main(){
  float n1,n2,n3;
  input(&n1,&n2);
  find_area(n1,n2,&n3);
  output(n3);
  return 0;
}