#include <stdio.h>
int main(){
	int nombres[] = {4, 76, 43, 75, 23, 12, 108, 432, 223, 45, 34};
	int size = sizeof nombres / sizeof nombres[0]; //nombre de cases dans le tableau
	
	//recherche du min et du max au sein d'un tableau
	int max, min = nombres[0];
	for(int i = 1; i<size; i++){
		if(nombres[i] > max){
			max  = nombres[i];
		}
		if(nombres[i] < min){
			min = nombres[i];
		}
	}
	printf("le nombre maximal dans le tableau est: %d \nEt le nombre minimal est: %d \n", max, min);
	
	//recherche des paires et impaires
	int paires[size];
	int impaires[size];
	int j=0, z = 0;
	for(int i = 0; i < size; i++){
		if(nombres[i]%2==0){
			paires[j] = nombres[i];
			j++;
		}else{
			impaires[z] = nombres[i];
			z++;
		}
	}
	printf("Tableau des paires : \n");
	for(int i = 0; i < j; i++){
		printf("%d\n", paires[i]);
	}
	printf("\nTableau des impaires : \n");
	for(int i = 0; i < z; i++){
		printf("%d\n", impaires[i]);
	}
	//tri croissant
	printf("\n---------------------------------\n");
	int var;
	for(int i = 0; i < size; i++){
		var = nombres[i];
		j = i;
		while(j >= 2 && nombres[j-1] > var){
			nombres[j] = nombres[j-1];
			j -= 1;
		}
		nombres[j] = var;
	}
	for(int i = 0; i < size; i++){
		printf("%d\n", nombres[i]);
	}
	
	//tri décroissant
	printf("\n---------------------------------\n");
	for(int i = 0; i < size; i++){
		var = nombres[i];
		j = i;
		while(j >= 1 && nombres[j-1] < var){
			nombres[j] = nombres[j-1];
			j -= 1;
		}
		nombres[j] = var;
	}
	for(int i = 0; i < size; i++){
		printf("%d\n", nombres[i]);
	} 
}

