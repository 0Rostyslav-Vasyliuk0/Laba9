#include "cargo_plane.h"
#include <limits>

// Реалізація конструктора класу "Вантажний літак"
CargoPlane::CargoPlane() : cargoWeight(0) {}

// Реалізація деструктора класу "Вантажний літак"
CargoPlane::~CargoPlane() {}

// Введення даних про вантажний літак
void CargoPlane::inputCargoPlane() {
    inputAirplane();

    while (true) {
        std::cout << "Введіть вагу вантажу: ";
        std::cin >> cargoWeight;
        if (std::cin.fail() || cargoWeight <= 0 || cargoWeight > capacity) {
            std::cerr << "Помилка: Вага вантажу має бути додатною числовою та не перевищувати місткість літака (" << capacity << " кг). Спробуйте ще раз." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

// Виведення даних про вантажний літак
void CargoPlane::displayCargoPlane() const {
    displayAirplane();
    std::cout << "Вага вантажу: " << cargoWeight << " кг" << std::endl;
}

// Обчислення вартості обслуговування
double CargoPlane::calculateServiceCost() const {
    return cargoWeight * 0.5;
}
