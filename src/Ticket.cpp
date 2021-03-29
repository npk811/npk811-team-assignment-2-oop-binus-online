#include <iostream>
#include <iomanip>
#include "../include/Ticket.h"
#include <string>

Ticket::Ticket(std::string code, std::string name, std::string destination, double price, int stock) {
  ticketCode = code;
  trainName = name;
  trainDestination = destination;
  ticketPrice = price;
  ticketStock = stock;
};
Ticket::Ticket(const Ticket& ticket){
  ticketCode = ticket.ticketCode;
  trainName = ticket.trainName;
  trainDestination = ticket.trainDestination;
  ticketPrice = ticket.ticketPrice;
  ticketStock = ticket.ticketStock;
};
Ticket::~Ticket(){
  // destructor Ticket
}