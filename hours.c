#include <stdio.h>

int main()
{
	int hr;
	printf("Enter Hours: ");
	scanf("%d", &hr);
	if(hr <= 1) {
		printf("Free No Fee Needed.");
	}
	else if(hr <= 5) {
		printf("Fee: %d units", (hr - 1) * 20);
	}
	else if(hr > 5) {
		printf("Fee: %d units", (4 * 20) + (hr - 5) * 30);
	}
	return 0;
}