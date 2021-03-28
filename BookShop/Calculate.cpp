#include "Calculate.h"

//Caculates the overall price of the books
float Calculate::Add(float price , float total, int year) {
	price = Year_Discount(price, year);
	total += price;
	return  total;
}

//Calculates the 10% discount if the book is write after 2000
float Calculate::Year_Discount(float price , int year) {

	if (year >= 2000) {
		price = price * 0.9;
	}
	return price;
}

//Calculates the 5% discount if you spend over £30
float Calculate::Total_Discount(float total) {
	printf("%.2f\n", total);
	if (total > 30) {
		total = total * 0.95;
		printf("As you are spending more then %c30 you get a free discount: %.2f\n", 156 , total);
	}
	return  total;
}