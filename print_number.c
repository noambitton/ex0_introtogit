#include <stdio.h>
#define SIZE 6

int course_number[SIZE] = {2, 3, 4, 1, 2, 4};
int main() {
	for(int i = 0; i < SIZE; i++) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
