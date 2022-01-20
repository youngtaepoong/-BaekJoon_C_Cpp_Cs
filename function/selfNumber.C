#include <stdio.h>
// https://codingdojang.com/scode/365

int selfNot(int n)  //셀프넘버가 아닌 수를 구하는 함수
{ 
	int sum = n; 
	while(n>0) 
	{ 
		sum += n%10; 
		n/=10; 
	} 
	return sum; 
}

int main() {
	
    int selfCnt[10001], check;

    for(int i = 1; i < 10001; i++)
    {
        check = selfNot(i);
        if (check < 10001) 
            selfCnt[check] = 1; // Fasle
        if (selfCnt[i] != 1) 
            printf("%d\n", i); 
    }

	return 0;
}