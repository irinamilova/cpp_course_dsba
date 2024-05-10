/*
В рамках организации благотворительного марафона, необходимо 
создать программу для регистрации участников, которая строго 
проверяет возрастные ограничения. Марафон открыт для участников 
в возрасте от 18 до 60 лет включительно. Программа должна запросить 
у пользователя его возраст и выбранную дистанцию, а затем проверить, 
удовлетворяет ли возраст условиям участия в марафоне. 
Если условия нарушены, программа должна сгенерировать исключение.

Задачи:
Определить класс исключения AgeRestrictionException, 
который должен содержать сообщение об ошибке, указывающее на
 то, что возраст участника не соответствует требованиям.
Создать функцию registerParticipant, которая принимает возраст
 участника и выбранную дистанцию. Функция должна проверять, 
 соответствует ли возраст ограничениям. Если нет, функция должна 
 бросить исключение AgeRestrictionException.
В функции main реализовать запрос на ввод возраста и дистанции
 от пользователя, вызов функции registerParticipant и обработку
 возможного исключения, выводящую сообщение об ошибке, если возраст
  участника не попадает в допустимый диапазон.
Требования:
Использовать механизм исключений C++ для обработки ошибок, 
связанных с возрастными ограничениями.
Предусмотреть корректную обработку пользовательского ввода, включая
 ввод нечисловых значений.
Вывести подтверждение успешной регистрации, если возраст участника 
соответствует требованиям.

Введите ваш возраст: 25
Выберите дистанцию (5km, 10km, 21km): 10km
Регистрация успешно завершена!

Введите ваш возраст: 17
Выберите дистанцию (5km, 10km, 21km): 5km
Ошибка: Ваш возраст не соответствует требованиям для участия в
 марафоне.

*/

#include <iostream>
#include <stdexcept>
#include <string>

class AgeRestrictionException : public std::runtime_error {
public:
    explicit AgeRestrictionException(const std::string& message)
        : std::runtime_error(message) {}
};

void registerParticipant(int age, const std::string& distance) {
    if (age < 18 || age > 60) {
        throw AgeRestrictionException("Ваш возраст не соответствует требованиям для участия в марафоне.");
    }
    std::cout << "Регистрация успешно завершена!" << std::endl;
}

int main() {
    int age;
    std::string distance;

    std::cout << "Введите ваш возраст: ";
    if (!(std::cin >> age)) {
        std::cerr << "Ошибка: некорректный ввод." << std::endl;
        return 1;
    }

    std::cout << "Выберите дистанцию (5km, 10km, 21km): ";
    std::cin >> distance;

    try {
        registerParticipant(age, distance);
    } catch (const AgeRestrictionException& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
