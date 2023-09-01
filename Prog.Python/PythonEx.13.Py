#Anselmo Antunes Ribeiro
#Ex. 13
# Escreva um programa para ler as notas N1 e N2 obtidas por um aluno que cursou a disciplina
#Programação II, e em seguida calcular e mostrar média obtida.
#Caso a nota da N1 tenha sido maior ou igual a 8.0, mostrar também a mensagem “Foi bem na N1”

N1 = float(input("Insira a nota da N1:"))
N2 = float(input("Insira a nota da N2:")) 
media = (N1 + N2) / 2
print("Média foi de:", media)
if(N1 >= 8):
    print("Foi bem na N1 :)")
quit    