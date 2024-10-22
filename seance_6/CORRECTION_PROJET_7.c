#include <stdio.h>
#include <string.h>

int main() {
  
  char phrase[] = "Je suis d'accord";

  char voyelles[] = {'a','e','i','o','u', 'y'};

  char langage_baleine [strlen(phrase)];
  
  int k = 0;
  
  for (int i = 0; i < strlen(phrase); i++) {
    
    for (int j = 0; j < sizeof(voyelles)/sizeof(char); j++) {

      if (phrase[i] == voyelles[j]) {

        langage_baleine[k] = phrase[i];
        k++;
        
        if (phrase[i] == 'e' || phrase [i] == 'u') {

            langage_baleine[k] = phrase[i];
             k++;
        }
        
       
      
      }
      
    }
  
  }
  
  for (int l = 0; l < strlen(langage_baleine); l++) {
    
    printf("%c",langage_baleine[l]);

  }
  
}