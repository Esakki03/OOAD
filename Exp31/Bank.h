
#ifndef AGRICLUTUREL_LOAN_MANAGEMENT_SYSTEM_H
#define AGRICLUTUREL_LOAN_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class Agricluturel_Loan_Management_System
  * 
  */

class Agricluturel_Loan_Management_System
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Agricluturel_Loan_Management_System ();

  /**
   * Empty Destructor
   */
  virtual ~Agricluturel_Loan_Management_System ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void Process_Agri_lloan_Applicant ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // AGRICLUTUREL_LOAN_MANAGEMENT_SYSTEM_H


#ifndef BANK_H
#define BANK_H

#include <string>

/**
  * class Bank
  * 
  */

class Bank
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bank ();

  /**
   * Empty Destructor
   */
  virtual ~Bank ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void Excecutive_Employee;
  void Employee_Id;
  void Start_date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Excecutive_Employee
   * @param new_var the new value of Excecutive_Employee
   */
  void setExcecutive_Employee (void new_var)   {
      Excecutive_Employee = new_var;
  }

  /**
   * Get the value of Excecutive_Employee
   * @return the value of Excecutive_Employee
   */
  void getExcecutive_Employee ()   {
    return Excecutive_Employee;
  }

  /**
   * Set the value of Employee_Id
   * @param new_var the new value of Employee_Id
   */
  void setEmployee_Id (void new_var)   {
      Employee_Id = new_var;
  }

  /**
   * Get the value of Employee_Id
   * @return the value of Employee_Id
   */
  void getEmployee_Id ()   {
    return Employee_Id;
  }

  /**
   * Set the value of Start_date
   * @param new_var the new value of Start_date
   */
  void setStart_date (void new_var)   {
      Start_date = new_var;
  }

  /**
   * Get the value of Start_date
   * @return the value of Start_date
   */
  void getStart_date ()   {
    return Start_date;
  }
private:


  void initAttributes () ;

};

#endif // BANK_H
