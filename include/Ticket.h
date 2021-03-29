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
    Ticket(std::string code, std::string name, std::string destination, double price, int stock);
    Ticket(const Ticket& ticket);
    ~Ticket();
    friend void cetak_barang(Ticket& ticket);
};

#endif