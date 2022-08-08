#include<stdio.h>
#include<math.h>

int num()
{
    int num, count, i, prome;

    printf("prime numbers from 1 to 1000 are\n");

    for(num = 1; num <= 1000; num++)
    {
        if(num ==1)
        {
            prinft("number 1 is neither prime nor composite\n");
            continue;
        }
        count = num / 2;
        prime = 1;
        for(i =2; i < = count; i++)
        {

          if(num % i == 0)
          {
             prime = 0;
             break;
          }
        }
        if(prime)
    }

    {
        printf("%d\t", num);
    }
}
