#pragma once

#include "Student.h"

class Roster
{
Student *class_roster[5];
int last_index {-1};

public:

Roster();
~Roster();

void add(const std::string& student_id,
        const std::string& first_name,
        const std::string& last_name,
        const std::string& email,
        int age,
        int days_per_class1,
        int days_per_class2,
        int days_per_class3,
        Degree degree_program);

void remove(const std::string& student_id);

void print_all() const;
void print_avg_days_per_class(const std::string& student_id) const;
void print_invalid_emails() const;
void print_by_degree(Degree degree_program) const;
};

