#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "oven_utils.h"
void oven_receive_double_array1d(char var_name[], double *array);
int main(void)
{
    int i;
    double a[2250];
    oven_receive_double_array1d("a", a);
    printf("a\n");
    for(i = 0; i < 20; i++)
    {
        printf("@oven|>a:(%i,%lf)\n",i, a[i]);
    }
    return 0;
}