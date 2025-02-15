name = input("Digite o seu nome:")
print(name)

nome = "Carlos"
sobrenome = "Fontes"

print(nome, sobrenome)                     # Carlos Fontes
print(nome, sobrenome, end="...\n")        # Carlos Fontes...
print(nome, sobrenome, sep="#")            # Carlos#Fontes


age, name2 = (23, "Guilherme")
print(f"Nome: {name2}.\nIdade: {age}.")