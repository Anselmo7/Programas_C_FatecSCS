#exercicio 0

''' Fatec SCS - SegInf. 1Sem - data 11/02/2023
    O cliente possui R$10.00 e o produto desejado custa R$1.50. Quantos produtos
    o cliente pode comprar? '''

#Declarações de Variaveis

saldo = 10
valorProd = 1.50
qtd = 0

#Codigo

while( saldo >= valorProd ):
    qtd = qtd + 1
    saldo = saldo - valorProd
print( f"Quantidade {qtd} , saldo: R${saldo}" )
    

