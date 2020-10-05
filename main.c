#include <stdio.h>

int main()
{
    // definícia premenných aa
   int n = 1;
   double eN = 1;
   double factN1 = 1;

  printf("n   eN               1/factN1\n");    //hlavička výstupu

  while(1 / factN1 > 1e-10)      //algoritmus na výpočet e na 10 des. miest
   {
      printf("%d",n);  //vypíše sa hodnota iterácie
      eN = eN + (1 / factN1);
      n = n + 1;
      factN1 = factN1 * n;
      printf("\t%.12f \t %.11f \n", eN, 1 / factN1); //vypíše sa  číslo iteráciee na 12 des. miest a prírastok na 11 des. miest
   }

    return 0;
}