#include <stdio.h> //biblioteca de comunicacao com o usu�rio
#include<stdlib.h>  // biblioteca de alocacao de espa�o em mem�ria
#include <locale.h>  // biblioteca de aloca�oes de texto por regiao
#include<string.h>  // biblioteca responsavel por cuidar das strings


  int registro()// fun�ao responsavel por cadastrar os usuarios nos sistema
  {
  	// cria��o das strings variav�is
  	char arquivo[40];
  	char cpf[40];
  	char nome[40];
  	char sobrenome[40];
  	char cargo[40];
  	// final da cria��o
  	
  	printf("digite o CPF a ser cadastrado: ");// coletando inforama��o do usu�rio
  	scanf("%s" , cpf ); // %s refere-se a string
  	
  	strcpy (arquivo, cpf); // responsavel por copiar os valores da string
  	
  	FILE *file; // cria o arquivo
  	file= fopen(arquivo, "w"); // escreve o arquivo por isso o w de write
  	fprintf(file,cpf); // salva o valor da variavel
  	fclose(file);// fecha o arquivo
  	
  	file = fopen(arquivo, "a"); // abrindo o arquivo novamente para atualizar e incluir informa��es
  	fprintf(file, ",");// salvando e separando 
  	fclose(file); // fecha o arquivo 
  	
  	printf("digite o nome a ser cadastrado: ");
  	scanf("%s", nome); // salvar e armazenar na string ( vari�vel) o que o usu�rio digitar
  	
  	file =fopen(arquivo,"a"); // vamos abrir o arquivo para atualizar
  	fprintf(file,nome); // abrir arquivo para colocar informa��es
  	fclose(file); // fecha novamente
  	
  	file= fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o sobrenome a ser cadastrado: "); 
  	scanf("%s" , sobrenome); // salvar e armazenar na string
  	
  	file= fopen(arquivo, "a"); // abrir arquivo para atualizar
  	fprintf(file,sobrenome); // abre arquivo para colocar informa��es
  	fclose(file);// fecha
  	
  	file = fopen(arquivo, "a");
  	fprintf(file, ",");
  	fclose(file);
  	
  	printf("digite o cargo a ser cadastrado: ");
  	scanf("%s" , cargo); // salva e armazena na string
  	
  	file = fopen(arquivo, "a"); // abre arquivo para atualizar
  	fprintf(file,cargo); // abre arquivo para colocar informa��es
  	fclose(file);// fecha arquivo
  	
  	system("pause");
  }
  
 int consulta()
 {
  	    setlocale(LC_ALL, "Portuguese"); // definir a linguagem
  	    
  	    char cpf[40]; // criando vari�vel 
  	    char conteudo [200];
  	    
  	    printf("digite o cpf a ser consultado: ");// perguntando ao usu�rio qual cpf ele quer consultar
  	    scanf("%s" , cpf);// salvando na string cpf
  	    
  	    FILE *file; // chamando o arquivo cpf
  	    file = fopen(cpf, "r"); // abrir e  leia o cpf(r)
  	    
  	    if(file == NULL)// se o arquivo for nulo ( nao encontrado)
  	    {
		  printf("desculpe, nao foi possivel abrir o arquivo, nao localizado. \n \n ");
  	    }
		  
        while(fgets(conteudo,200, file)  != NULL)// fun�ao la�o de repeti��o while( enquanto estiver buscando na vari�vel conte�do at� 200 valores dentro do arquivo cpf )
        {
        	printf("\n essas s�o as informa��es do usu�rio: ");// dizendo ao usu�rio as informa��es
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
   	    	printf(" o usuario n�o se encontra no sistema! \n \n ");
   	    	system("pause");
	    }
   	  
	} 







int main()
    {
	int opcao=0; // definindo vari�veis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
	
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
	system("cls");
	
	printf("### cart�rio da EBAC ###\n\n"); // inicio do menu
	printf(" Escolha a op�ao desejada do menu\n\n");
	printf("\t1 - registro de nomes\n");
	printf("\t2 - consulta de nomes\n");
    printf("\t3 - excluir nomes\n\n");
    printf("\t4 - sair do sistema\n\n");
    printf("Op�ao: "); // fim do menu
    
    scanf("%d" , &opcao); // armazenando a escolha do usu�rio
    
    system("cls");// respons�vel por limpar tela
    
    
    
    switch(opcao) // in�cio da sele��o do menu
    {
    	
    	case 1:
    		registro(); // chamando as fun��es
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
		     printf("essa opcao nao est� dispon�vel!\n");
			 system("pause");
			 break;
		
			 
	    	}
			 
    	}
    	
}
    	
    	
    	
    	
    	
    	
    	
	
	

			 
			 
			 
		
	
