#include "Part.h"

Part::Part(double amount) : amount(amount) {
    // Obtention du temps actuel
    auto now = std::chrono::system_clock::now();
    // Conversion du temps en std::time_t
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    // Convertir en une structure de temps tm pour une utilisation facile
    std::tm* current_time = std::localtime(&now_time);
    // Création d'un objet Date avec la date actuelle
    date = Date(current_time->tm_year + 1900, current_time->tm_mon + 1, current_time->tm_mday);
}

Part::Part(double amount, Date date) : amount(amount), date(date) {}

double Part::getAmount() const {
    return amount;
}

Date Part::getDate() const {
    return date;
}
