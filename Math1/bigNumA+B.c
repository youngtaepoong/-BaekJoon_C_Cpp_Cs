#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[10002] = {0, }, b[10002] = {0, }, result[10003] = {0, }, temp;
	int i, len, carry = 0, sum;
	scanf("%s %s", a, b);
	
	len = ( strlen(a) > strlen(b) ) ? strlen(a) : strlen(b);
	
	for (i = len - 1; i >= 0; i--)
	{
		sum = (a[i] - '0') + (b[i] - '0') + carry;
		carry = sum / 10;
		sum = sum % 10;
		result[i+1] = sum + '0';
	}
	result[0] = carry + '0';
	for (i = 0; result[i] == '0'; i++);



	printf("%s\n", result+i);
}
