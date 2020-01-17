#include <stdio.h>
int lc, linha, coluna;
int main(void){
  printf("Informe a ordem das matrizes: ");
  scanf("%d", &lc);
  int a[lc][lc], b[lc][lc];
  printf("Matriz A ...\n");
  for (linha=0; linha < lc; linha++){
    for (coluna=0;coluna<lc;coluna++){
      printf("A[%d][%d]: ", linha + 1, coluna + 1);
      scanf("%d", &a[linha][coluna]);
    }
  }
  printf("Matriz B ...\n");
  for (linha=0; linha < lc; linha++){
    for (coluna=0;coluna<lc;coluna++){
      printf("B[%d][%d]: ", linha + 1, coluna + 1);
      scanf("%d", &b[linha][coluna]);
    }
  }
  printf("Matriz C -RESPOSTA- ...\n");
  for (linha=0; linha < lc; linha++){
    for (coluna=0;coluna<lc;coluna++){
      printf("%10d", a[linha][coluna]);
    }
    printf("\t\t+\t");
    for (coluna=0;coluna<lc;coluna++){
      printf("%10d", b[linha][coluna]);
    }
    printf("\t\t=\t");
    for (coluna=0;coluna<lc;coluna++){
      printf("%10d", a[linha][coluna]+b[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}
