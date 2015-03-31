
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  FILE * fp;
  fp = fopen("myfile", "w");
  fprintf(fp, "test");
}
