
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

  void Client_Name;
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
  void setClient_Name (void new_var)   {
      Client_Name = new_var;
  }

  /**
   * Get the value of Client_Name
   * @return the value of Client_Name
   */
  void getClient_Name ()   {
    return Client_Name;
  }
private:


  void initAttributes () ;

};

#endif // ADD_H


#ifndef HOME_LOAN_MANAGEMENT_H
#define HOME_LOAN_MANAGEMENT_H

#include <string>

/**
  * class Home_Loan_Management
  * 
  */

class Home_Loan_Management
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Home_Loan_Management ();

  /**
   * Empty Destructor
   */
  virtual ~Home_Loan_Management ();

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

  void Amount_Required;
  void Customer_Name;
  void Customer_Phone;
  void Customer_Address;
  void How_to_pay;
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
  void setAmount_Required (void new_var)   {
      Amount_Required = new_var;
  }

  /**
   * Get the value of Amount_Required
   * @return the value of Amount_Required
   */
  void getAmount_Required ()   {
    return Amount_Required;
  }

  /**
   * Set the value of Customer_Name
   * @param new_var the new value of Customer_Name
   */
  void setCustomer_Name (void new_var)   {
      Customer_Name = new_var;
  }

  /**
   * Get the value of Customer_Name
   * @return the value of Customer_Name
   */
  void getCustomer_Name ()   {
    return Customer_Name;
  }

  /**
   * Set the value of Customer_Phone
   * @param new_var the new value of Customer_Phone
   */
  void setCustomer_Phone (void new_var)   {
      Customer_Phone = new_var;
  }

  /**
   * Get the value of Customer_Phone
   * @return the value of Customer_Phone
   */
  void getCustomer_Phone ()   {
    return Customer_Phone;
  }

  /**
   * Set the value of Customer_Address
   * @param new_var the new value of Customer_Address
   */
  void setCustomer_Address (void new_var)   {
      Customer_Address = new_var;
  }

  /**
   * Get the value of Customer_Address
   * @return the value of Customer_Address
   */
  void getCustomer_Address ()   {
    return Customer_Address;
  }

  /**
   * Set the value of How_to_pay
   * @param new_var the new value of How_to_pay
   */
  void setHow_to_pay (void new_var)   {
      How_to_pay = new_var;
  }

  /**
   * Get the value of How_to_pay
   * @return the value of How_to_pay
   */
  void getHow_to_pay ()   {
    return How_to_pay;
  }
private:


  void initAttributes () ;

};

#endif // HOME_LOAN_MANAGEMENT_H
