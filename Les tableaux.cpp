#include <stdio.h>
int main(){
	int nombres[] = {4, 76, 43, 76, 23, 12, 108, 432, 223, 45, 34};
	int size = sizeof nombres / sizeof nombres[0]; //nombre de cases dans le tableau
	
	//tri par selection :
	//ordre croissant
	int min, indice;
	
	for(int i = 0; i < size - 1; i++){
		min = nombres[i];
		for(int j= i + 1; j < size; j++){
			if(min > nombres[j]){
				min  = nombres[j];
				indice = j;
			}
		}
		if(min != nombres[i]){
			nombres[indice] = nombres[i];
			nombres[i] = min;
			
		}
	}
	for(int i = 0; i < size; i++){
		printf("%d\n", nombres[i]);
	}
	
	printf("\n---------------------------------------------------------------\n");
	//tri decroissant :
	for(int i = 0; i <size-1; i++){
		min = nombres[i];
		for(int j = i+1; j < size; j++){
			if(min < nombres[j]){
				min = nombres[j];
				indice = j;
			}
		}
		if(min!=nombres[i]){
			nombres[indice] = nombres[i];
			nombres[i] = min;
		}
	}
	for(int i = 0; i < size; i++){
		printf("%d\n", nombres[i]);
	}
	
	//tri par insertion
	//tri croissant
	printf("\n---------------------------------\n");
	int var, j;
	for(int i = 0; i < size; i++){
		var = nombres[i];
		j = i;
		while(j > 0 && nombres[j-1] > var){
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
	
	//tri de bulles:
	int min;
	bool nu;
	do{
		nu=false;
		for(int i = 0; i < size-1; i++){
			if(nombres[i] > nombres[i+1]){
				nu = true;
				min = nombres[i];
				nombres[i] = nombres[i+1];
				nombres[i+1] = min;
			}
		}
	}while(nu);
	for(int i = 0; i < size; i++){
		printf("%d\n", nombres[i]);
	}
}

