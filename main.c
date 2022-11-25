#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int menu, pedra, papel, tesoura, cpu;

  do{
    printf("Escolha o que você quer\n");
    printf("1 - pedra\n");
    printf("2 - papel\n");
    printf("3 - tesoura\n");
    printf("0 - encerrar\n");
    scanf("%d", &menu);
    
    switch(menu){
      case(1): //usuario escolheu pedra
      cpu=rand()%6+1;
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
      cpu=rand()%6+1;
      if(cpu==1){
        printf("computador escolheu pedra, voce ganhou\n");
      }
      else if(cpu==2){
        printf("computador escolheu papel, empate\n");
      }
      else if(cpu==3){
        printf("computador escolheu tesoura, você perdeu\n");
      }
      break;

      case(3): //usuario escolheu tesoura
      cpu=rand()%6+1;
      if(cpu==1){
        printf("computador escolheu pedra, voce perdeu\n");
      }
      else if(cpu==2){
        printf("computador escolheu papel, voce ganhou\n");
      }
      else if(cpu==3){
        printf("computador escolheu  tesoura, empate\n");
      }
       break;
    }
    }while(menu!=0);
  }