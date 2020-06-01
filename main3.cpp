#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Arbol genealogico\n");
	printf("Elige una opcion\n");
	printf("1. Padres\n");
	printf("2. Abuelos\n");
	printf("3. Tios\n");
	printf("4. Primos\n");
	printf("5. Bisabuelos\n");
	printf("6. Hermanos\n");
	printf("7. Sobrinos\n");
	printf("8. Salir\n");
	
	int op;
	scanf("%d",&op);
	switch (op)
	
	{
	case 1:
		printf("\nMis padres son Isaac y Mirna\n");
		break;
	
	case 2:
		printf("\nMis abuelos son Timoteo y Celia por parte paterna y Cosme y Elvia por parte materna\n");
		break;
		
	case 3:
		printf("\nMis tios son Oldair, Balidno y Mireya\n");
		break;
		
	case 4:
		printf("\nFernando y Lilian\n");
		break;
		
	case 5:
		printf("\nMis Bisabuelos son Josefino y Enrique \n");
		break;
		
	case 6:
		printf("\nMi hermano es Isaac\n");
		break;
		
	case 7:
		printf("\nMis sobrinos son Marifer y Max\n");
		break;
		
	case 8:
		printf("\nGood bye\n");
		break;
	}
	return 0;
}
