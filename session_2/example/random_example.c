#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand(time(NULL));

    int min = -100, max = 500;
    int random = min + rand() % (max - min + 1);

    printf("%d\n", random);
}