#include <stdlib.h>
#include <stdio.h>

struct par{
	int a;
	int b;
};
int main(){
	
int *vetor;
int j, n, i=0;
int num, p, cont;

int menord=1000;
int dif;

par p1[50];

printf("informe a quantidade de numeros: ");
scanf("%d", &n);

vetor = (int*)malloc(n * sizeof(int));

	printf("Digite os numeros: ");
	while(i <= n-1){
			i++;
			scanf("%d", &vetor[i]);
	}

	for (num=0; num<=n-1; num++){//descobre a menor diferença
		for (i=0; i<=n; i++){
			if(i!=num){
				dif=vetor[i]-vetor[num];
				if(dif<menord && dif>0){
					menord=dif;
				}
			}
		}
	}
	
	for (num=0; num<=n-1; num++){//seleciona os pares com menor diferença
		for (i=0; i<=n; i++){
			if(i!=num){
				dif=vetor[i]-vetor[num];
				if(dif==menord){
				p1[p].a = vetor[i];
				p1[p].b = vetor[num];
				p++;
				cont++;	
				}
			}
		}
	}
	
	for (num=0; num<cont; num++){
		printf("%d, %d\n", &p1[p].a, &p1[p].b);
	}

}
