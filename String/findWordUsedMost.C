#include <stdio.h>
#include <string.h>


int main() {
	

    char input[1000001], ans; // 뒤에 널문자를 붙여 저장해  최소한 문자열의 길이보다 1 큰 배열이 필요
    int alpha[26] = {0, };
    int i, size, con, max = 0;
    scanf("%s", input);
    
    size = strlen(input);
    
	for (i = 0; i < size; i++)
	{
		con = (int)input[i];
        if ( con > 64 && con < 91)
            alpha[con - 65] += 1;
        else if ( con > 96 && con < 123)
            alpha[con - 97] += 1;
	}
	
	for (i = 0; i < 26; i++)
	{
		if(alpha[i] == max){
            ans = '?';
        }
        else if(alpha[i]>max){
            max = alpha[i];
            ans = 'A'+i;
        }
	}

	printf("%c", ans);
	return 0;
}