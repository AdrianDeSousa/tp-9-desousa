#include <stdio.h>

int main() {
	int vectorA[5], i, vectorB[5];
	for(i=0;i<5;i++){
		printf("Ingrese el valor %d del vector: ", i+1);
		scanf("%d", &vectorA[i]);
	}
	for(i=0;i<5;i++){
		if(i!=4){
			vectorB[i+1]=vectorA[i];
		}
		else{
			if(i==4){
				vectorB[0]=vectorA[i];
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d \t", vectorB[i]);
	}
	return 0;
}

