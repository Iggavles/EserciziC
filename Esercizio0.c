#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  int anni;
  printf("Forse...(numero parametri: %d) %s\n", argc,agrv[0]);
  if(argc>1)
  {
    printf("Primo argomento utente: %s\n",argv[1]);
  }
  if(argc>2)
  {
    anni=atoi(argv[2]);
    if(anni!=0)
    {
      printf("Secondo argomento utente(%s) valido %d\n",argv[1],anni);
    }
    else
    {
      printf("Secondo argomento utente(%s) non valido\n",argv[1]);
      return -1;
    }
  }
  return 0
}
