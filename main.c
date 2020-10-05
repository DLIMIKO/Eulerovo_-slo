#include <stdio.h>
#include <time.h>                                   // hlavičkový súbor potrebný na meranie času

int main()
{

   printf("\nProgram na aproximovanie eulerovho čísla:\n"); // úvodný text
   clock_t start, stop;
   double cas_programu;
   int n = 1;                                           // iter. číslo
   double eN = 1;                                       // hodnota e pre danú iter.
   double factN1 = 1;                                   // hodnota prírastku pre n+1-vú iter. , čiže (n+1)!

   printf("n\teN\t\t\t\t 1/factN1\n");                  // hlavička výstupu


  start=clock();                                        // časová značka, začiatok merania času

  while(1 / factN1 > 1e-10)                             // cyklus pracuje, pokiaľ je prírastok väčší ako 1e-10
   {
      printf("%d",n);                                   // vypíše sa hodnota danej iterácie
      eN = eN + (1 / factN1);                           // k hodnote eN sa pripočíta prírastok
      n = n + 1;                                        // hodnota n sa navýši o 1
      factN1 = factN1 * n;                              // zväčšenie faktoriálu n-krát
      printf("\t%.12f \t %.11f \n", eN, 1 / factN1);    // vypíše sa číslo iteráie na 12 des. miest a prírastok na 11 des. miest
   }

  stop=clock();                                         // časová značka, koniec merania času

  printf("\nEulerovo číslo aproximované na 10 platných desatinných miest: %.10f\n",eN); //finálny výpis čísla e
  printf("Čas procesu: %fs",((double)(stop-start))/CLOCKS_PER_SEC); //výpis doby trvania v sekundách
    return 0;
}