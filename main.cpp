#include "passenger_plane.h"
#include "cargo_plane.h"
#include "friend_class.h"
#include <iostream>

int main() {
    PassengerPlane passengerPlane;
    CargoPlane cargoPlane;
    FriendClass helper;

    std::cout << "Введення даних пасажирського літака:" << std::endl;
    helper.inputPassengerPlane(passengerPlane);

    std::cout << "\nВведення даних транспортного літака:" << std::endl;
    helper.inputCargoPlane(cargoPlane);

    std::cout << "\nДані про пасажирський літак:" << std::endl;
    helper.displayPassengerPlane(passengerPlane);
    std::cout << "Вартість обслуговування: $" << helper.calculatePassengerServiceCost(passengerPlane) << std::endl;

    std::cout << "\nДані про транспортний літак:" << std::endl;
    helper.displayCargoPlane(cargoPlane);
    std::cout << "Вартість обслуговування: $" << helper.calculateCargoServiceCost(cargoPlane) << std::endl;

    return 0;
}
