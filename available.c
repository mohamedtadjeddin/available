#include <stdio.h>

int main()
{
    // The number of Ship Lines the fleet has
    int lines;
    // The number of customers
    int customers;
    scanf("%d", &lines);
    // an Array which we will be using to store the boats in each line
    char ships[lines][100][21];
    // We initialize the array
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            for (int k = 0; k < 21; k++)
            {
                ships[i][j][k] = '\0';
            }
        }
    }
    // An arry of integers to store how many words in each line
    int length[lines];
    // A variable we will be using to count how many boats in each line
    int count;
    // A variable we will be using when we store the name of boats
    int index;
    // A variable we will be using to read the input
    char c;
    c = getc(stdin);
    // Each line, we read the input
    for (int i = 0; i < lines; i++)
    {
        // We initialize our variables
        c = ' ';
        count = 1;
        index = 0;
        // We read the name of boats untill the end of line (\n)
        do
        {
            // Read a character
            c = getc(stdin);
            // If the character is a space, the we have another name comming
            if (c == ' ')
            {
                // We increase the count of words by one
                count++;
                // We initialize the index variable to 0
                index = 0;
            }

            // If the character is not a space
            else
            {
                // If the character is not \n ,then we don't have a new line yet
                if (c != '\n')
                {
                    // We store the charcter in its appropriate place in the array
                    ships[i][count - 1][index] = c;
                    // We increase the index by one(expecting the following char of the name)
                    index++;
                }
            }

        } while (c != '\n');
        // When we are here, it means we reached the end of the line
        // The variable 'count' will contain the number of words in the current line, we store it in the 'length' array
        length[i] = count;
    }
    // The end of the for loop

    // We read the number of customers from the input
    scanf("%d", &customers);
    // We create an array to store the week in which the customer wishes to cruise
    int weeks[customers];
    // We read the week in which the customer wishes to cruise
    for (int i = 0; i < customers; i++)
    {
        scanf("%d", &weeks[i]);
    }
    // The output part

    for (int i = 0; i < customers; i++)
    {
        for (int j = 0; j < lines; j++)
        {
            // We have three cases

            // Case 01: when weeks[i] % length[j] == 0 , we print the last boat in the line(last one of the order of the first week)
            if (weeks[i] % length[j] == 0)
            {
                printf("%s ", ships[j][length[j] - 1]);
            }
            // Case 02: when a line has only a one boat, we just print it
            else if (length[j] == 1)
            {
                printf("%s ", ships[j][0]);
            }
            // Case 03: all the cases except case 01 and case 02
            else
            {
                printf("%s ", ships[j][(weeks[i] % length[j]) - 1]);
            }
        }
        // A new line for another customer
        printf("\n");
    }

    // The end of the output

    return 0;
}