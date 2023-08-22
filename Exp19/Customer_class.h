
#ifndef ADMIN_CLASS_H
#define ADMIN_CLASS_H

#include <string>

/**
  * class Admin_class
  * 
  */

class Admin_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Admin_class ();

  /**
   * Empty Destructor
   */
  virtual ~Admin_class ();

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
  void Pay_bill ()
  {
  }


  /**
   */
  void Issue_policy ()
  {
  }


  /**
   */
  void About_policy ()
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

  void Admin_name;
  void Admin_role;
  void Admin_Email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Admin_name
   * @param new_var the new value of Admin_name
   */
  void setAdmin_name (void new_var)   {
      Admin_name = new_var;
  }

  /**
   * Get the value of Admin_name
   * @return the value of Admin_name
   */
  void getAdmin_name ()   {
    return Admin_name;
  }

  /**
   * Set the value of Admin_role
   * @param new_var the new value of Admin_role
   */
  void setAdmin_role (void new_var)   {
      Admin_role = new_var;
  }

  /**
   * Get the value of Admin_role
   * @return the value of Admin_role
   */
  void getAdmin_role ()   {
    return Admin_role;
  }

  /**
   * Set the value of Admin_Email
   * @param new_var the new value of Admin_Email
   */
  void setAdmin_Email (void new_var)   {
      Admin_Email = new_var;
  }

  /**
   * Get the value of Admin_Email
   * @return the value of Admin_Email
   */
  void getAdmin_Email ()   {
    return Admin_Email;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_CLASS_H


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
