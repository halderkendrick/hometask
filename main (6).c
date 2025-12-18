#include <stdio.h>

int main()
{
	int energy;
	float fee;
	printf("Enter Energy: ");
	scanf("%d", &energy);
	if(energy <= 100) {
	    fee = 1.2 * energy;
		printf("Fee: %f units.", fee);
	}
	else if(energy <= 300) {
	    fee = (1.2 * 100) + 1.5 * (energy - 100); 
		printf("Fee: %f units", fee);
	}
	else if(energy > 300) {
	    fee = (1.2 * 100) + (1.5 * 200) + 1.8 * (energy -300);
		printf("Fee: %f units", fee);
	}
	return 0;
}