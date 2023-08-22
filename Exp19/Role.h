
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


#ifndef ROLE_H
#define ROLE_H

#include <string>

/**
  * class Role
  * 
  */

class Role
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Role ();

  /**
   * Empty Destructor
   */
  virtual ~Role ();

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

  void Role_Id;
  void Role_Discription;
  void Role_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Role_Id
   * @param new_var the new value of Role_Id
   */
  void setRole_Id (void new_var)   {
      Role_Id = new_var;
  }

  /**
   * Get the value of Role_Id
   * @return the value of Role_Id
   */
  void getRole_Id ()   {
    return Role_Id;
  }

  /**
   * Set the value of Role_Discription
   * @param new_var the new value of Role_Discription
   */
  void setRole_Discription (void new_var)   {
      Role_Discription = new_var;
  }

  /**
   * Get the value of Role_Discription
   * @return the value of Role_Discription
   */
  void getRole_Discription ()   {
    return Role_Discription;
  }

  /**
   * Set the value of Role_type
   * @param new_var the new value of Role_type
   */
  void setRole_type (void new_var)   {
      Role_type = new_var;
  }

  /**
   * Get the value of Role_type
   * @return the value of Role_type
   */
  void getRole_type ()   {
    return Role_type;
  }
private:


  void initAttributes () ;

};

#endif // ROLE_H
