#include"proto-terminal.h"

void startTerminal()
{
    puts("\n\n"
    "\n****************************"
    "\n*****  Proto-Terminal  *****"
    "\n****************************"
    ); 
  
    return; 

}


void help()
{ 
    puts("\n*******Comandos do Terminal*******"
        "\n>cd -> Abre o diretório desejado"
        "\n>ls -> Mostra o diretório atual"
        "\n>pwd -> Mostra o caminho completo para o diretório atual"
        "\n>./ -> Usado para abrir diretório e pode ser modificado com: >, <, | e & ")
        "\n>exit -> Fecha o terminal"); 
  
    return; 
}

