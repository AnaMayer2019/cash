#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float y = -1;
    while (y < 0)
       y = get_float("Change owned: ");
    int x = round(y*100);
    int z = 0;
    while (x > 0)
    {
        if (x >= 25)
           x -= 25;
        else if (x >= 10)
           x -= 10;
        else if (x >= 5)
        x -= 5;
        else
        x -= 1;
        z++;    
    }
    printf("%i\n", z);
}
