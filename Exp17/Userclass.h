
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


#ifndef USERCLASS_H
#define USERCLASS_H

#include <string>

/**
  * class Userclass
  * 
  */

class Userclass
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Userclass ();

  /**
   * Empty Destructor
   */
  virtual ~Userclass ();

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
  void Add_user ()
  {
  }


  /**
   */
  void Edit_User ()
  {
  }


  /**
   */
  void Delete_user ()
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

  void User_Id;
  void User_role;
  void User_Email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of User_Id
   * @param new_var the new value of User_Id
   */
  void setUser_Id (void new_var)   {
      User_Id = new_var;
  }

  /**
   * Get the value of User_Id
   * @return the value of User_Id
   */
  void getUser_Id ()   {
    return User_Id;
  }

  /**
   * Set the value of User_role
   * @param new_var the new value of User_role
   */
  void setUser_role (void new_var)   {
      User_role = new_var;
  }

  /**
   * Get the value of User_role
   * @return the value of User_role
   */
  void getUser_role ()   {
    return User_role;
  }

  /**
   * Set the value of User_Email
   * @param new_var the new value of User_Email
   */
  void setUser_Email (void new_var)   {
      User_Email = new_var;
  }

  /**
   * Get the value of User_Email
   * @return the value of User_Email
   */
  void getUser_Email ()   {
    return User_Email;
  }
private:


  void initAttributes () ;

};

#endif // USERCLASS_H
