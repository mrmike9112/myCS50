#include <stdio.h>

int main(void)
{
    char block = '#';
    int h;
    int count;
    char next_char;

    for (;;)
    {
        printf("Height: ");
        count = scanf("%i%c", &h, &next_char);

        if (h < 9 && h > 0)
        {
            break;
        }
        else if (count == 2 && next_char == '\n')
        {
            continue;
        }
        else
        {
            while ((next_char = getchar()) != '\n' && next_char != EOF)
                ;
            continue;
        }
    }

    // Rows
    for (int i = 0; i < h; i++)
    {
        // Indexes left side of steps
        for (int j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }
        // Prints steps
        for (int k = 0; k < i + 1; k++)
        {
            printf("%c", block);
        }
        // Space between steps
        printf("  ");
        // Prints steps
        for (int l = 0; l < i + 1; l++)
        {
            printf("%c", block);
        }

        printf("\n");
    }
}
