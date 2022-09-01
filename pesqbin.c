#include <stdio.h>

typedef struct {
   char cpf[4];   // cabem até 3 caracteres
   char nome[35];
} pessoa ;

int pesqbin ( pessoa vvp[], char vcpf[4], int ini, int fim ) {
 int meio = (ini + fim ) / 2 ;
 while ( ( ini < fim )   && ( strcmp(vcpf, vvp[meio].cpf) != 0 ) ) {
   if ( strcmp(vcpf,vvp[meio].cpf ) > 0  )
      ini = meio + 1 ;
   else
      fim = meio - 1 ;
   meio = (ini + fim ) / 2 ;
 }
 if ( strcmp( vcpf, vvp[meio].cpf  ) != 0     )
   return -1 ;
 else
   return meio ;
}

void main() {
   pessoa vp[] = {
     {"001", "Dilma sua Linda"},  // Observe : em ordem crescente
     {"002", "Dilma Presidenta"}, // de código, porque é por
     {"003", "Dilma Paz e Amor"}, // esse campo que será feita a
     {"004", "Dilma Felicidade"}, // pesquisa
     {"005", "Dilma Maravilha"},
     {"006", "Dilma Cheirosa"},
     {"007", "Dilma Vitaminada"},
     {"008", "Dilma X"} 
   } ;
   char procurado[4] ;   // até 3 caracteres
   int posicao ;

   printf("\nInforme cpf a procurar : \n");
   scanf("%s", procurado) ;
   posicao = pesqbin(vp,procurado, 0, 7) ;
   if ( posicao == -1   )
      printf("\nNao encontrei\n");
   else
      printf( "\n%s\n", vp[posicao].nome );
}

