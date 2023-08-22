
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


#ifndef POLICY_CLASS_H
#define POLICY_CLASS_H

#include <string>

/**
  * class Policy_class
  * 
  */

class Policy_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Policy_class ();

  /**
   * Empty Destructor
   */
  virtual ~Policy_class ();

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
  void add_new_policy ()
  {
  }


  /**
   */
  void Update_new_policy ()
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

  void Policy_Id;
  void Policy_Name;
  void Policy_Admin;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Policy_Id
   * @param new_var the new value of Policy_Id
   */
  void setPolicy_Id (void new_var)   {
      Policy_Id = new_var;
  }

  /**
   * Get the value of Policy_Id
   * @return the value of Policy_Id
   */
  void getPolicy_Id ()   {
    return Policy_Id;
  }

  /**
   * Set the value of Policy_Name
   * @param new_var the new value of Policy_Name
   */
  void setPolicy_Name (void new_var)   {
      Policy_Name = new_var;
  }

  /**
   * Get the value of Policy_Name
   * @return the value of Policy_Name
   */
  void getPolicy_Name ()   {
    return Policy_Name;
  }

  /**
   * Set the value of Policy_Admin
   * @param new_var the new value of Policy_Admin
   */
  void setPolicy_Admin (void new_var)   {
      Policy_Admin = new_var;
  }

  /**
   * Get the value of Policy_Admin
   * @return the value of Policy_Admin
   */
  void getPolicy_Admin ()   {
    return Policy_Admin;
  }
private:


  void initAttributes () ;

};

#endif // POLICY_CLASS_H
