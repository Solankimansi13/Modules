//converrt kelometer to meter

#include<stdio.h>
int main()
{
  int m;
  float km;
  
  printf("Enter the kilometers: ");
  scanf("%f", &km);
  
  m = km * 1000;
  printf("%.2f in Kilometers = %d in Meters", km, m);
  return 0;
}