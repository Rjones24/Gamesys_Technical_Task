#include "Buying.h"

float Buying::cart(string name , int year, float price) {
    
         total = cal.Add(price, total, year);
         check = true;
        
         char choice;
        
         // check if the buyer want to see how much their cart currenty cost
         while (check){
             cout << "Would you like to know the total of your cart? y/n" << endl;
             cin >> choice;
             if (choice == 'y' || choice == 'Y') {

                 printf("The current total of your cart is : %.2f\n", total);
                 check = false;
             }
             else if(choice == 'n') {
                 check = false;
             }
             // If you input anything other then a y or n it will ask you again
             else {
                 check = true;
             }
         } ;
        
         return total;
}