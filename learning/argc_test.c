
#include<stdio.h>

int main(int argc, char *argv[])
{
  int loop;

  if(argc>0)
    printf("My program name is %s.\n",argv[0]);
  
  if(argc>1)
   {
    for(loop=1;loop<argc;loop++)
      printf("Parameter #%i is %s.\n",loop,argv[loop]);
   }
} 
