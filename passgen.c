/* Este programa gera senhas aleatorias contendo Letras maiusculas, minusculas
 * e caracteres especiais.
 * Ao chamar o programa forneça uma string de fomratação da senha:
 * 		passgen "aaAAnnee"
 * Em que:
 *  A - Letra Maiúscula.
 *  a - Letra Minúscula.
 *  n - Algarismo entre 0 e 9.
 *  e - Algarismo especial { !, @, #, $, %, &, ?, _}.*/


//Lower Alpha (65 - 90)
//Upper Alpha (97 - 122)
//Number      (48 - 39)
//Especial char {'!', '@', '#', '$', '$', '%', '&', '?', '_'}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Protótipagem das funções.
char upper_gen();
char lower_gen();
char num_gen();
char spechar_gen();

void generate_password(char *ctr_string);

//Definição do set de caracteres especiais.
const char spec_set[] = {'!', '@', '#', '$', '%', '&', '?', '_'};

int main(int argc, char *argv[])
{
	//Inicializa o gerador.
	srand(time(NULL));
	
	//Verifica se o usuario entrou com a string de controle.
	if (argc <= 1)
	{
		printf("Informe a sequencia para a geração da senha.\n");
	}
	else
	{
		//Verifica se o usuario entrou com um numero de senhas.
		if (argc == 2) //Caso seja apenas uma senha.
		{
			generate_password(argv[1]);	
		}
		else //Caso sejam varias senhas.
		{
			int i;
			int n;
			n = atoi(argv[1]);
			for (i = 0; i < n; i++)
			{
				generate_password(argv[2]);
			}
		}
	}

	
	return 0;	
}

char upper_gen()
{
	return (65 + rand()%((90-65)+1));
}

char lower_gen()
{
	return (97 + rand()%((122-97)+1));
}

char num_gen()
{
	return (48 + rand()%((57-48)+1));
}

char spechar_gen()
{
	return spec_set[rand()%8];
}

void generate_password(char *ctr_string)
{
	int i;
	i = 0;
	while (ctr_string[i] != '\0')
	{
		if (ctr_string[i] == 'a')
			printf("%c", lower_gen());
		else if (ctr_string[i] == 'A')
			printf("%c", upper_gen());
		else if (ctr_string[i] == 'n')
			printf("%c", num_gen());
		else if (ctr_string[i] == 'e')
			printf("%c", spechar_gen());
		i++;
	}
	printf("\n");
}
