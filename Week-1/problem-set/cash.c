// Problem cash.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    const int PENNY = 1;

    int amount, coin;

    printf("Change owed: ");
    scanf("%d", &amount);

    while (true)
    {
        if (amount > QUARTER)
        {
            amount -= QUARTER;
        }
        else if (amount > DIME)
        {
            amount -= DIME;
        }
        else if (amount > NICKEL)
        {
            amount -= NICKEL;
        }
        else if (amount > PENNY)
        {
            amount -= PENNY;
            if (amount == 0)
            {
                break;
            }
        }
        coin += 1;
    }

    printf("Total coins: %d", coin);

    return 0;
}