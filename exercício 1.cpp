#include <stdlib.h>
#include <stdio.h>

int main(){
int n;
int i=0;
int j=0;
char *ast;

printf("digite um numero inteiro: ");
scanf("%d", &n);
ast = (char*)malloc(n * sizeof(char));

	while(j <= n-1){
		for (i=0; i<=j; i++){
		ast[i] = '*';
		}
		for (i=0; i<=j; i++){
		printf("%c", ast[j]);
		}
		j++;
		printf("\n");
	}	
}
