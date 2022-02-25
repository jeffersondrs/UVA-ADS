programa {
    
    inteiro quantidadeFamiliares, idade
    inteiro idadeTotal = 0
    inteiro contador = 1
    
	funcao inicio() 
	{
		escreva("Insira a quantidade de familiares: ")
		leia(quantidadeFamiliares)
		
		enquanto (contador <= quantidadeFamiliares){
		escreva("Insira as idades dos familiares: ")
		leia(idade)
		idadeTotal = idadeTotal + idade
		contador = contador + 1
	    }
	    real media = idadeTotal/quantidadeFamiliares
	    escreva (media)
	}
}