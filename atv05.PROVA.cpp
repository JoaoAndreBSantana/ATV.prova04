#include <ctype.h>
  #include <cs50.h>  /*O CODIGO FUNCIONA!! Mas este cabe�alho n rodou no meu dev c++ ...
 pesquisei sobre e achei mais pratico deixar ele pq ele ja vem incluido na questao 5*/
  #include <stdio.h>
  #include <string.h>


  // Pontos atribu�dos a cada letra do alfabeto
  int PONTOS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  int compute_score(string word);

  int main(void)
  {
      // Solicita ao usu�rio por duas palavras
      string word1 = get_string("Jogador 1: ");
      string word2 = get_string("Jogador 2: ");

      // Calcula a pontua��o de cada palavra
      int score1 = compute_score(word1);
      int score2 = compute_score(word2);
    

       if (score1 > score2){
        printf(" o jogador 1 vence com %d pontos\n", score1);
    }
    else if (score2 > score1){
        printf("o jogador 2 vence com %d pontos\n", score2);
    }
    else{
        printf("Empate!! os jogadores tem a mesma pontua�ao:%d\n", score1);
    }
  }

  int compute_score(string word)
  {
      // Mant�m o controle da pontua��o
      int score = 0;

      // Calcula a pontua��o para cada caractere
      for (int i = 0, len = strlen(word); i < len; i++)
      {
          if (isupper(word[i]))
          {
              score += PONTOS[word[i] - 'A'];
          }
          else if (islower(word[i]))
          {
              score += PONTOS[word[i] - 'a'];
          }
      }

      return score;
  }
