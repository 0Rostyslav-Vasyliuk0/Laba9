#include "passenger_plane.h"
#include <limits>

// Реалізація конструктора класу "Пасажирський літак"
PassengerPlane::PassengerPlane() : numberOfPassengers(0) {}

// Реалізація деструктора класу "Пасажирський літак"
PassengerPlane::~PassengerPlane() {}

// Введення даних про пасажирський літак
void PassengerPlane::inputPassengerPlane() {
    inputAirplane();

    while (true) {
        std::cout << "Введіть кількість пасажирів: ";
        std::cin >> numberOfPassengers;
        if (std::cin.fail() || numberOfPassengers <= 0 || numberOfPassengers > capacity) {
            std::cerr << "Помилка: Кількість пасажирів має бути додатною числовою та не перевищувати місткість літака (" << capacity << "). Спробуйте ще раз." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

// Виведення даних про пасажирський літак
void PassengerPlane::displayPassengerPlane() const {
    displayAirplane();
    std::cout << "Кількість пасажирів: " << numberOfPassengers << std::endl;
}

// Обчислення вартості обслуговування
double PassengerPlane::calculateServiceCost() const {
    return numberOfPassengers * 50.0;
}
