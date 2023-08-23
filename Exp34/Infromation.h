
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


#ifndef INFROMATION_H
#define INFROMATION_H

#include <string>

/**
  * class Infromation
  * 
  */

class Infromation
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Infromation ();

  /**
   * Empty Destructor
   */
  virtual ~Infromation ();

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

  void Customer_Infromation;
  void Payment_Infromation;
  void Budget_Information;
  void Defaulters_Information;
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
  void setCustomer_Infromation (void new_var)   {
      Customer_Infromation = new_var;
  }

  /**
   * Get the value of Customer_Infromation
   * @return the value of Customer_Infromation
   */
  void getCustomer_Infromation ()   {
    return Customer_Infromation;
  }

  /**
   * Set the value of Payment_Infromation
   * @param new_var the new value of Payment_Infromation
   */
  void setPayment_Infromation (void new_var)   {
      Payment_Infromation = new_var;
  }

  /**
   * Get the value of Payment_Infromation
   * @return the value of Payment_Infromation
   */
  void getPayment_Infromation ()   {
    return Payment_Infromation;
  }

  /**
   * Set the value of Budget_Information
   * @param new_var the new value of Budget_Information
   */
  void setBudget_Information (void new_var)   {
      Budget_Information = new_var;
  }

  /**
   * Get the value of Budget_Information
   * @return the value of Budget_Information
   */
  void getBudget_Information ()   {
    return Budget_Information;
  }

  /**
   * Set the value of Defaulters_Information
   * @param new_var the new value of Defaulters_Information
   */
  void setDefaulters_Information (void new_var)   {
      Defaulters_Information = new_var;
  }

  /**
   * Get the value of Defaulters_Information
   * @return the value of Defaulters_Information
   */
  void getDefaulters_Information ()   {
    return Defaulters_Information;
  }
private:


  void initAttributes () ;

};

#endif // INFROMATION_H
