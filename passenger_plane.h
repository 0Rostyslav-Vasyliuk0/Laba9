#ifndef PASSENGER_PLANE_H
#define PASSENGER_PLANE_H

#include "airplane.h"

// Клас "Пасажирський літак", успадкований від базового класу "Літак"
class PassengerPlane : public Airplane {
private:
    int numberOfPassengers;

public:
    PassengerPlane();
    ~PassengerPlane();

    void inputPassengerPlane();
    void displayPassengerPlane() const;
    double calculateServiceCost() const override;

    friend class FriendClass;
};

#endif
