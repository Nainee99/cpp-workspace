// CommissionEmployee class definition represents a commission employee.
#include <iostream>
#include <iomanip>
#include <string> // C++ standard string class
using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    // constructor
    CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
    {
        firstName = first;          // should validate
        lastName = last;            // should validate
        socialSecurityNumber = ssn; // should validate
        setGrossSales(sales);       // validate and store gross sales
        setCommissionRate(rate);    // validate and store commission rate
    }                               // end CommissionEmployee constructor

    // set first name
    void setFirstName(const string &first)
    {
        firstName = first; // should validate
    }                      // end function setFirstName

    string getFirstName() const // return first name
    {
        return firstName;
    } // end function getFirstName

    void setLastName(const string &last) // set last name
    {
        lastName = last; // should validate
    }                    // end function setLastName

    string getLastName() const // return last name
    {
        return lastName;
    } // end function getLastName

    void setSocialSecurityNumber(const string &ssn) // set SSN
    {
        socialSecurityNumber = ssn; // should validate
    }                               // end function setSocialSecurityNumber

    string getSocialSecurityNumber() const // return SSN
    {
        return socialSecurityNumber;
    } // end function getSocialSecurityNumber

    void setGrossSales(double sales) // set gross sales amount
    {
        if (sales >= 0.0)
            grossSales = sales;
        else
            throw invalid_argument("Gross sales must be >= 0.0");
    } // end function setGrossSales

    double getGrossSales() const // return gross sales amount
    {
        return grossSales;
    } // end function getGrossSales

    void setCommissionRate(double rate) // set commission rate (percentage)
    {
        if (rate > 0.0 && rate < 1.0)
            commissionRate = rate;
        else
            throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
    } // end function setCommissionRate

    double getCommissionRate() const // return commission rate
    {
        return commissionRate;
    } // end function getCommissionRate

    double earnings() const // calculate earnings
    {
        return commissionRate * grossSales;
    } // end function earnings

    void print() const // print CommissionEmployee object
    {
        cout << "commission employee: " << firstName << ' ' << lastName
             << "\nsocial security number: " << socialSecurityNumber
             << "\ngross sales: " << grossSales
             << "\ncommission rate: " << commissionRate;
    } // end function print

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;     // gross weekly sales
    double commissionRate; // commission percentage
};                         // end class CommissionEmployee
int main()
{

    // instantiate a CommissionEmployee object
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06);

    // set floating-point output formatting
    cout << fixed << setprecision(2);

    // get commission employee data
    cout << "Employee information obtained by get functions: \n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is " << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate() << endl;

    employee.setGrossSales(8000);   // set gross sales
    employee.setCommissionRate(.1); // set commission rate

    cout << "\nUpdated employee information output by print function: \n"
         << endl;
    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
} // end main
