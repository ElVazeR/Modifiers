#include <iostream>
#include <string>
#include "House.hpp"
class Student {
private:
	size_t id;
	static size_t students_number;
	std::string name;
	static std::string group; // При static в классе, дублируем в Глобальное пространство. 
	static const time_t max_age = 60; // Если /const, то сразу на месте написать значение.
	time_t age;

public:
	Student() : Student("", 0) {}
	Student(std::string name, time_t age) {
		this->name = name;
		setAge(age);
		id = ++students_number;
	}
	Student(const Student& other) : Student(other.name, other.age) {}
	std::string getName() const { return name; }
	void setName(std::string name) { this->name = name; }
	
	static std::string getGroup()  { return group; }
	static void setGroup(std::string group) { Student::group = group; }
	
	time_t getAge() const { return age; }
	void setAge(time_t age) {
		if (age >= 0 && age <= max_age)
			this->age = age;
		else
			this->age = 0;
	}
	time_t getId() const { return id; }
	static size_t getStudentsNumber() { return students_number; }
};
std::string Student::group = "Manhattan project"; // При static в классе, дублируем в Глобальное пространство. 
size_t Student::students_number = 0;



int main() {
	setlocale(LC_ALL, "Russian");



	// Модификации членов класса.
	/*//std::cout << Student::group << std::endl;

	Student s1("Robert Downey Jr.", 59), s2("Cillian Murphy", 48);
	std::cout << s1.getGroup() << std::endl;
	std::cout << s2.getGroup() << std::endl;
	Student::setGroup("USA ARMY"); // Если метод статический, не обязателен объект класса. Можно обратиться через Student::
	std::cout << s1.getGroup() << std::endl;
	std::cout << s2.getGroup() << std::endl;
	
	std::cout << s1.getAge() << std::endl;
	std::cout << s2.getAge() << std::endl;
	std::cout << Student::getGroup() << std::endl;

	const Student s3("Matt Damon", 53);
	//s3.setName("Rumpel"); // ОШИБКА!
	std::cout << s3.getName() << std::endl;
	s3.setGroup("shrek4");
	std::cout << s3.getGroup() << std::endl;
	std::cout << s3.getId() << std::endl;
	*/

	House h1("Frunze", 60, 2);
	h1.appFlat(1, 1);
	h1.printFlat(0);

	return 0;
}