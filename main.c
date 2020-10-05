#include <stdio.h>

int main()
{

   int n = 1;                                        // iter. číslo
   double eN = 1;                                    // hodnota e pre danú iter.
   double factN1 = 1;                                // hodnota prírastku pre n+1-vú iter. , čiže (n+1)!

   printf("n\teN\t\t\t\t 1/factN1\n");               // hlavička výstupu


  while(1 / factN1 > 1e-10)                          // cyklus pracuje, pokiaľ je prírastok väčší ako 1e-10
   {
      printf("%d",n);                                // vypíše sa hodnota danej iterácie
      eN = eN + (1 / factN1);                        // k hodnote eN sa pripočíta prírastok
      n = n + 1;                                     // hodnota n sa navýši o 1
      factN1 = factN1 * n;                           // povýšenie faktoriálu
      printf("\t%.12f \t %.11f \n", eN, 1 / factN1); // vypíše sa číslo iteráie na 12 des. miest a prírastok na 11 des. miest
   }

    return 0;
}