#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  /*PERSONNAGES*/
  char personages[3][60] = {" ", " "," "};

  for (int i = 0; i < 3; i++)
  {
    printf("Entrer un nom de personnages : ");
    fgets(personages[i],sizeof(personages[i]),stdin);    
  }
  
  int aleatoire_personage = rand()%3;
  char choix_personage[50];
  strcpy(choix_personage,personages[aleatoire_personage]);


  /*LIEUX*/
  char lieux[3][50] = {" ", " ", " "};
  
  for (int i = 0; i < 3; i++)
  {
    printf("Donnez 1 lieu : ");
    fgets(lieux[i], sizeof(lieux[i]), stdin);
  }

  int aleatoire_lieu = rand()%3;
  char choix_lieu[50];
  strcpy(choix_lieu,lieux[aleatoire_lieu]);


  /*ACTIONS*/
  char actions[3][50] = {" ", " ", " "};
  
  for (int i = 0; i < 3; i++)
  {
    printf("Donnez 1 action (exemple : combattu un dragon) : ");
    fgets(actions[i], sizeof(actions[i]), stdin);
  }

  int aleatoire_action = rand()%3;
  char choix_actions[50];
  strcpy(choix_actions,actions[aleatoire_action]);

  /*OBJETS*/
  char objets[3][50] = {" ", " ", " "};
  
  for (int i = 0; i < 3; i++)
  {
    printf("Donnez 1 objet (exemple : une epee) : ");
    fgets(objets[i], sizeof(objets[i]), stdin);
  }

  int aleatoire_objet = rand()%3;
  char choix_objet[50];
  strcpy(choix_objet,objets[aleatoire_action]);

  
  printf("%s est alle a %s et a %s avec %s", choix_personage, choix_lieu, choix_actions, choix_objet);

  return 0;
}


