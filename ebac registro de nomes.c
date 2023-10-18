#include <stdio.h> //biblioteca de comunicacao com o usuário
#include<stdlib.h>  // biblioteca de alocacao de espaço em memória
#include <locale.h>  // biblioteca de alocaçoes de texto por regiao
#include<string.h>  // biblioteca responsavel por cuidar das strings


  int registro()// funçao responsavel por cadastrar os usuarios nos sistema
  {
  	// criação das strings variavéis
  	char arquivo[40];
  	char cpf[40];
  	char nome[40];
  	char sobrenome[40];
  	char cargo[40];
  	// final da criação
  	
  	printf("digite o CPF a ser cadastrado: ");// coletando inforamação do usuário
  	scanf("%s" , cpf ); // %s refere-se a string
  	
  	strcpy (arquivo, cpf); // responsavel por copiar os valores da string
  	
  	FILE *file; // cria o arquivo
  	file= fopen(arquivo, "w"); // escreve o arquivo por isso o w de write
  	fprintf(file,cpf); // salva o valor da variavel
  	fclose(file);// fecha o arquivo
  	
  	file = fopen(arquivo, "a"); // abrindo o arquivo novamente para atualizar e incluir informações
  	fprintf(file, ",");// salvando e separando 
  	fclose(file); // fecha o arquivo 
  	
  	printf("digite o nome a ser cadastrado: ");
  	scanf("%s", nome); // salvar e armazenar na string ( variável) o que o usuário digitar
  	
  	file =fopen(arquivo,"a"); // vamos abrir o arquivo para atualizar
  	fprintf(file,nome); // abrir arquivo para colocar informações
  	fclose(file); // fecha novamente
  	
  	file= fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o sobrenome a ser cadastrado: "); 
  	scanf("%s" , sobrenome); // salvar e armazenar na string
  	
  	file= fopen(arquivo, "a"); // abrir arquivo para atualizar
  	fprintf(file,sobrenome); // abre arquivo para colocar informações
  	fclose(file);// fecha
  	
  	file = fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o cargo a ser cadastrado: ");
  	scanf("%s" , cargo); // salva e armazena na string
  	
  	file = fopen(arquivo, "a"); // abre arquivo para atualizar
  	fprintf(file,cargo); // abre arquivo para colocar informações
  	fclose(file);// fecha arquivo
  	
  	system("pause");
  }
  
 int consulta()
 {
  	    setlocale(LC_ALL, "Portuguese"); // definir a linguagem
  	    
  	    char cpf[40]; // criando variável 
  	    char conteudo [200];
  	    
  	    printf("digite o cpf a ser consultado: ");// perguntando ao usuário qual cpf ele quer consultar
  	    scanf("%s" , cpf);// salvando na string cpf
  	    
  	    FILE *file; // chamando o arquivo cpf
  	    file = fopen(cpf, "r"); // abrir e  leia o cpf(r)
  	    
  	    if(file == NULL)// se o arquivo for nulo ( nao encontrado)
  	    {
		  printf("desculpe, nao foi possivel abrir o arquivo, nao localizado. \n \n ");
  	    }
		  
        while(fgets(conteudo,200, file)  != NULL)// funçao laço de repetição while( enquanto estiver buscando na variável conteúdo até 200 valores dentro do arquivo cpf )
        {
        	printf("\n essas são as informações do usuário: ");// dizendo ao usuário as informações
        	printf("%s" , conteudo); // salvando na string 
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
    printf("\t4 - sair do sistema\n\n");
    printf("Opçao: "); // fim do menu
    
    scanf("%d" , &opcao); // armazenando a escolha do usuário
    
    system("cls");// responsável por limpar tela
    
    
    
    switch(opcao) // início da seleção do menu
    {
    	
    	case 1:
    		registro(); // chamando as funções
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
		    
		 case 4:
		   printf("obrigado por utilizar o sistema");
		   return 0;
		   
		      
		    
		    default:
		     printf("essa opcao nao está disponível!\n");
			 system("pause");
			 break;
		
			 
	    	}
			 
    	}
    	
}
    	
    	
    	
    	
    	
    	
    	
	
	

			 
			 
			 
		
	
