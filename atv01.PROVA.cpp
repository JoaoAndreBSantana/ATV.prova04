/*Você foi contratado para desenvolver uma função que analisa um conjunto de dados representado por um array de números inteiros.
 Sua tarefa é implementar uma função em C que receba um array de números inteiros 
 e o tamanho desse array, e retorne a soma dos elementos do array.
Em seguida, escreva um programa que leia um número n indicando o tamanho do array,
leia n números inteiros do usuário,e utilize a função para calcular e imprimir a soma dos números.*/
#include <stdio.h>

 int soma_array(int array[], int tamanho){
	
	int S=0; 
	
	for(int i=0;i<tamanho;i++)
	S += array[i];
	return S;
//	printf("%d",S);
}
int main(){
	int tamanho;
	
	printf("insira o tamanho do array:\n");
	scanf("%d",&tamanho);
	
	int array[tamanho]; 
	
	printf("insira os numeros do array agora:\n");
	for(int i=0;i<tamanho;i++){
		scanf("%d",&array[i]);
	}

	int resultado_s =soma_array(array,tamanho);
	
	printf("o resultado e:%d\n", resultado_s);


	return 0;
}
