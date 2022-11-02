#include <stdio.h>
#include <stdlib.h>
#include <time.h>// чтобы использовать функцию time()
#include "lib.h"

int main(int argc, char *argv[])
{
    //Змінна t - для функції lab06 і для запису аргументів через командний рядок
    //Змінна x та y - діапазон у якому потрібно шукати прості чила у функції lab05
    long int t = 5000;
    int x,y;
    char *c;
     
    //Примушує функцію rand() завжди генерувати рандомне число  
    srand((unsigned int)time(NULL));
    x = rand() % 100; 
    y = rand() % (x-1);    
    lab05(x, y);   
    
    //Перевірка чи вводили ми якісь аргументи в командному рядку
    if(argc > 1)
    {
      t = strtol(argv[1], &c, 10);
      if(t > 1000 && t < 9999)
      {
        lab06(t);
      }

    }else
      {      
        lab06(t);      
      }
    
    return 0;
}
