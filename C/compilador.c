#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compilar(char * arquivo)
{
	char comand [50] = "gcc ";
	
	strcat(comand, arquivo);
	strcat(comand, ".c -o ");
	strcat(comand, arquivo);
	strcat(comand, ".exe");
	return system(comand);
}

int main()
{
	int programa = 1;
    char arquivo [20];
    char confirm = 'N';

    printf("+-------------+\n");
    printf("|             |\n");
    printf("| COMPILADOR  |\n");
    printf("|             |\n");
    printf("+-------------+\n\n");

    printf("Insira o nome do arquivo .C que deseja compilar:___");
    gets(arquivo);
    
	while(1)
	{
		confirm = 'N';
		programa = compilar(arquivo);
		
		if(programa == 1)
		{
			printf("\nForam encontrados esses erros no seu codigo... \nCompilar o programa novamente?___");
			scanf("%c", &confirm);
			
			if(confirm == 'S' || confirm == 's')
			{
				printf("%d", programa);
				system("cls");
			}
			else{
				printf("\n\n\nBreak ");
				break;
			}
		}
		if( programa == 0)
		{
			printf("\nSeu codigo .C foi compilado com sucesso! :)\nRodar programa?___");
			scanf("%c", &confirm);
			
			 if(confirm == 'S' || confirm == 's')
		    {
		    	system("cls");
		        strcat(arquivo, ".exe");
		        system(arquivo);
		    }
		}
			
	}
}
