#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;
    string medicalHistory;
    string correctPassword = "admin123";

public:
    Patient(string n, int a) {
        name = n;
        age = a;
        medicalHistory = "";
    }

    void addHistory(string entry) {
        if (!medicalHistory.empty())
            medicalHistory += "; ";
        medicalHistory += entry;
    }

    string getHistory(string password) const {
        if (password == correctPassword)
            return medicalHistory;
        return "Access Denied";
    }

    string getBasicInfo() const {
        return "Name: " + name + ", Age: " + to_string(age);
    }
};

int main() {
    Patient p("Alice", 30);

    p.addHistory("Flu in 2023");
    p.addHistory("Allergy test 2024");

    cout << p.getBasicInfo() << endl;
    cout << p.getHistory("wrong") << endl;
    cout << p.getHistory("admin123") << endl;

    return 0;
}
