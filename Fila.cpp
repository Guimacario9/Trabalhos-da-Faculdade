#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX  20
typedef struct{
	char titulo[35];
	char autor [35];
}livro;
/* -------------- FiLa--------------*/
typedef struct{
	int seguir;
	int voltar;
	livro lv[MAX];
}fila;
void Initfila(fila * p){
	fila->seguir=-1;
	fila->voltar=-1;
}
void filacheia(Fila p){
	if (fila.inicio>=MAX-1)
	    return 1;
  else
        return 0;
}
void filavazia(Fila p){
	if (fila.voltar<0)
	    return 1;
  else
        return 0;
}
int push(livro l,Fila*p){
	if(filacheia(*p))
	return 0;
else{
	fila->seguir++;
	fila->lv[fila->seguir]=l;
	return 1;
    }	
}
livro * pop(Fila*p){
	if(filhavazia(*p))
	  return NULL;
else {
	livro*aux;
	aux(livro*)malloc(sizeof(livro));
	*aux=livro->autor[livro->titulo];
	livro->autor--;
	return aux;
   }	
   
}



