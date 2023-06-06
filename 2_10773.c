#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stack[1000000];
int s_cnt = 0;

void pop() {
	while (1){
		if (stack[s_cnt] == 0){
			s_cnt--;
			continue;
		}
		else {
			stack[s_cnt] = 0;
			s_cnt--;
			break;
		}
	}
}

void push(int num) {
	stack[s_cnt] += num;
	s_cnt++;
}


int main() {
	int n, num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);

		if (num == 0)
			pop();

		push(num);
	}

	int sum=0;
	for (int i = 0; i < n; i++) {
		sum += stack[i];
	}

	printf("%d", sum);

}