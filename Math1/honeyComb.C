#include <stdio.h>

int main() {
	
    int input, cnt = 1;
    scanf("%d", &input);

    for (int i = 1; i < input; i+=6)
    {
        if (input > i) cnt+=1;  
    }

    printf("%d", cnt);

	return 0;
}

/*
 1 7 19 37 61
 
  6 12 18 24  Â÷. 
%6 
*/