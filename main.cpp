#include <iostream>

using namespace std;

int main () {

    const string student_data[] = 
        {
            "A1, John, Smith, John1989@gm ail.com, 20, 30, 35, 40, SECURITY",
            "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK",
            "A3, Jack, Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE",
            "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
            "A5, Arianne, Ferrer, ferr.arianne5@gmail.com, 25, 30, 32, 28, SOFTWARE" 
        };
        
    // Print all students
    roster.print_all();

    // Print invalid emails
    roster.print_invalid_emails();

    // Print average days in course for a student
    roster.print_avg_days_per_class("A1");

    // Print students by degree program
    roster.print_by_degree(Degree::SOFTWARE);

    // Remove a student
    roster.remove("A3");
    
    // Print all students
    roster.print_all();

    // Attempt to remove the same student again to demonstrate error handling
    roster.remove("A3");

    return 0;
}
