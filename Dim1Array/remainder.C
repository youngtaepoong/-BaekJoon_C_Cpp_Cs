#include <stdio.h>
int main() {
	int num[10], check[42]= {0, }, cnt = 0, tmp;

	for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        tmp = num[i]%42;
        check[tmp] = 1;
	}
    
    for (int i = 0; i < 42; i++)
    {
		if (check[i] == 1)	cnt +=1;
	}

    printf("%d", cnt);
}