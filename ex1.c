#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char lieux[3][50] = {" ", " ", " "};
  
  for (int i = 0; i < 3; i++)
  {
    printf("Donnez 1 lieu : ");
    fgets(lieux[i], sizeof(lieux[i]), stdin);
  }

  int aleatoire_lieu = rand()%3;
  char choix_lieu[50];
  strcpy(choix_lieu,lieux[aleatoire_lieu]);

  char actions[3][50] = {" ", " ", " "};
  
  for (int i = 0; i < 3; i++)
  {
    printf("Donnez 1 action: ");
    fgets(actions[i], sizeof(actions[i]), stdin);
  }

  int aleatoire_action = rand()%3;
  char choix_actions[50];
  strcpy(choix_actions,actions[aleatoire_action]);

  char objets[3][50] = {" ", " ", " "};
  
  for (int i = 0; i < 3; i++)
  {
    printf("Donnez 1 action: ");
    fgets(objets[i], sizeof(objets[i]), stdin);
  }

  int aleatoire_objet = rand()%3;
  char choix_objet[50];
  strcpy(choix_objet,objets[aleatoire_action]);

  return 0;
}
