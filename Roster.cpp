#include "Roster.h"
#include <iostream>

Roster::Roster()
{
//Ensures clear pointers
for (int i {0}; i < 5; ++i) 
    {
    class_roster[i] = nullptr;
    }
}

Roster::~Roster() 
{
    // Deallocate memory used by students.
    for (int i = 0; i <= last_index; ++i) 
        {
        delete class_roster[i];
        class_roster[i] = nullptr; 
        }
}

void Roster::add(const std::string& student_id, 
                const std::string& first_name,
                const std::string& last_name,
                const std::string& email,
                int age,
                int days_per_class1,
                int days_per_class2,
                int days_per_class3,
                Degree degree_program)
                {
                    int days_per_class[3] = {days_per_class1, days_per_class2, days_per_class3};
                    class_roster[++last_index] = new Student(student_id, first_name, last_name, email, age, days_per_class, degree_program);
                }
                
void Roster::remove(const std::string& student_id) 
{
    bool found = false;
    for (int i = 0; i < last_index; ++i)
        {
            if (class_roster[i] && class_roster[i]->get_student_id() == student_id)
                {
                    delete class_roster[i];
                    class_roster[i] = nullptr;
                    found = true;
                    std::cout << "Student with ID " << student_id << " has been removed." << std::endl;
                    break;
                }
        }
        
if (!found)
    {
        std::cout << "Student with ID " << student_id << " not found." << std::endl;
    }
}

void Roster::print_all() const 
{
    for (int i = 0; i <=last_index; ++i)
        {
            class_roster[i]->print();
        }
}

void Roster::print_avg_days_per_class(const std::string& student_id) const 
{
    for (int i = 0; i <= last_index; ++i) 
        {
            if (class_roster[i] && class_roster[i]->get_student_id() == student_id) 
                {
                    int* days = class_roster[i]->get_days_per_class();
                    std::cout << "Average days in class for student ID " << student_id << ": "
                              << (days[0] + days[1] + days[2]) / 3 << std::endl;
                    return;
                }
        }
}

void Roster::print_invalid_emails() const 
{
    std::cout << "Invalid emails: " << std:: endl;
    for (int i = 0; i <= last_index; ++i) {
        std::string email = class_roster[i]->get_email();
        if (email.find('@') == std::string::npos || email.find('.') == std::string::npos || email.find(' ') != std::string::npos) {
            std::cout << email << std::endl;
        }
    }
}

void Roster::print_by_degree(Degree degree_program) const {
    for (int i = 0; i <= last_index; ++i) {
        if (class_roster[i]->get_degree_program() == degree_program) {
            class_roster[i]->print();
        }
    }
}

