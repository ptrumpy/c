#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{    
    float x;
    do
    {
        x = get_float("Enter the amount of change you need to make=:");
    }
    while (x <= 0);
    int y = trunc(x);
    printf("%.2f\n",x - y);
}//end
