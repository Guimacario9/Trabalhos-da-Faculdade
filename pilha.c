/* Este programa implementa uma pilha de Livros,
 * utilizando um vetor de registros como
 * recurso computacional
 * */
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX  3

typedef struct {
	char titulo [35] ;
	char autor [35] ;
	
} Livro  ;


/* -------------- PILHA   --------------*/
typedef struct {
	int topo ;
	Livro lv [ MAX ] ;
} Pilha ;

void initPilha( Pilha * p) {
	p-> topo = -1 ;
}

int pilhaCheia ( Pilha  p) {
	if ( p.topo >= MAX -1 ) 
		return 1 ;
	else
		return 0 ;
}

int pilhaVazia ( Pilha  p) {
	if ( p.topo < 0 )
		return 1 ;
	else
		return 0 ;
}

int push ( Livro l , Pilha * p) {
	if ( pilhaCheia (*p) )
		return 0;
	else {
		p->topo++ ;
		p->lv[p->topo] = l ;
		return 1 ;
	}
}

Livro *  pop ( Pilha * p) {
	if ( pilhaVazia (*p) )
		return NULL ;
	else {
		Livro * aux ;
		aux = (Livro *) malloc(sizeof(Livro)) ;
		*aux = p->lv[p->topo] ;
		p->topo-- ;
		return aux ;
	}
/* -------------------------------------*/



}

int main ( ) {
	Pilha rayovac ;
	Livro l1 = { "A revolução dos bichos", "George Orwell" } ; 
	Livro l2 = { "Kalum, o sangrento", "Menotti Del Pichia" } ; 
	Livro l3 = { "Sistemas Operacionais Modernos", "Andrew Tanembaum" } ; 
	Livro l4 = { "Admirável mundo novo", "Aldous Huxley" } ; 
	Livro * lx ;

	initPilha ( &rayovac ) ;

	if ( ! push(l1, &rayovac) )
	   	printf("\n A pilha estava cheia, não consegui empilhar %s \n", l1.titulo) ;
	if ( ! push(l2, &rayovac) )
	   	printf("\n A pilha estava cheia, não consegui empilhar %s\n", l2.titulo) ;
	if ( ! push(l3, &rayovac) )
	   	printf("\n A pilha estava cheia, não consegui empilhar %s \n", l3.titulo) ;
	if ( ! push(l4, &rayovac) )
	   	printf("\n A pilha estava cheia, não consegui empilhar %s \n", l4.titulo) ;


	if ( ! pilhaVazia(rayovac) ) { 
		lx = pop(&rayovac) ;
	   	printf("\n%s, %s\n\n", lx->titulo, lx->autor) ;
	   }
	else
	   	printf("\nA pilha estava vazia; não consegui desempilhar \n") ;

	if ( ! pilhaVazia(rayovac) ) { 
		lx = pop(&rayovac) ;
	   	printf("\n%s, %s\n\n", lx->titulo, lx->autor) ;
	   }
	else
	   	printf("\nA pilha estava vazia; não consegui desempilhar \n") ;
		

	if ( ! pilhaVazia(rayovac) ) { 
		lx = pop(&rayovac) ;
	   	printf("\n%s, %s\n\n", lx->titulo, lx->autor) ;
	   }
	else
	   	printf("\nA pilha estava vazia; não consegui desempilhar \n") ;


	if ( ! pilhaVazia(rayovac) ) { 
		lx = pop(&rayovac) ;
	   	printf("\n%s, %s\n\n", lx->titulo, lx->autor) ;
	   }
	else
	   	printf("\nA pilha estava vazia; não consegui desempilhar \n") ;


	return 0 ;
}


