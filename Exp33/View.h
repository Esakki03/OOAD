
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


#ifndef VIEW_H
#define VIEW_H

#include <string>

/**
  * class View
  * 
  */

class View
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  View ();

  /**
   * Empty Destructor
   */
  virtual ~View ();

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
  void View_client_info ()
  {
  }


  /**
   */
  void Calculate_amt ()
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

  string Customer_Infromation;
  string Client_Account;
  int Amount_paid;
  int Amount_remaining;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Customer_Infromation
   * @param new_var the new value of Customer_Infromation
   */
  void setCustomer_Infromation (string new_var)   {
      Customer_Infromation = new_var;
  }

  /**
   * Get the value of Customer_Infromation
   * @return the value of Customer_Infromation
   */
  string getCustomer_Infromation ()   {
    return Customer_Infromation;
  }

  /**
   * Set the value of Client_Account
   * @param new_var the new value of Client_Account
   */
  void setClient_Account (string new_var)   {
      Client_Account = new_var;
  }

  /**
   * Get the value of Client_Account
   * @return the value of Client_Account
   */
  string getClient_Account ()   {
    return Client_Account;
  }

  /**
   * Set the value of Amount_paid
   * @param new_var the new value of Amount_paid
   */
  void setAmount_paid (int new_var)   {
      Amount_paid = new_var;
  }

  /**
   * Get the value of Amount_paid
   * @return the value of Amount_paid
   */
  int getAmount_paid ()   {
    return Amount_paid;
  }

  /**
   * Set the value of Amount_remaining
   * @param new_var the new value of Amount_remaining
   */
  void setAmount_remaining (int new_var)   {
      Amount_remaining = new_var;
  }

  /**
   * Get the value of Amount_remaining
   * @return the value of Amount_remaining
   */
  int getAmount_remaining ()   {
    return Amount_remaining;
  }
private:


  void initAttributes () ;

};

#endif // VIEW_H
