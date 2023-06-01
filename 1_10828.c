#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[100000];
int count = 0;

int empty() {
	if (count != 0) {
		printf("0\n");
		return 0;
	}
	else {
		printf("1\n");
	}
}

int top() {
	if (count != 0) {
		printf("%d\n", stack[count - 1]);
	}
	else
		printf("-1\n");
}

void size() {
	printf("%d\n", count);
}

void push(int num) {
	stack[count] = num;
	count++;
}

int pop() {
	if (count != 0) {
		stack[count--];
		printf("%d\n", stack[count]);
	}
	else {
		printf("-1\n");
	}
		
}

int main() {
	int n;
	char str[10];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &str);

		if (strcmp(str, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(str, "pop") == 0) {
			pop();
		}
		else if (strcmp(str, "top") == 0) {
			top();
		}
		else if (strcmp(str, "size") == 0) {
			size();
		}
		else if (strcmp(str, "empty") == 0) {
			empty();
		}
	}

}