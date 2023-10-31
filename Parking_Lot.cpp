#include <bits/stdc++.h>
using namespace std;

class Address
{
public:
    string country;
    string state;
    string city;
    string street;
    string pinCode;
};

enum class PaymentType
{
    Cash,
    CreditCard,
    DebitCard,
    UPI
};

enum class ParkingSpaceType
{
    BikeParking,
    CarParking,
    HeavyVehicleParking // Truck, Bus etc
};

enum class VehicleType
{
    Bike,
    Car,
    HeavyVehicle
};

enum class ParkingTicketStatus
{
    Active,
    Paid,
    Lost
};

enum class PaymentStatus
{
    Paid,
    Unpaid,
    Pending,
    Completed,
    Declined,
    Cancelled,
    Refunded
};

class PaymentInfo
{
public:
    double amount;
    time_t paymentTime; // time_t is a data type in the ISO C library defined for storing system time values.
    int transactionId;
    // add reference to parking ticket
    PaymentStatus status;
    PaymentType type;
};

class Payment
{
public:
    bool addPaymentInfo(PaymentInfo paymentInfo);
};

bool Payment ::addPaymentInfo(PaymentInfo PaymentInfo)
{
    return true;
}

class ParkingTicket
{
    int ticketId;
    int levelId;
    int spaceId;
    time_t vehicleEntryDateTime;
    time_t vehicleExitDateTime;
    ParkingTicketStatus status;
    ParkingSpaceType spaceType;
    double totalCost;
    ParkingTicketStatus Ticket;

    void updateTotalCost();
    void updateVehicleExitTime(time_t vehicleExitTime);
};

void ParkingTicket::updateTotalCost()
{
}

void ParkingTicket::updateVehicleExitTime(time_t VehicleExitTime)
{
}

class ParkingDisplayBoard
{
public:
    map<ParkingSpaceType,int> freeSpotsAvailable;
    void updateFreeSpotsAvailable(ParkingSpaceType type,int spaces);
};

void ParkingDisplayBoard::updateFreeSpotsAvailable(ParkingSpaceType type,int spaces)
{
    //add
}

class ParkingSpace
{
public:
    int spaceId;
    bool isFree;
    double costPerHour;
    ParkingSpaceType type;
};

class ParkingFloor
{
public:
    int levelId;
    vector<ParkingSpace>parkingSpaces;
    ParkingDisplayBoard displayBoard;
};

class Vehicle
{
public:
    string licenseNumber;
    VehicleType vehicleType;
    ParkingTicket parkingTicket;
    PaymentInfo paymentInfo;
};

class Gate
{
public:
    int gateId;
    bool isEntry;
};

class Entrance : public Gate
{
public:
    ParkingTicket getParkingTicket(Vehicle vehicle);
};

ParkingTicket Entrance::getParkingTicket(Vehicle vehicle)
{
    ParkingTicket obj;
    return obj;
}

class Exit : public Gate
{
public:
    ParkingTicket payForParking(ParkingTicket ticket, PaymentType Payment);
};

ParkingTicket Exit::payForParking(ParkingTicket ticket, PaymentType Payment)
{
    return ticket;
}

class Account
{
public:
    string name;
    string email;
    string password;
    string empId;
    Address address;
};


class ParkingAttendant : public Account
{
public:
    Payment paymentService;
    bool processVehicleEntry(Vehicle vehicle);
    bool processPayment(ParkingTicket ticket, PaymentType paymentType);
};

bool ParkingAttendant::processVehicleEntry(Vehicle vehicle)
{
    return true;
}

bool ParkingAttendant::processPayment(ParkingTicket ticket, PaymentType paymentType)
{
    return true;
}

class ParkingLot
{
public:
    vector<ParkingFloor>parkingFloors;
    vector<Gate>entrance;
    vector<Gate>exit;
    Address address;
    string parkingLotName;

    bool isParkingSpaceAvailableForVehicle(Vehicle vehicle);
    bool updateParkingAttendant(ParkingAttendant parkingAttendant,int gateId);
};

bool ParkingLot::isParkingSpaceAvailableForVehicle(Vehicle vehicle)
{
    return true;
}

bool ParkingLot::updateParkingAttendant(ParkingAttendant parkingAttendant,int gateId)
{
    return true;
}

class Admin
{
public:
    bool addParkingFloor(ParkingLot parkingLot,ParkingFloor floor);
    bool addParkingSpace(ParkingFloor floor,ParkingSpace space);
    bool addParkingDisplayBoard(ParkingFloor floor,ParkingDisplayBoard displayBoard);
};

bool Admin::addParkingFloor(ParkingLot parkingLot,ParkingFloor floor)
{
    return true;
}

bool Admin::addParkingSpace(ParkingFloor floor,ParkingSpace space)
{
    return true;
}

bool Admin::addParkingDisplayBoard(ParkingFloor floor,ParkingDisplayBoard displayBoard)
{
    return true;
}