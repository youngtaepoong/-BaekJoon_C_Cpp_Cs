#include <stdio.h>
#include <string.h>


int main() {
	
    char input[101];
    scanf("%s", input);

    int size = strlen(input);
    int cnt = size;

    for (int i = size; i >= 1; i--)
	{
		     if ( (input[i] == '=') && ( (input[i -1] == 'z') &&  (input[i -2] == 'd') ) )  cnt--;
		
             if ( (input[i] == '=') && ( (input[i -1] == 'c') || (input[i -1] == 's')|| (input[i -1] == 'z') ) )   cnt--;
        else if ( (input[i] == '-') && ( (input[i -1] == 'c') || (input[i -1] == 'd') ) )   cnt--;
        else if ( (input[i] == 'j') && ( (input[i -1] == 'l') || (input[i -1] == 'n') ) )  cnt--;
	}

    printf("%d", cnt);
	return 0;
}