#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100 // 스택 요소 저장을 위한 배열의 크기
typedef int Element;

Element data[MAX_STACK_SIZE];
int top;

// 오류 상황 처리를 위한 함수. 메시지 출력 후 프로그램 종료.
void error(char str[])
{
	printf("%s\n", str);
    exit(1);
}

// 스택의 주요 연산: 공통
void init_stack() {top = -1;} // 스택 초기화
int is_empty() { return top == -1; } // 스택이 비어있으면 TRUE를 아니면 FALSE를 반환한다.
int is_full() { return top == MAX_STACK_SIZE - 1;} // 스택이 가득 차 있으면 TRUE를 아니면 FALSE을 반환한다.
int size() { return top + 1;} // 스택 내의 모든 요소들의 개수를 반환한다.

void push (Element e) // 포화상태가 아니면 항목을 삽임함, 매개변수는 Element, 주어진 요소 X를 스택의 맨 위에 추가한다.
{
    if( is_full() )
        error ("스택 포화 에러");
    data[++top] = e;
}

Element pop () // 스택 맨 위에 있는 요소를 삭제하고 반환한다., 반환형은 Element
{
    if( is_empty() )
        error("스택 공백 에러");
    return data[top--];
}

Element peek () // 스택 맨 위에 있는 요소를 삭제하지 않고 반환한다. top이 감소하지 않음.
{
    if( is_empty())
        error ("스택 공백 에러");
    return data[top];
}

int precedence( char op )
{
	 switch (op) {
	 	case '(' : case ')': return 0;
	 	case '+' : case '-': return 1;
	 	case '*' : case '/': return 2;
	 }
	 return -1;
}

void infix_to_postfix(char expr[])
{
	int i = 0;
	char c, op;
	
	init_stack();
	while ( expr[i] != '\0')
	{
		c = expr[i++];
		if ((c >= '0' && c <= '9')){
			printf("%c ", c);
		}
		else if( c == '(')
			push( c );
		else if( c == ')')
			while (is_empty( ) == 0){
				op = pop();
				if (op == '(') break;
				else printf( "%c ", op);
			}
		else if( c == '+' || c == '-' || c == '*' || c == '/'){
			while ( is_empty() == 0) {
				op == peek();
				if  (precedence(c) <= precedence(op)) {
					printf( "%c ", op);
					pop();
				}
				else break;
			}
			push(c);
		}
	}
	while (is_empty() == 0)
		printf( "%c ", pop());
	printf("\n");
}

void main()
{
	char expr[2][80] = { "8 / 2 - 3 + (3 * 2)", "1 / 2 * 4 * (1 / 4)"};
	
	printf("중위수식: %s ==> 후위수식:", expr[0]);
	infix_to_postfix(expr[0]);
	printf("중위수식: %s ==> 후위수식:", expr[1]);
	infix_to_postfix(expr[1]);
}
