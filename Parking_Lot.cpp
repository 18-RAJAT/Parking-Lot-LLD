#include<bits/stdc++.h>
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
    HeavyVehicleParking//Truck, Bus etc
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
    time_t paymentTime;//time_t is a data type in the ISO C library defined for storing system time values.
    int transactionId;
    //add reference to parking ticket
    PaymentStatus status;
    PaymentType type;
};

class Payment
{
    public:
    bool addPaymentInfo(PaymentInfo paymentInfo);
};

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

class ParkingDisplayBoard
{
    public:
    map<ParkingSpaceType,int>freeSpotsAvailable;
    void updateFreeSpotsAvailable(ParkingSpaceType type,int spaces);
};

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

class Gate
{
    public:
    int gateId;
    bool isEntry;
};

class Entrance:public Gate
{
    public:
    ParkingTicket getParkingTicket(Vehicle vehicle);
};

class Exit:public Gate
{
    public:
    ParkingTicket payForParking(ParkingTicket ticket,PaymentType Payment);
};

class Vehicle
{
    public:
    string licenseNumber;
    VehicleType vehicleType;
    ParkingTicket parkingTicket;
    PaymentInfo paymentInfo;
};

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

class Account
{
    public:
    string name;
    string email;
    string password;
    string empId;
    Address address;
};

class Admin
{
    public:
    bool addParkingFloor(ParkingLot parkingLot,ParkingFloor floor);
    bool addParkingSpace(ParkingFloor floor,ParkingSpace space);
    bool addParkingDisplayBoard(ParkingFloor floor,ParkingDisplayBoard displayBoard);
};

class ParkingAttendant:public Account
{
    public:
    Payment paymentService;
    bool processVehicleEntry(Vehicle vehicle);
    bool processPayment(ParkingTicket ticket,PaymentType paymentType);
};