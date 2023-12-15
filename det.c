	#include <stdio.h>
	int main(){
		int i,x,j,p=0, p1=4, detsum=0,detsub=0,det=0;
		printf("Sua matriz é de tamanho 2 ou 3?\n");
		scanf("%d",&x);
		int vet[5][5];
		printf("Entre com os elementos da matriz\n");
		for(i=0;i<x;i++){
			for(j=0;j<x;j++){
			scanf("%d", &vet[i][j]);
		};
		};
	for(i=0;i<x;i++){
	    printf("|");
	    for(j=0;j<x;j++){
	        printf("%d ", vet[i][j]);
	    }
	     printf("|");
	    printf("\n");
	}

		if(x==2){
			det=(vet[0][0]*vet[1][1])-(vet[0][1]*vet[1][0]);
			printf("O determinante da sua matriz é: %d\n",det );
		};
	
		if(x==3){
			for(i=0;i<x;i++){
				for(j=0;j<x-1;j++){
					vet[i][j+3]=vet[i][j];

				};
			};
			
				for(j=0;j<x;j++){
					detsum=detsum+(vet[0][p] * vet[1][p+1] * vet[2][p+2]);
					p=p+1;

				};
				printf("%d\n", detsum );

				for(j=0;j<x;j++){
					detsub=detsub+(vet[0][p1] * vet[1][p1-1] * vet[2][p1-2]);
					p1=p1-1;

				};
					printf("%d\n", detsub );
				det=detsum-detsub;
				printf("Determinante é igual: %d\n\n", det );

		};

	printf("Matriz aumentada:\n");
		for(i=0;i<x;i++){
	    printf("|");
	    for(j=0;j<5;j++){
	        printf("%d ", vet[i][j]);
	    }
	     printf("|");
	    printf("\n");
	}; 
	};