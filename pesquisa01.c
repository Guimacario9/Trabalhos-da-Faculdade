#include <stdio.h>
#include <string.h>
#define N 5

int busca (const char aagulha[4], const char bpalheiro [N][5]) {// N representa o numero de linhas, 5 é o numero de bytes
	int resp, j; // NÃO COLOCAR O MESMO NOME DA FUNÇÃO!!!!!!!!!!!!!!!!!!!!
	
	for(j=0; j<5; j++)//utilizar o laço do tamano do vetor / matriz
	{
	if (!strcmp(aagulha, bpalheiro[j]))//lembrar de colocar o indice no if
		resp = j;
		
	}
		return resp;//retornar só apos o termino ps. só apos encerrar tudo
		
		
}



void main()
{
	const char palheiro[N][5] = {"aaa", "bbb","ccc","ddd","000"};


	
	char agulha[4]; //elemento esses ABCD
	
	int i, x, j;

	
	printf("\n Informe o codigo a pesquisar: ");
	scanf("%s", agulha);
	
	i = busca(agulha, palheiro);
	

	if (i == -1)
		printf("Nou");
	else
		printf("\n nesta aqui: %d, a descrição é %c, o preco é %d ",i);
}

