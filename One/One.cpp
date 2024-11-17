#include <iostream>
#include <string>
using namespace std;

// Klasa bazowa
class Computer {
protected:
    string brand; // Marka
    string model; // Model
public:
    // Konstruktor domyślny
    Computer() : brand("Unknown"), model("Unknown") {}

    // Metoda do wprowadzania ogólnych danych
    void inputBaseData() {
        cout << "Marka: ";
        cin >> brand;
        cout << "Model: ";
        cin >> model;
    }

    // Metoda do wyświetlania ogólnych danych
    void displayBaseData() const {
        cout << "Marka: " << brand << ", Model: " << model << endl;
    }
};

// Klasa pochodna dla PC
class Desktop : public Computer {
private:
    string caseType; // Rodzaj obudowy
public:
    // Konstruktor domyślny
    Desktop() : caseType("Unknown") {}

    // Metoda do wprowadzania danych
    void inputData() {
        inputBaseData(); // Wprowadzanie ogólnych danych
        cout << "Rodzaj obudowy: ";
        cin >> caseType;
    }

    // Metoda do wyświetlania danych
    void displayData() const {
        displayBaseData(); // Wyświetlanie ogólnych danych
        cout << "Rodzaj obudowy: " << caseType << endl;
    }
};

// Klasa pochodna dla laptopów
class Laptop : public Computer {
private:
    double screenDiagonal; // Długość przekątnej ekranu
    string bodyColor;      // Kolor obudowy
public:
    // Konstruktor domyślny
    Laptop() : screenDiagonal(0.0), bodyColor("Unknown") {}

    // Metoda do wprowadzania danych
    void inputData() {
        inputBaseData(); // Wprowadzanie ogólnych danych
        cout << "Dlugosc przekatnej: ";
        cin >> screenDiagonal;
        cout << "Kolor: ";
        cin >> bodyColor;
    }

    // Metoda do wyświetlania danych
    void displayData() const {
        displayBaseData(); // Wyświetlanie ogólnych danych
        cout << "Przekatna: " << screenDiagonal << " cali" << endl;
        cout << "Kolor: " << bodyColor << endl;
    }
};

// Funkcja główna
int main() {
    Laptop myLaptop;
    Desktop myDesktop;

    cout << "Dane do laptopa:" << endl;
    myLaptop.inputData();
    cout << endl;

    cout << "Dane dla PC:" << endl;
    myDesktop.inputData();
    cout << endl;

    cout << "Dane o laptopie:" << endl;
    myLaptop.displayData();
    cout << endl;

    cout << "Dane o PC:" << endl;
    myDesktop.displayData();
    cout << endl;

    return 0;
}
