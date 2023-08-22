
#ifndef CUSTOMER_CLASS_H
#define CUSTOMER_CLASS_H

#include <string>

/**
  * class Customer_class
  * 
  */

class Customer_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer_class ();

  /**
   * Empty Destructor
   */
  virtual ~Customer_class ();

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
  void Add_Customer ()
  {
  }


  /**
   */
  void Edit_customer ()
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

  void Customer_Id;
  void Customer_Details;
  void Customer_mobile;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Customer_Id
   * @param new_var the new value of Customer_Id
   */
  void setCustomer_Id (void new_var)   {
      Customer_Id = new_var;
  }

  /**
   * Get the value of Customer_Id
   * @return the value of Customer_Id
   */
  void getCustomer_Id ()   {
    return Customer_Id;
  }

  /**
   * Set the value of Customer_Details
   * @param new_var the new value of Customer_Details
   */
  void setCustomer_Details (void new_var)   {
      Customer_Details = new_var;
  }

  /**
   * Get the value of Customer_Details
   * @return the value of Customer_Details
   */
  void getCustomer_Details ()   {
    return Customer_Details;
  }

  /**
   * Set the value of Customer_mobile
   * @param new_var the new value of Customer_mobile
   */
  void setCustomer_mobile (void new_var)   {
      Customer_mobile = new_var;
  }

  /**
   * Get the value of Customer_mobile
   * @return the value of Customer_mobile
   */
  void getCustomer_mobile ()   {
    return Customer_mobile;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_CLASS_H


#ifndef STOCK_MARKET_SYSTEM_H
#define STOCK_MARKET_SYSTEM_H

#include <string>

/**
  * class Stock_Market_system
  * 
  */

class Stock_Market_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Stock_Market_system ();

  /**
   * Empty Destructor
   */
  virtual ~Stock_Market_system ();

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

  void User_Detail;
  void Stock_Detail;
  void Customer_Detail;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of User_Detail
   * @param new_var the new value of User_Detail
   */
  void setUser_Detail (void new_var)   {
      User_Detail = new_var;
  }

  /**
   * Get the value of User_Detail
   * @return the value of User_Detail
   */
  void getUser_Detail ()   {
    return User_Detail;
  }

  /**
   * Set the value of Stock_Detail
   * @param new_var the new value of Stock_Detail
   */
  void setStock_Detail (void new_var)   {
      Stock_Detail = new_var;
  }

  /**
   * Get the value of Stock_Detail
   * @return the value of Stock_Detail
   */
  void getStock_Detail ()   {
    return Stock_Detail;
  }

  /**
   * Set the value of Customer_Detail
   * @param new_var the new value of Customer_Detail
   */
  void setCustomer_Detail (void new_var)   {
      Customer_Detail = new_var;
  }

  /**
   * Get the value of Customer_Detail
   * @return the value of Customer_Detail
   */
  void getCustomer_Detail ()   {
    return Customer_Detail;
  }
private:


  void initAttributes () ;

};

#endif // STOCK_MARKET_SYSTEM_H
