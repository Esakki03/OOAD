
#ifndef ADD_H
#define ADD_H

#include <string>

/**
  * class Add
  * 
  */

class Add
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Add ();

  /**
   * Empty Destructor
   */
  virtual ~Add ();

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
  void Add_Client ()
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

  string Client_Name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Client_Name
   * @param new_var the new value of Client_Name
   */
  void setClient_Name (string new_var)   {
      Client_Name = new_var;
  }

  /**
   * Get the value of Client_Name
   * @return the value of Client_Name
   */
  string getClient_Name ()   {
    return Client_Name;
  }
private:


  void initAttributes () ;

};

#endif // ADD_H


#ifndef PERSONAL_LOAN_REQUEST_H
#define PERSONAL_LOAN_REQUEST_H

#include <string>

/**
  * class Personal_Loan_Request
  * 
  */

class Personal_Loan_Request
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Personal_Loan_Request ();

  /**
   * Empty Destructor
   */
  virtual ~Personal_Loan_Request ();

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
  void Report_Admin ()
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

  int Amount_Required;
  string Customer_Name;
  int Customer_Phone;
  string Customer_Address;
  string How_to_pay;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Amount_Required
   * @param new_var the new value of Amount_Required
   */
  void setAmount_Required (int new_var)   {
      Amount_Required = new_var;
  }

  /**
   * Get the value of Amount_Required
   * @return the value of Amount_Required
   */
  int getAmount_Required ()   {
    return Amount_Required;
  }

  /**
   * Set the value of Customer_Name
   * @param new_var the new value of Customer_Name
   */
  void setCustomer_Name (string new_var)   {
      Customer_Name = new_var;
  }

  /**
   * Get the value of Customer_Name
   * @return the value of Customer_Name
   */
  string getCustomer_Name ()   {
    return Customer_Name;
  }

  /**
   * Set the value of Customer_Phone
   * @param new_var the new value of Customer_Phone
   */
  void setCustomer_Phone (int new_var)   {
      Customer_Phone = new_var;
  }

  /**
   * Get the value of Customer_Phone
   * @return the value of Customer_Phone
   */
  int getCustomer_Phone ()   {
    return Customer_Phone;
  }

  /**
   * Set the value of Customer_Address
   * @param new_var the new value of Customer_Address
   */
  void setCustomer_Address (string new_var)   {
      Customer_Address = new_var;
  }

  /**
   * Get the value of Customer_Address
   * @return the value of Customer_Address
   */
  string getCustomer_Address ()   {
    return Customer_Address;
  }

  /**
   * Set the value of How_to_pay
   * @param new_var the new value of How_to_pay
   */
  void setHow_to_pay (string new_var)   {
      How_to_pay = new_var;
  }

  /**
   * Get the value of How_to_pay
   * @return the value of How_to_pay
   */
  string getHow_to_pay ()   {
    return How_to_pay;
  }
private:


  void initAttributes () ;

};

#endif // PERSONAL_LOAN_REQUEST_H
