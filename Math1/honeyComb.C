#include <stdio.h>

int main() {
	
    int input, bound = 1, cnt = 0, i = 0;
    scanf("%d", &input);
	
	if(input == 1) cnt = 1;
	else
	{
		while(input > bound)
		{
		bound += (i * 6);
		cnt++;
		i++;
		}
	}
	printf("%d", cnt);
}

/*
 1 7 19 37 61 91
 
  6 12 18 24 30Â÷. 
*/