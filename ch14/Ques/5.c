
#include<stdio.h>
#define CSIZE 4

struct name{
  char first_name[10];
  char last_name[10];
};

struct student{
  struct name sname;
  float  grades[3];
  float  avggrade;
};

void main(void)
{
  int i = 0;
  int j;
  float classavg[3];
  struct student stu[CSIZE];
  printf("Please input one student name with the format: first_name last_name:\n");
  while(i < CSIZE && scanf("%s %s", stu[i].sname.first_name, stu[i].sname.last_name) == 2)
  {
    printf("Please input the grades of the stdudent one by one with the format: chinese english math:\n");
    scanf("%f %f %f", &stu[i].grades[0], &stu[i].grades[1], &stu[i].grades[2]);
    if(i == CSIZE - 1)
      break;
    printf("Please input another student name with the format: first_name last_name:\n");
    i++;
  }
  // Calculate the average grades for every student
  for(i = 0; i < CSIZE; i++)
  {
    int j;
    float total = 0;
    for(j = 0; j < 3; j++)
      total += stu[i].grades[j];
    total = total / 3;
    stu[i].avggrade = total;
  } 
  // Display the information of every student
  for(i = 0; i < CSIZE; i++)
  {
    printf("%s %s:\n chinese %.1f; english %.1f; math %.1f; average %.1f\n", stu[i].sname.first_name,
    stu[i].sname.last_name, stu[i].grades[0], stu[i].grades[1], stu[i].grades[2], stu[i].avggrade);
  } 
  for(j = 0; j < 3; j++)
  {
    classavg[j] = 0;
    for(i = 0; i < CSIZE; i++)
      classavg[j] += stu[i].grades[j];
    classavg[j] = classavg[j] / CSIZE;
  }
  printf("The avarage grade of chinese is : %.1f\n", classavg[0]);
  printf("The avarage grade of english is : %.1f\n", classavg[1]);
  printf("The avarage grade of math is : %.1f\n", classavg[2]);

}
  
