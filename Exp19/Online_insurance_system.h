
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


#ifndef ONLINE_INSURANCE_SYSTEM_H
#define ONLINE_INSURANCE_SYSTEM_H

#include <string>

/**
  * class Online_insurance_system
  * 
  */

class Online_insurance_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Online_insurance_system ();

  /**
   * Empty Destructor
   */
  virtual ~Online_insurance_system ();

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
  void Product_Detail;
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
   * Set the value of Product_Detail
   * @param new_var the new value of Product_Detail
   */
  void setProduct_Detail (void new_var)   {
      Product_Detail = new_var;
  }

  /**
   * Get the value of Product_Detail
   * @return the value of Product_Detail
   */
  void getProduct_Detail ()   {
    return Product_Detail;
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

#endif // ONLINE_INSURANCE_SYSTEM_H
