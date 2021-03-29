#include <iostream>
#include <iomanip>
#include <locale>
#include <vector>
#include "include/Ticket.h"

using namespace std;

vector<Ticket> ticketList;
const char separator    = ' ';
const int ticketPriceWidth   = 16;
const int textWidth = 12;
const int stockWidth = 5;

/*
 * This function used to make a table cell so it will looks better
 * please refer to global variable ends with Width for cell lengths
 * sample code :
 * printElement("Ticket Price", ticketPriceWidth);
 * will make a cell with width of 16 and fill it with separator (' ')
 * if the first parameter is not long enough
 */
template<typename T> void printElement(T t, const int& width){
    cout << left << "|" <<setw(width) << setfill(separator) << t;
}

/*
 * This method is a friend function refer to Ticket.cpp
 * This method will be used for each Ticket
 */
void cetak_barang(Ticket& ticket) {
  
}

/*
 * This method is used to initialize dummy data
 */
void initializeTickets(){

}

/*
 * This method is used to print table header
 */
void printHeader() {

}

/*
 * This method is used to do menu choice #1
 */
void displayTickets(){
  
}

/*
 * This method is used to validate wether the ticket inputted
 * on menu choice #2 is correct or not
 */
bool validateTicketCode(string code) {
  bool isValid = false;
  
  return isValid;
};

/*
 * This method is used to return Ticket choosen by menu choice #2
 * you may ignore warning on this method
 */
Ticket getTicketByTicketCode(string code) {
  
};

/*
 * This method is used to update stock ticket on the list
 */
void updateTicketList(Ticket ticket){
  
}

/*
 * This method is used to do menu choice #2
 */
void sellTicket() {
  
};

/*
 * This method is used to display menu choices
 */
int selectMenu() {
  int selectedMenu;

  return selectedMenu;
};

/*
 * This method is used to start the program
 */
int main() {
  cout.imbue(locale("")); // keep this to format the price
}