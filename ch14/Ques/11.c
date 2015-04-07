
#include<stdio.h>
#include<math.h>


void transfer(float *source, float *target, int num, double (*fun)(double));

int main(void)
{
  // 3 arguments for function transfer
  float source[] = {1, 2, 3, 4};
  int num = sizeof(source) / sizeof(float);
  float target[num];

  transfer(source, target, num, cos);
  return 0;
}

void transfer(float *source, float *target, int num, double (*fun)(double)){
  int i;
  for(i = 0; i < num; i++)
    target[i] = fun(source[i]);
  for(i = 0; i < num; i++)
    printf("%.2f : %.2f\n", source[i], target[i]);   
}


