#include <stdio.h>

int main(){
	int akzeptieren = 0;
	char userName[15];
	
	 
	printf("Wilkommen zu Br0k's Text Adventure \n\n");
	printf("carakter erstellung: \n");
	
	//Charakter name
	
		// Hier fählt was
		
		int a;
		
		do{
			printf("Geben sie ihren Namen an: ");
			scanf("%s", userName);
			printf("Okay, %s \n", userName);
			printf("Akzeptieren:  NEIN JA\n");
			scanf("%d", &a);

		}while(a <= 1);
		
		printf("Akzeptieren");
		
		
	/*
	 printf("Bitte wählen sie eine Klasse aus: \n");
	 printf("1. Ritter \n");
	 printf("2. Magier \n");
	 printf("3. Assasine");
	 */
	
	 
	
	
	
	
	
	
	
	
	
	return 0;
}
