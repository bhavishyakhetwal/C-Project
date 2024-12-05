#include <stdio.h>
int main(){
  int currency;
  float amount, rupee, dollar, pound, euro, yen, franc;
  printf("Following are the choices of the currency you want to convert:");
  printf("\nFor Rupee(1)");
  printf("\tFor Dollar(2)");
  printf("\nFor Pound(3)");
  printf("\tFor Euro(4)");
  printf("\nFor Yen(5)");
  printf("\tFor Franc(6)");
 
  printf("\nSelect the currency(1-6): ");
  scanf("%d", &currency);
 
  printf("Enter the amount you want to convert: ");
  scanf("%f", &amount);
 
  
  switch (currency)
  {
    case 1: //For Rupee
        dollar = amount / 84;
        printf("%.2f Rupee = %.4f dollar", amount, dollar);
 
        pound = amount / 106;
        printf("\n%.2f Rupee = %.4f pound", amount, pound);
 
        euro = amount / 88;
        printf("\n%.2f Rupee = %.4f euro", amount, euro);

        yen = amount / 0.56;
        printf("\n%.2f Rupee = %.4f yen", amount, yen);

        franc = amount / 95.4;
        printf("\n%.2f Rupee = %.4f franc", amount, franc);
        break;
 
    case 2: // For Dollar
        rupee = amount * 84;
        printf("\n%.2f Dollar = %.2f rupee", amount, rupee);
 
        pound = amount * 0.80;
        printf("\n%.2f Dollar = %.2f pound", amount, pound);
 
        euro = amount * 0.95;
        printf("\n%.2f Dollar = %.2f euro", amount, euro);

        yen = amount * 152;
        printf("\n%.2f Dollar = %.2f yen", amount, yen);

        franc = amount * 1.13;
        printf("\n%.2f Dollar = %.4f franc", amount, franc);
        break;
 
    case 3: // For Pound
        rupee = amount * 106;
        printf("\n%.2f Pound = %.2f rupee", amount, rupee);
 
        dollar = amount *1.26;
        printf("\n%.2f Pound = %.2f dollar", amount, dollar);
 
        euro = amount *1.20;
        printf("\n%.2f Pound = %.2f euro", amount, euro);

        yen = amount * 191;
        printf("\n%.2f Pound = %.2f yen", amount, yen);

        franc = amount * 0.89;
        printf("\n%.2f Pound = %.4f franc", amount, franc);
        break;
 
    case 4: // For Euro
        rupee = amount * 88.8;
        printf("\n%.2f Euro = %.2f rupee", amount, rupee);
 
        dollar = amount *1.05;
        printf("\n%.2f Euro = %.2f dollar", amount, dollar);
 
        pound = amount *0.83;
        printf("\n%.2f Euro = %.2f pound", amount, pound);

        yen = amount * 159.3;
        printf("\n%.2f Euro = %.2f yen", amount, yen);

        franc = amount * 1.07;
        printf("\n%.2f Euro = %.4f franc", amount, franc);
        break;

    case 5: // For Yen
        rupee = amount / 1.8;
        printf("\n%.2f Yen = %.4f rupee", amount, rupee);
 
        dollar = amount / 152;
        printf("\n%.2f Yen = %.4f dollar", amount, dollar);
 
        pound = amount / 193.5;
        printf("\n%.2f Yen = %.4f pound", amount, pound);

        euro = amount / 159.3;
        printf("\n%.2f Yen = %.4f euro", amount, euro);

        franc = amount / 172.4;
        printf("\n%.2f Yen = %.4f franc", amount, franc);
        break;

    case 6: // For Franc
        rupee = amount * 95.4;
        printf("\n%.2f Franc = %.2f rupee", amount, rupee);
 
        dollar = amount * 1.13;
        printf("\n%.2f Franc = %.2f dollar", amount, dollar);
 
        pound = amount * 0.89;
        printf("\n%.2f Franc = %.2f pound", amount, pound);

        euro = amount * 1.07;
        printf("\n%.2f Franc = %.2f euro", amount, euro);

        yen = amount * 172.4;
        printf("\n%.2f Franc = %.2f yen", amount, yen);
        break;
    
    default:
        printf("\nEnter Valid Input");
  }
 
  return 0;
}