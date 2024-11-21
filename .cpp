#include <iostream>
#include <string>
using namespace std;

// Temel Person sınıfı
class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    virtual string displayInfo() {
        return "Ad: " + name + ", Yaş: " + to_string(age);
    }
};

// Student sınıfı
class Student : public Person {
private:
    string studentID;

public:
    Student(string name, int age, string studentID) : Person(name, age), studentID(studentID) {}

    string displayInfo() override {
        return Person::displayInfo() + ", Öğrenci No: " + studentID;
    }
};

// Teacher sınıfı
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string name, int age, string subject) : Person(name, age), subject(subject) {}

    string displayInfo() override {
        return Person::displayInfo() + ", Ders: " + subject;
    }
};

// Ana Program
int main() {
    // Öğrenci örneği oluşturma
    Student student("Seydi Emir", 20, "12345");
    cout << "Öğrenci Bilgileri: " << student.displayInfo() << endl;

    // Öğretmen örneği oluşturma
    Teacher teacher("Elif Hoca", 40, "Matematik");
    cout << "Öğretmen Bilgileri: " << teacher.displayInfo() << endl;

    return 0;
}
