# Temel Person sınıfı
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display_info(self):
        return f"Ad: {self.name}, Yaş: {self.age}"

# Student sınıfı
class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id

    def display_info(self):
        return f"{super().display_info()}, Öğrenci No: {self.student_id}"

# Teacher sınıfı
class Teacher(Person):
    def __init__(self, name, age, subject):
        super().__init__(name, age)
        self.subject = subject

    def display_info(self):
        return f"{super().display_info()}, Ders: {self.subject}"

# Ana Program
def main():
    # Öğrenci örneği oluşturma
    student = Student("Seydi Emir", 20, "12345")
    print("Öğrenci Bilgileri:", student.display_info())

    # Öğretmen örneği oluşturma
    teacher = Teacher("Elif Hoca", 40, "Matematik")
    print("Öğretmen Bilgileri:", teacher.display_info())

if __name__ == "__main__":
    main()
