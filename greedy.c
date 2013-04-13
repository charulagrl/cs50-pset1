/*************************************************************
 * pset1
 * greedy.c
 *
 * Computer Science 50
 * Charul
 *
 * counting the change
 *************************************************************/
 

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float cash;
    int n;                  // store cash value 
    int counter;


    while (true) 
    {
        // take input the amount of cash owned
        printf("O hai! How much change is owed?\n");
        cash = GetFloat();
            
        if (cash > 0) 
        {
            break;
        }
        
    }
    
    // convert decimal to int
    n = cash * 100;
   
    // count the number of coins
    counter = 0;
    
    // no of 25 cents coin
    while ( n >= 25 ) 
    {
           counter += 1;
           n = n - 25;
    }

    // no of 10 cents coin
    while ( n >= 10 ) 
    {
           n = n - 10;
           counter += 1;
    }
   
    // no of 5 cents coin
    while ( n >= 5 ) 
    {
           n = n - 5;
           counter += 1;
    }

    printf("%d\n", counter + n);

    return 0;
}

