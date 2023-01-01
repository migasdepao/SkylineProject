#include <stdio.h>
#include <stdlib.h>


main(){
	
	int n_predios=0;
	int i=0;
	int colunas=0;
	do{
	
	printf("Enter the number of buildings: ");
	scanf("%d", &n_predios);
	} while(1 > n_predios || n_predios>5000);
	int predios[n_predios][3];
	int vetor_output[(n_predios*4)-1];
	printf("Enter the buildings: ");
		for(i=0; i<n_predios; i++){					//ciclo para a introdução dos predios
			for(colunas=0; colunas<3; colunas++){
				scanf("%d", &predios[i][colunas]);
		}
	}
	int xmaximo=0;
	for(i=0; i<n_predios; i++){     //ciclo que percorre os x2 para achar o x máximo
		if(predios[i][2]>xmaximo){
			xmaximo=predios[i][2];
		}
	}
	
	int a=(xmaximo + 1);
	int altura[a];  //declaração do vetor com o x máximo + 1 porque começa no altura[0]
	
	for(i=0; i<a; i++){
		altura[i]=0;
	}
	int l=0;
	int r=0;
		for(i=0; i<n_predios; i++){     //ciclo para colocar as altura no respetivo vetor
			l=predios[i][0];
			r=predios[i][2];
			for(a=0 ; l<r; l++){
				if(predios[i][1]>altura[l]){
					altura[l]=predios[i][1];
				}
			}
		}
		

	int alt=0;
	
	for(i=0; i<=xmaximo; i++){   //ciclo que percorre o vetor altura e caso haja mudança de altura dá printf do "x" e do "y" onde esta occoreu
		if(altura[i]!=alt){
			alt=altura[i];
			printf("%d %d ", i, altura[i]);
		}
		
	}
		
}
