
#include <stdio.h> //Incluindo a biblioteca de entrada e saída de dados.

int main(){
  char resposta;
  int contador = 0;
  char a[5]; //Declarando um conjunto de caracteres para ser usado. Lembrando que começa do zero.
  //São cinco caracteres pois a maior expressão possível possuirá cino posições a ser usada; A'+B' por exemplo.
  puts("Havera negacao na expressao?[s/n]");
  scanf(" %c", &resposta);

  if (resposta == 'n'){
    puts("Insira a expressão:");
    for (int i = 0; i < 3; i++){//Um laço de repetição criado para que o usuário insira a palavra.
      scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
    }

    if (a[1] == '+') {
      puts("\n");
      puts(".________________.");
      puts("|A  B A+B ou B+A |"); //Não precisa fazer outro printf para a situação do cara escrever B+A. É a mesma coisa que A+B
      puts("|0  0     1      |");
      puts("|0  1     1      |");
      puts("|1  0     1      |");
      puts("|1  1     1      |");
      puts("|________________|");
    }else if (a[1]=='.') {
      puts(".__________________.");
      puts("|A  B   A.B ou B.A |"); //Não precisa fazer outro printf para a situação do cara escrever B.A. É a mesma coisa que A+B
      puts("|0  0       0      |");
      puts("|0  1       0      |");
      puts("|1  0       0      |");
      puts("|1  1       1      |");
      puts("|__________________|");
    }
  }else{
    int qnts;
    puts("Serão quantos caracteres na expressão? 4 ou 5?");
    scanf("%i", &qnts);

    puts("Você irá querer somar/multiplicar tudo e negar depois?[s/n]");
    scanf(" %c", &resposta);
      if (resposta == 's') {
        puts("Voce ira querer negar tudo apos a soma/multiplicacao negada? [s/n]");
        scanf(" %c", &resposta);
        if (resposta == 's'){
          puts("Insira sua expressao:"); //casos (a,+b), e (a+b,), e (a,+b,), e (a,.b), e (a.b,), e (a,.b,),
          if (qnts == 4) {
            for (int i = 0; i < 4; i++){//Um laço de repetição criado para que o usuário insira a palavra.
              scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
            }
          }else{
              for (int i = 0; i < 5; i++){//Um laço de repetição criado para que o usuário insira a palavra.
                scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
            }
          }
          if (a[1] == '+' || a[2] == '+') {
            if (a[1] == ',' && a[4] != ',') {
              puts("._________________________.");
              puts("|A  B  A, (A,+B)  (A,+B), |");
              puts("|0  0  1     1       0    |");
              puts("|0  1  1     1       0    |");
              puts("|1  0  0     0       1    |");
              puts("|1  1  0     1       0    |");
              puts("|_________________________|");
            }else if (a[1] == ',' && a[4] == ',') {
              puts("._____________________________.");
              puts("|A  B  A, B, (A,+B,) (A,+B,), |");
              puts("|0  0  1  1    1        0     |");
              puts("|0  1  1  0    1        0     |");
              puts("|1  0  0  1    0        1     |");
              puts("|1  1  0  0    1        0     |");
              puts("|_____________________________|");
            }else if (a[1] != ',' && a[4] == ',') {
              puts(".__________________________.");
              puts("|A  B  B, (A+B,) (A+B,),   |");
              puts("|0  0  1    1        0     |");
              puts("|0  1  0    0        1     |");
              puts("|1  0  1    1        0     |");
              puts("|1  1  0    1        0     |");
              puts("|__________________________|");
            }

          }else{
            if (a[1] == ',' && a[4] != ',') {
              puts("._________________________.");
              puts("|A  B  A, (A,.B)  (A,.B), |");
              puts("|0  0  1     0       1    |");
              puts("|0  1  1     1       0    |");
              puts("|1  0  0     0       1    |");
              puts("|1  1  0     0       1    |");
              puts("|_________________________|");
            }else if (a[1] == '.' && a[4] == ',') {
              puts(".__________________________.");
              puts("|A  B  B, (A.B,) (A.B,),   |");
              puts("|0  0  1    0        1     |");
              puts("|0  1  0    0        1     |");
              puts("|1  0  1    1        0     |");
              puts("|1  1  0    0        1     |");
              puts("|__________________________|");
            }else{
              puts("._____________________________.");
              puts("|A  B  A, B, (A,.B,) (A,+B,), |");
              puts("|0  0  1  1    1        0     |");
              puts("|0  1  1  0    0        1     |");
              puts("|1  0  0  1    0        1     |");
              puts("|1  1  0  0    0        1     |");
              puts("|_____________________________|");
            }
          }
        }else{
            if (qnts == 5)
              puts("Você deveria ter escolhido quatro caracteres então. Mas pode continuar.");

            puts("Insira a expressão:");
            for (int i = 0; i < 3; i++){//Um laço de repetição criado para que o usuário insira a palavra.
              scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
            }if (a[1] == '.') {
              puts("._______________________________________.");
              puts("|A  B   (A.B) ou (B.A)  (A.B), ou (B.A),|"); //Não precisa fazer outro printf para a situação do cara escrever B.A. É a mesma coisa que A+B
              puts("|0  0          0              1         |");
              puts("|0  1          0              1         |");
              puts("|1  0          0              1         |");
              puts("|1  1          1              0         |");
              puts("|_______________________________________|");
            }else if (a[1] == '+') {
              puts("._______________________________________.");
              puts("|A  B    (A+B ou B+A)  (A+B), ou (B+A), |"); //Não precisa fazer outro printf para a situação do cara escrever B+A. É a mesma coisa que A+B
              puts("|0  0         0            1            |");
              puts("|0  1         1            0            |");
              puts("|1  0         1            0            |");
              puts("|1  1         1            0            |");
              puts("|_______________________________________|");
            }

        }
      }else{


        if (qnts == 4) {
          puts("Insira a expressão:");
          for (int i = 0; i < 4; i++){//Um laço de repetição criado para que o usuário insira a palavra.
            scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
            }
        }else{
          puts("Insira a expressão:");
          for (int i = 0; i < 5; i++){//Um laço de repetição criado para que o usuário insira a palavra.
            scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
          }
        }





    if (a[1] == '+' || a[2] == '+') { //No caso de uma soma, que há negação, tem três possibilidades. A,+ B / A+ B, / A'+ B'
      if (a[1] == ',' && a[4] != ','){ //Caso 1 e 2. A,+ B ou A + B,
        puts("._____________________.");
        puts("|A  B  A,   A,+B       |");
        puts("|0  0  1      1        |");
        puts("|0  1  1      1        |");
        puts("|1  0  0      0        |");
        puts("|1  1  0      1        |");
        puts("|______________________|");
      }else if(a[1] == ',' && a[4] == ','){ //Caso onde há duas negações.
        puts(".___________________.");
        puts("|A  B  A, B,  A,+B, |");
        puts("|0  0  1  1     1   |");
        puts("|0  1  1  0     1   |");
        puts("|1  0  0  1     1   |");
        puts("|1  1  1  0     1   |");
        puts("|___________________|");
      }else{
        puts("._____________________.");
        puts("|A  B  B,    A+B,      |");
        puts("|0  0  1      1        |");
        puts("|0  1  0      0        |");
        puts("|1  0  1      1        |");
        puts("|1  1  0      1        |");
        puts("|______________________|");
      }
    }
      else{

        //No caso de uma multiplicação, que há negação, tem três possibilidades. A, . B / A . B, / A' . B'
        if (a[1] == ',' && a[4] != ','){ //Caso 1 e 2. A,. B ou A . B,
          puts("._____________________.");
          puts("|A  B  A,   A,.B       |");
          puts("|0  0  1      0        |");
          puts("|0  1  1      1        |");
          puts("|1  0  0      0        |");
          puts("|1  1  1      1        |");
          puts("|______________________|");
        }else if (a[1] == ',' && a[4] == ','){ //Caso onde há duas negações.
          puts("._____________________.");
          puts("|A  B  A, B,   A,.B,  |");
          puts("|0  0  1  1    1      |");
          puts("|0  1  1  0    0      |");
          puts("|1  0  0  1    0      |");
          puts("|1  1  1  0    0      |");
          puts("|_____________________|");
        }else{
          puts("._____________________.");
          puts("|A  B   B,   A.B,     |");
          puts("|0  0   1    0        |");
          puts("|0  1   0    0        |");
          puts("|1  0   1    1        |");
          puts("|1  1   0    0        |");
          puts("|_____________________|");
        }
      }
    }
  }
}
