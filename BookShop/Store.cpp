#include "Store.h"
using namespace std;

//Used to inisialise all of the given books
void init() {
    book[0] = { 0,"Moby Dick", 1851 , 15.20 };
    book[1] = { 1,"The Terrible Privacy of Maxwell Sim", 2010 , 13.14 };
    book[2] = { 2,"Still Life With Woodpecker", 1980 , 11.05 };
    book[3] = { 3,"Sleeping Murder", 1976 , 10.24 };
    book[4] = { 4,"Three Men in a Boat", 1889 , 12.87 };
    book[5] = { 5,"The Time Machine", 1895 , 10.48 };
    book[6] = { 6,"The Caves of Steel", 1954 , 8.12 };
    book[7] = { 7,"Idle Thoughts of an Idle Fellow", 1886 , 7.32 };
    book[8] = { 8,"A Christmas Carol", 1843 , 4.23 };
    book[9] = { 9,"A Tale of Two Cities", 1859 , 6.32 };
    book[10] = {10, "Great Expectations", 1861 , 13.21 };
};

char anwser;
int Book_Pick;
string In_Cart = "Buying ";

int main()
{
    init();
    puts("//////////////////////////////////////////////////");
    puts("The books we have on sale are:");
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    //Outputs all of the books details
    for (int i = 0; i <= sizeof(book) / sizeof(book[0]) - 1; i++) {
        cout << book[i].Name<< " ("<< book[i].year << ") "<< x<< book[i].price<< " ID of:"<< book[i].id << endl;      
    }
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    do
    {
        //Check which book you would like and then passes it on to be added to the total
        puts("Which book do you want to add to the cart enter the books ID");
        cin >> Book_Pick;
        total = buy.cart(book[Book_Pick].Name, book[Book_Pick].year, book[Book_Pick].price);
        In_Cart += book[Book_Pick].Name + ", ";
        puts("Do you want to add another book to your cart? (y/n)");
        cin >> anwser;

        if (anwser == 'n') break;
    } while (true);

    //Checks for other discounts
    puts("Do you have any discount codes?");
    cin >> anwser;
    if (anwser == 'y')
    {
       float dicount;
        puts("What % is your discount");
        cin >> dicount;       
        dicount = ((100 - dicount) / 100);
       total = total* dicount;
    }
    cout << In_Cart << "Will cost " ;
    cal.Total_Discount(total);
    return 0;
}
