#include <stdio.h>
#include <string.h>

int main() {
	
    char input[16];
    int result = 0;
    scanf("%s", input);

    int size = strlen(input);

    for (int i = 0; i < size; i++)
    {
        if (input[i] >= 'A' && input[i] <= 'C')
            result += 3;
        else if (input[i] >= 'D' && input[i] <= 'F')
            result += 4;
        else if (input[i] >= 'G' && input[i] <= 'I')
            result += 5;
        else if (input[i] >= 'J' && input[i] <= 'L')
            result += 6;
        else if (input[i] >= 'M' && input[i] <= 'O')
            result += 7;
        else if (input[i] >= 'P' && input[i] <= 'S')
            result += 8;
        else if (input[i] >= 'T' && input[i] <= 'V')
            result += 9;
        else if (input[i] >= 'W' && input[i] <= 'Z')
            result += 10;
        else
            result += 11;
    }

    printf("%d", result);

	return 0;
}