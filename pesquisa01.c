#include <stdio.h>
#include <string.h>
#define N 5

int busca (const char aagulha[4], const char bpalheiro [N][5]) {// N representa o numero de linhas, 5 � o numero de bytes
	int resp, j; // N�O COLOCAR O MESMO NOME DA FUN��O!!!!!!!!!!!!!!!!!!!!
	
	for(j=0; j<5; j++)//utilizar o la�o do tamano do vetor / matriz
	{
	if (!strcmp(aagulha, bpalheiro[j]))//lembrar de colocar o indice no if
		resp = j;
		
	}
		return resp;//retornar s� apos o termino ps. s� apos encerrar tudo
		
		
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
		printf("\n nesta aqui: %d, a descri��o � %c, o preco � %d ",i);
}

