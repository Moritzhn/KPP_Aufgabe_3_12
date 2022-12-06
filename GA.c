#include<stdio.h>

int main() {

	int geld=0;
	printf("Geldeingabe: ");
	scanf("%d", &geld);
	if (geld == 1)
	printf("Hier ist deine Flasche: \n ");
	else
	printf("Bitte nur 1$ einwerfen \n ");
	return 0;
}
