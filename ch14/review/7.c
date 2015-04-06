
#include<stdio.h>
#include"starfolk.h"

void main(void)
{
  struct bem *pb;
  struct bem deb = {
        6,
        {"Berbnazel", "Gwolkapwolk"},
        "Arcturan"
  };
  pb = &deb;
  printf("%s %s is a %d-limbed %s\n", pb->title.first, pb->title.last, pb->limbs, pb->type );
}
