#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
  char personages[3][100]={" ", " "," "};
  
  srand(time(NULL));
  for (int i = 0; i < 3; i++)
  {

    printf("Entrer un nom de personnages : ");
    fgets(personages[i],sizeof(personages[i]),stdin);

    
  }
  
  int aleatoire=rand()%3;
  char choix_personage[100];
  strcpy(choix_personage,personages[aleatoire]);

  if (choix_personage==)
  {
    /* code */
  }
  
  
  


  
  
  return 0;
}