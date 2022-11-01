#include <stdio.h>
#include <stdlib.h>
#include <time.h>// чтобы использовать функцию time()
#include "lib.h"



int main(int argc, char *argv[])
{
    int x,y;
    char *c;
    long int t = strtol(argv[0], &c, 10);
    
    
    
    srand((unsigned int)time(NULL));
    x = rand() % 100; 
    y = rand() % (x-1);    
    lab05(x, y);   
     
    if(t < 1000 || t > 9999 || argc == 0)
    {
     // lab06(t);
    //}
    //else
    //{
     // t = 5000;
      lab06(t);
      printf("%s", argv[0]);
    }
    
    return 0;
}
