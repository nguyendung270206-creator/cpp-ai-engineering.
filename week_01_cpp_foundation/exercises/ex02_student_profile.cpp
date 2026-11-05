#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    double score;

    std::cout << "Nhap ten sinh vien: ";
    std::getline(std::cin, name);

    std::cout << "Nhap tuoi: ";
    std::cin >> age;

    std::cout << "Nhap diem trung binh: ";
    std::cin >> score;

    std::cout << "\n--- THONG TIN SINH VIEN ---" << std::endl;
    std::cout << "Ho va ten: " << name << std::endl;
    std::cout << "Tuoi: " << age << std::endl;
    std::cout << "Diem TB: " << score << std::endl;

    return 0;
}