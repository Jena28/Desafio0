#include <stdlib.h>
#include <stdio.h>
int main(){
	
int *vetor;
int n, j=0, i, a, m;
	
printf("informe a quantidade de numeros: ");
scanf("%d", &n);
vetor = (int*)malloc(n * sizeof(int));

printf("Digite os numeros: ");
	while(i <= n){
			i++;
			scanf("%d", &vetor[i]);
	}
	
	a=n;
	m=n-a;
	
for (i=0; i<=n; i++){
	for(j=0; j<=a; j++){
		printf("[%d]\n", &vetor[i]);
		a--;
	}	
	
}
}
