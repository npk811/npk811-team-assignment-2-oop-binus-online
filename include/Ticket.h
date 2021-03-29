#include <string>

#ifndef Ticket_h
#define Ticket_h

class Ticket {
  private:
    std::string ticketCode;
    std::string trainName;
    std::string trainDestination;
    double ticketPrice;
    int ticketStock;
    
  public:
    friend void cetak_barang(Ticket& ticket);
};

#endif