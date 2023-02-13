# Passgen 1.0
Frederico Brom 
Fevereiro-2023


Este programa gera senhas aleatorias contendo Letras maiusculas, minusculas
e caracteres especiais.
Ao chamar o programa forneça uma string de formatação da senha:


'''
	$./passgen "aaAAnnee"
'''


Em que:

*  A - Letra Maiúscula.

*  a - Letra Minúscula.

*  n - Algarismo entre 0 e 9.

*  e - Algarismo especial { !, @, #, $, %, &, ?, _}.*/


Para gerar mais de uma senha com a mesma string de formatação, basta colocar
o numero de senhas antes da strinf de formatação:


'''
    $./passgen 3 "aaAAnnee"
'''
