#include <stdio.h>

int main() {
	int n, same, fir, sec, sum, cnt = 0;
	scanf("%d", &n);
	same = n;
	
	while(1)
	{
		fir =  n/10;
		sec =  n%10;
		
		n = sec * 10 + (fir+sec)%10;
		
		cnt += 1;
		
		if (n == same)
			break;
	}
	
	printf("%d", cnt);
	return 0;
}