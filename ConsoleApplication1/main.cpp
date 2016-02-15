#include <stdio.h>
#include <stdlib.h>

int main()
{
	int commande = 0;

	printf("== Menu == \n \n");
	printf("1 : Royal Cheese \n");
	printf("2 : Mc Deluxe \n");
	printf("3 : Mc Bacon \n");
	printf("4 Big Mac \n");
	printf("Votre choix ? \n \n");

	scanf("%d", &commande);

	switch (commande)
	{
	case 1:
		printf("Vous avez commande le Royal Cheese \n");
		break;
	case 2:
		printf("VOus avez commande le Mc Deluxe \n");
		break;
	case 3:
		printf("Vous avez comande le mc Bacon \n");
		break;
	case 4:
		printf("Vous avez commande le Big Mac \n");
		break;
	default:
		printf("Votre commande est invalide \n");
		break;
	}

	return 0;

}
