//
// Created by tarek on 4/5/2024.
//

#ifndef PROJECT_LOAN_H
#define PROJECT_LOAN_H
#include "Custom_String_Class.h"
#include "Date.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "json.h"
using json = nlohmann::json;
class Loan  {
    int memberID;
    Custom_String_Class bookID;
    Date dueDate;
    Date borrowDate;
public:
    Loan();//hgh
    Loan(int, const Custom_String_Class&, Date);
    Custom_String_Class getBookID() const;
    int getMemberID() const;
    Date getDueDate();
    Date getBorrowDate() const;
    void setMemberID(int);
    void setBookID(const Custom_String_Class&);
    void setDueDate(Date);
    void setBorrowDate(Date);
    int calculateFines();//hhhh
    void displayDetails();
    static void loadLoans();
    static void saveLoans();
    static std::vector<Loan> Loans_List;
    static void displaylist();
};


#endif //PROJECT_LOAN_H
