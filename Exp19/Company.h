
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


#ifndef COMPANY_H
#define COMPANY_H

#include <string>

/**
  * class Company
  * 
  */

class Company
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Company ();

  /**
   * Empty Destructor
   */
  virtual ~Company ();

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

  void Company_name;
  void Vision_misiion;
  void Growth;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Company_name
   * @param new_var the new value of Company_name
   */
  void setCompany_name (void new_var)   {
      Company_name = new_var;
  }

  /**
   * Get the value of Company_name
   * @return the value of Company_name
   */
  void getCompany_name ()   {
    return Company_name;
  }

  /**
   * Set the value of Vision_misiion
   * @param new_var the new value of Vision_misiion
   */
  void setVision_misiion (void new_var)   {
      Vision_misiion = new_var;
  }

  /**
   * Get the value of Vision_misiion
   * @return the value of Vision_misiion
   */
  void getVision_misiion ()   {
    return Vision_misiion;
  }

  /**
   * Set the value of Growth
   * @param new_var the new value of Growth
   */
  void setGrowth (void new_var)   {
      Growth = new_var;
  }

  /**
   * Get the value of Growth
   * @return the value of Growth
   */
  void getGrowth ()   {
    return Growth;
  }
private:


  void initAttributes () ;

};

#endif // COMPANY_H
