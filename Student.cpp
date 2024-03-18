#include "Student.h"
#include <iostream>


//Default constructor
Student::Student() : student_id(""), 
                    first_name(""), 
                    last_name(""),
                    email(""),
                    age(0),
                    degree_program(Degree::SOFTWARE)
    {
        for (int i = 0; i < 3; ++i) 
        {
            days_per_class[i]=0;
        }
    }

//Overloaded constructor
Student::Student(const std::string& studentID, 
                const std::string& firstName, 
                const std::string& lastName,
                const std::string& email, 
                int age, 
                Degree (degree_program)
        {
            for (int i = 0; i < 3; ++i) 
            {
                this->days_per_class[i] = days_per_class[i];
            })
        }
    
//Destructor
~Student() {}   

//Getters
std::string get_student_id() const {return student_id;}
std::string get_first_name() const {return first_name;}
std::string get_last_name() const {return last_name;}
std::string get_email() const {return email;}
int get_age() const {return age;}
const int* get_days_per_class() const {return days_per_class;}
Degree get_degree_program() const {return degree_program;}

//Setters
void set_student_id(const string& student_id) {this->student_id = student_id;}
void set_first_name(const string& first_name) {this->first_name = first_name;}
void set_last_name(const string& last_name) {this->last_name = last_name;}
void set_email(const string& email) {this->email = email;}
void set_age(int age) {this->age=age;}
void set_days_per_class(const int days_per_class[]) 
{
    for (int i = 0; i < 3; ++i) 
    {
        this->days_per_class[i]=days_per_class[i];
    }
}
void set_Degree(Degree degree_program) { this->degree_program = degree_program;}

//Print student info
void Student::print() const 
{
    std::cout << "Student ID: " << student_id << "\t"
              << "First Name: " << first_name << "\t"
              << "Last Name: " << last_name << "\t"
              << "Email: " << email << "\t"
              << "Age: " << age << "\t"
              << "Days Per Class: {" << days_per_class[0] << ", " << days_per_class[1] << ", " << days_per_class[2] << "}\t"
              << "Degree Program: ";

    switch(degree_program) 
        {
            case Degree::SECURITY: std::cout << "SECURITY"; break;
            case Degree::NETWORK: std::cout << "NETWORK"; break;
            case Degree::SOFTWARE: std::cout << "SOFTWARE"; break;
        }
    std::cout << std::endl;
};