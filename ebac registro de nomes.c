#include <stdio.h> //biblioteca de comunicacao com o usuário
#include<stdlib.h>  // biblioteca de alocacao de espaço em memória
#include <locale.h>  // biblioteca de alocaçoes de texto por regiao
#include<string.h>  // biblioteca responsavel por cuidar das strings


  int registro()
  {
  	char arquivo[40];
  	char cpf[40];
  	char nome[40];
  	char sobrenome[40];
  	char cargo[40];
  	
  	printf("digite o CPF a ser cadastrado: ");
  	scanf("%s" , cpf );
  	
  	strcpy (arquivo, cpf); // responsavel por copiar os valores da string
  	
  	FILE *file; // cria o arquivo
  	file= fopen(arquivo, "w"); // escreve o arquivo por isso o w de write
  	fprintf(file,cpf); // salva o valor da variavel
  	fclose(file);// fecha o arquivo
  	
  	file = fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o nome a ser cadastrado: ");
  	scanf("%s", nome);
  	
  	file =fopen(arquivo,"a");
  	fprintf(file,nome);
  	fclose(file);
  	
  	file= fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o sobrenome a ser cadastrado: ");
  	scanf("%s" , sobrenome);
  	
  	file= fopen(arquivo, "a");
  	fprintf(file,sobrenome);
  	fclose(file);
  	
  	file = fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o cargo a ser cadastrado: ");
  	scanf("%s" , cargo);
  	
  	file = fopen(arquivo, "a");
  	fprintf(file,cargo);
  	fclose(file);
  	
  	system("pause");
  }
  
 int consulta()
 {
  	    setlocale(LC_ALL, "Portuguese"); // definir a linguagem
  	    
  	    char cpf[40];
  	    char conteudo [200];
  	    
  	    printf("digite o cpf a ser consultado: ");
  	    scanf("%s" , cpf);
  	    
  	    FILE *file;
  	    file = fopen(cpf, "r"); // leia o cpf
  	    
  	    if(file == NULL)
  	    {
		  printf("desculpe, nao foi possivel abrir o arquivo, nao localizado. \n \n ");
  	    }
		  
        while(fgets(conteudo,200, file)  != NULL)
        {
        	printf("\n essas são as informações do usuário: ");
        	printf("%s" , conteudo);
         	printf("\n \n");
	    }
	
	    system("pause");
	    
	    
}

    int deletar()
   {
   	    char cpf[40];
   	    
   	    printf("digite o CPF a ser deletado: ");
   	    scanf("%s" , cpf);
   	    
   	    remove(cpf);
   	    
   	    FILE *file;
   	    file = fopen(cpf , "r");
   	    
   	    if(file == NULL)
   	    {
   	    	printf(" o usuario não se encontra no sistema! \n \n ");
   	    	system("pause");
	    }
   	  
	} 







int main()
    {
	int opcao=0; // definindo variáveis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
	
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
	system("cls");
	
	printf("### cartório da EBAC ###\n\n"); // inicio do menu
	printf(" Escolha a opçao desejada do menu\n\n");
	printf("\t1 - registro de nomes\n");
	printf("\t2 - consulta de nomes\n");
    printf("\t3 - excluir nomes\n\n");
    printf("Opçao: "); // fim do menu
    
    scanf("%d" , &opcao); // armazenando a escolha do usuário
    
    system("cls");
    
    
    
    switch(opcao)
    {
    	
    	case 1:
    		registro();
    		system("pause");
    		break;
    		
    	case 2:
    	    consulta();
    	    system("pause");
    	    break;
    	    
    	 case 3:
		    deletar();
		    system("pause");
		    break;
		    
		    default:
		     printf("essa opcao nao está disponível!\n");
			 system("pause");
			 break;
		
			 
	    	}
			 
    	}
    	
}
    	
    	
    	
    	
    	
    	
    	
	
	

			 
			 
			 
		
	
