
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>

/**
  * class Administrator
  * 
  */

class Administrator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Administrator ();

  /**
   * Empty Destructor
   */
  virtual ~Administrator ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string getVote ()
  {
  }


  /**
   */
  void Login ()
  {
  }


  /**
   */
  void ChangeParty ()
  {
  }


  /**
   */
  void EditParty ()
  {
  }


  /**
   * @return string
   */
  string setParty ()
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

  string UserName;
  string Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // ADMINISTRATOR_H


#ifndef CUSTOMER_CLASS_H
#define CUSTOMER_CLASS_H

#include <string>
#include vector



/**
  * class Customer_Class
  * 
  */

class Customer_Class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer_Class ();

  /**
   * Empty Destructor
   */
  virtual ~Customer_Class ();

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
  void addCustomer ()
  {
  }


  /**
   */
  void editCustomer ()
  {
  }


  /**
   */
  void deleteCustomer ()
  {
  }


  /**
   */
  void searchCustomer ()
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

  int customer_id;
  string customer_name;
  string customer_mobile;
  string customer_email;
  string customer_address;
  string customer_username;
  string customer_password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customer_id
   * @param new_var the new value of customer_id
   */
  void setCustomer_id (int new_var)   {
      customer_id = new_var;
  }

  /**
   * Get the value of customer_id
   * @return the value of customer_id
   */
  int getCustomer_id ()   {
    return customer_id;
  }

  /**
   * Set the value of customer_name
   * @param new_var the new value of customer_name
   */
  void setCustomer_name (string new_var)   {
      customer_name = new_var;
  }

  /**
   * Get the value of customer_name
   * @return the value of customer_name
   */
  string getCustomer_name ()   {
    return customer_name;
  }

  /**
   * Set the value of customer_mobile
   * @param new_var the new value of customer_mobile
   */
  void setCustomer_mobile (string new_var)   {
      customer_mobile = new_var;
  }

  /**
   * Get the value of customer_mobile
   * @return the value of customer_mobile
   */
  string getCustomer_mobile ()   {
    return customer_mobile;
  }

  /**
   * Set the value of customer_email
   * @param new_var the new value of customer_email
   */
  void setCustomer_email (string new_var)   {
      customer_email = new_var;
  }

  /**
   * Get the value of customer_email
   * @return the value of customer_email
   */
  string getCustomer_email ()   {
    return customer_email;
  }

  /**
   * Set the value of customer_address
   * @param new_var the new value of customer_address
   */
  void setCustomer_address (string new_var)   {
      customer_address = new_var;
  }

  /**
   * Get the value of customer_address
   * @return the value of customer_address
   */
  string getCustomer_address ()   {
    return customer_address;
  }

  /**
   * Set the value of customer_username
   * @param new_var the new value of customer_username
   */
  void setCustomer_username (string new_var)   {
      customer_username = new_var;
  }

  /**
   * Get the value of customer_username
   * @return the value of customer_username
   */
  string getCustomer_username ()   {
    return customer_username;
  }

  /**
   * Set the value of customer_password
   * @param new_var the new value of customer_password
   */
  void setCustomer_password (string new_var)   {
      customer_password = new_var;
  }

  /**
   * Get the value of customer_password
   * @return the value of customer_password
   */
  string getCustomer_password ()   {
    return customer_password;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_CLASS_H
