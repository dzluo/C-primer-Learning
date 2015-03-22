
#include<stdio.h>
static int mode;
static float distance;
static float fuel;

void set_mode(int inmode)
{
  extern int mode;
  if(inmode >1 )
    {
    mode = 1;
    puts("Invalid mode specified. Mode 1(US) used.");
    }
  else
    mode = inmode;
}

void get_info()
{
  extern int mode;
  extern float instance;
  extern float fuel;
  if(mode == 0)
  {
    printf("Enter distance traveled in kilometers: ");
    scanf("%f", &distance);
    printf("Enter fuel consumed in liters: ");
    scanf("%f", &fuel);
  }
  else
  {
    printf("Enter distance traveled in miles: ");
    scanf("%f", &distance);
    printf("Enter fuel consumed in gallons: ");
    scanf("%f", &fuel);
  }
}


void show_info(void)
{
  float avarcon;
  if(mode == 0)
    {
    avarcon = fuel / distance * 100;
    printf("Fuel consumpation is %.2f liters per 100km.\n", avarcon);
    }
  else
    {
    avarcon = distance / fuel;
    printf("Fuel consumpation is %.1f miles per gallon.\n", avarcon);
    }
}
