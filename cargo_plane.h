#ifndef CARGO_PLANE_H
#define CARGO_PLANE_H

#include "airplane.h"

// Клас "Вантажний літак", успадкований від базового класу "Літак"
class CargoPlane : public Airplane {
private:
    int cargoWeight;

public:
    CargoPlane();
    ~CargoPlane();

    void inputCargoPlane();
    void displayCargoPlane() const;
    double calculateServiceCost() const override;

    friend class FriendClass;
};

#endif
    