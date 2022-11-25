#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int menu, pedra, papel, tesoura, cpu;

  do {
    printf("Escolha o que você quer\n");
    printf("1 - pedra\n");
    printf("2 - papel\n");
    printf("3 - tesoura\n");
    printf("0 - encerrar\n");
    scanf("%d", &menu);
    
    switch(menu){
      case(1): //usuario escolheu pedra
      cpu=srand()%6+1;
      if(cpu==1){
        printf("computador escolheu pedra, empate\n");
      }
      else if(cpu==2){
        printf("computador escolheu papel, voce perdeu\n");
      }
      else if(cpu==3){
        printf("computador escolheu tesoura, voce ganhou\n");
      }
       break;

      case(2): //usuario escolheu papel
      cpu=srand()%6+1;
      if(cpu==1){
        printf("computador escolheu pedra, voce ganhou\n");
      }
      else if(cpu==2){
        printf("computador escolheu papel, empate\n");
      }
      else if(cpu==3){
        printf("computador escolheu tesoura, você perdeu\n");
      }
    }
    
}