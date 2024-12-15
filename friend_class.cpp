#include "friend_class.h"

void FriendClass::inputPassengerPlane(PassengerPlane& plane) {
    plane.inputPassengerPlane();
}

void FriendClass::inputCargoPlane(CargoPlane& plane) {
    plane.inputCargoPlane();
}

void FriendClass::displayPassengerPlane(const PassengerPlane& plane) const {
    plane.displayPassengerPlane();
}

void FriendClass::displayCargoPlane(const CargoPlane& plane) const {
    plane.displayCargoPlane();
}

double FriendClass::calculatePassengerServiceCost(const PassengerPlane& plane) const {
    return plane.calculateServiceCost();
}

double FriendClass::calculateCargoServiceCost(const CargoPlane& plane) const {
    return plane.calculateServiceCost();
}
