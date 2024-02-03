#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
include "Degree.h"


class Student {
private:
    std::string student_id {};
    std::string first_name {};
    std::string last_name {};
    std::string email {};
    int age
    int days_per_class[3] {};
    Degree degree_program {};
    
public:
    //Constructors
    Student();
    Student(const std::string& student_id, 
            const std::string& first_name, 
            const std::string& last_name,
            const std::string& email,
            int age,
            const int days_per_class[],
            Degree degree_program);
            
    //Destructor
    ~Student ();
    
    //Getters
    std::string get_student_id() const;
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_email();
    int get_age() const;
    const int* get_days_per_class() const;
    Degree get_degree_program() const;
    
    //Setters
    void set_student_id(const std::string& student_id);
    void set_first_name(const std::string& first_name);
    void set_last_name(const std::string& last_name);
    void set_email(const std::string& email);
    void set_age(int age);
    void set_days_per_class(const int days_per_class[]);
    void set_Degree(Degree degree_program);
    
    //Print student info
    void print() const;

};

#endif // STUDENT_H
