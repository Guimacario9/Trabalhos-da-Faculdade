algoritmo "ex11"
var
la, lb, lc, triangulo: inteiro
inicio
// Seção de Comandos 
escreva("Digite o lado A do triângulo: ")
leia(la)
escreva("Digite o lado B do triângulo: ")
leia(lb)
escreva("Digite o lado C do triângulo: ")
leia(lc)

se la < (lc+lb) entao
    triangulo <- 1
senao
    se lb < (lc + la) entao
        triangulo <- 1
    senao
        se lc < (lb + la) entao
            triangulo <- 1
        fimse
    fimse
fimse

se triangulo = 1 entao
    se la = lb entao
        se lb = lc entao
            escreval("É um triângulo retângulo!")
        senao
            escreval("É um triângulo obtusângulo")
        fimse
    senao
        se lb = lc entao
            escreval("É um triângulo acutângulo")
        senao
            escreval("É um triângulo equilátero")
        fimse
    senao
       se lb = lc entao
           escreval("É um triângulo isósceles")
       fimse
    fimse
fimse

fimalgoritmo
