#include <stdio.h>

int main()
{
	int num;
	printf("Enter Your Marks: ");
	scanf("%d", &num);
	if(num >= 90 && num <= 100) {
		printf("Your Grade is A");
	}
	else if(num >= 86 && num <= 89) {
		printf("Your Grade is A-");
	}
	else if(num >= 82 && num <= 85) {
		printf("Your Grade is B+");
	}
	else if(num >= 78 && num <= 81) {
		printf("Your Grade is B");
	}
	else if(num >= 74 && num <= 77) {
		printf("Your Grade is B-");
	}
	else if(num >= 70 && num <= 73) {
		printf("Your Grade is C+");
	}
	else if(num >= 66 && num <= 69) {
		printf("Your Grade is C");
	}
	else if(num >= 62 && num <= 65) {
		printf("Your Grade is C-");
	}
	else if(num >= 58 && num <= 61) {
		printf("Your Grade is D+");
	}
	else if(num >= 55 && num <= 57) {
		printf("Your Grade is D");
	}
	else {
		printf("Your Grade is F");
	}
	return 0;
}