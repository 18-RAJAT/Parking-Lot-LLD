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

int main()
{
    ParkingLot parkingLot;
    
    cout<<"System Design for Parking Lot"<<"\n";

    cout<<"Enter the details of the Parking Lot: "<<"\n";
    
    cout<<"Parking Lot Name: ";
    parkingLot.parkingLotName;
    cin>>parkingLot.parkingLotName;

    cout<<"Country: ";
    parkingLot.address.country;
    cin>>parkingLot.address.country;

    cout<<"State: ";
    parkingLot.address.state;
    cin>>parkingLot.address.state;
    
    cout<<"City: ";
    parkingLot.address.city;
    cin>>parkingLot.address.city;
    
    cout<<"Street: ";
    parkingLot.address.street;
    cin>>parkingLot.address.street;
    
    cout<<"Pin Code: ";
    parkingLot.address.pinCode;
    cin>>parkingLot.address.pinCode;

    ParkingFloor parkingFloor;

    cout<<"Level Id: ";
    parkingFloor.levelId;
    cin>>parkingFloor.levelId;

    ParkingSpace parkingSpace;

    cout<<"Space Id: ";
    parkingSpace.spaceId;
    cin>>parkingSpace.spaceId;

    ParkingDisplayBoard parkingDisplayBoard;

    cout<<"Free Spots Available for Bike Parking: ";
    parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::BikeParking];
    cin>>parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::BikeParking];

    cout<<"Free Spots Available for Car Parking: ";
    parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::CarParking];
    cin>>parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::CarParking];

    cout<<"Free Spots Available for Heavy Vehicle Parking: ";
    parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::HeavyVehicleParking];
    cin>>parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::HeavyVehicleParking];

    Admin admin;
    admin.addParkingFloor(parkingLot, parkingFloor);
    admin.addParkingSpace(parkingFloor, parkingSpace);
    admin.addParkingDisplayBoard(parkingFloor, parkingDisplayBoard);

    ParkingAttendant parkingAttendant;

    cout<<"Name of the Parking Attendant: ";
    parkingAttendant.name;
    cin>>parkingAttendant.name;
    
    cout<<"Email id of the Parking Attendant: ";
    parkingAttendant.email;
    cin>>parkingAttendant.email;

    parkingLot.updateParkingAttendant(parkingAttendant, 1);

    Vehicle vehicle;

    cout<<"License Number of the Vehicle: "<<"\n";//ex: MH 12 AB 1234
    vehicle.licenseNumber;
    cin>>vehicle.licenseNumber;
    
    vehicle.vehicleType;

    parkingAttendant.processVehicleEntry(vehicle);

    PaymentInfo paymentInfo;

    cout<<"Amount for Parking: ";
    paymentInfo.amount;
    cin>>paymentInfo.amount;
    
    cout<<"Payment Time: ";
    paymentInfo.paymentTime;
    cin>>paymentInfo.paymentTime;
    
    cout<<"Transaction Id: ";
    paymentInfo.transactionId;
    cin>>paymentInfo.transactionId;

    cout<<"Dashboard for Parking Lot: "<<"\n";
    cout<<parkingLot.parkingLotName<<"\n";
    cout<<parkingLot.address.country<<"\n";
    cout<<parkingLot.address.state<<"\n";
    cout<<parkingLot.address.city<<"\n";
    cout<<parkingLot.address.street<<"\n";
    cout<<parkingLot.address.pinCode<<"\n";

    cout<<"Parking Floor: "<<"\n";
    cout<<parkingFloor.levelId<<"\n";

    cout<<"Parking Space: "<<"\n";
    cout<<parkingSpace.spaceId<<"\n";

    cout<<"Parking Display Board: "<<"\n";
    cout<<parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::BikeParking]<<"\n";
    cout<<parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::CarParking]<<"\n";
    cout<<parkingDisplayBoard.freeSpotsAvailable[ParkingSpaceType::HeavyVehicleParking]<<"\n";

    cout<<"Parking Attendant: "<<"\n";
    cout<<parkingAttendant.name<<"\n";
    cout<<parkingAttendant.email<<"\n";

    cout<<"Vehicle: "<<"\n";
    cout<<vehicle.licenseNumber<<"\n";
    // cout<<vehicle.vehicleType<<"\n";

    cout<<"Payment Info: "<<"\n";
    cout<<paymentInfo.amount<<"\n";
    cout<<paymentInfo.paymentTime<<"\n";
    cout<<paymentInfo.transactionId<<"\n";
    return 0;
}