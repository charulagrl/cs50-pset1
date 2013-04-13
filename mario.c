/*****************************************************
 * pset1
 * mario.c
 * 
 * Computer Science 50
 * Charul
 * 
 * creates half-pyramid using hashes(#)
 *
 ****************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int width;
    
    while (true) {
        
        // check condition for height
        if (height >= 0 && height < 24) {
             break;
        }
    
        // ask for height
        printf("Height: ");
        height = GetInt();


    }
    
    //store the width
    width = height - 1;

    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < (height + 1); j++) 
        {
            // print the spaces
            if (j < width) 
            {
                printf(" ");
            }
            //print the #
            else { 
                printf("#");       
            }
        }
        width--;
        printf("\n");
    }

    return 0;
}


