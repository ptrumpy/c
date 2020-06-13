#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{    
    float x;
    
    while (x <= 0);
    {
        x = get_float("Enter the amount of change you need to make=:");
    }
    
    int y = trunc(x);
    int tot_coins = 0;
    x -= y;
    int x2 = round(x * 100);
    print("%i\n",x2);
    //printf("%.2f\n",x);
//Loop through to get number of quarters    
    do
    {
        x2-= 25;
        tot_coins ++;
    }
    while (x2 >= 25);
printf("Total Coins: %d\n",tot_coins);
printf("X: %i\n", x2);

//Loop through to get number of dimes
    while (x2 >= 10);
    {
        x2-= 10;
        tot_coins ++;
    }
  
printf("Total Coins: %d\n",tot_coins);
printf("X: %i\n", x2);

//Loop through to get number of nickels
    while (x2 >= 5);
    {
        x2-= 5;
        tot_coins ++;
    }
  
printf("Total Coins: %d\n",tot_coins);
printf("X: %i\n", x2);

//Loop through to get number of pennies
    while (x2 >= 1);
    {
        x2-= 1;
        tot_coins ++;
    }
  
printf("Total Coins: %d\n",tot_coins);
printf("X: %i\n", x2);
}//end
