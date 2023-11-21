#include <stdio.h>
 
int main() {
  float  brut ;
  float  net;
  const float tautCharges = 0.25;
   printf("entrez votr saliare Brut: \n");


 
    scanf("%f",&brut);


     net = brut - (brut * tautCharges);    
     printf("votre salire est: %.2f", net);




  return 0;
}
