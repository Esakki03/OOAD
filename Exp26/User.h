
#ifndef DATE_H
#define DATE_H

#include <string>

/**
  * class date
  * 
  */

class date
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  date ();

  /**
   * Empty Destructor
   */
  virtual ~date ();

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

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // DATE_H


#ifndef USER_H
#define USER_H

#include <string>

/**
  * class User
  * 
  */

class User
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User ();

  /**
   * Empty Destructor
   */
  virtual ~User ();

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
  void addUser ()
  {
  }


  /**
   */
  void editUser ()
  {
  }


  /**
   */
  void deleteUser ()
  {
  }


  /**
   */
  void searchUser ()
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

  int User_Id;
  int User_role_Id;
  string User_Name;
  string User_email;
  date User_dob;
  string User_Address;
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
  void setUser_Id (int new_var)   {
      User_Id = new_var;
  }

  /**
   * Get the value of User_Id
   * @return the value of User_Id
   */
  int getUser_Id ()   {
    return User_Id;
  }

  /**
   * Set the value of User_role_Id
   * @param new_var the new value of User_role_Id
   */
  void setUser_role_Id (int new_var)   {
      User_role_Id = new_var;
  }

  /**
   * Get the value of User_role_Id
   * @return the value of User_role_Id
   */
  int getUser_role_Id ()   {
    return User_role_Id;
  }

  /**
   * Set the value of User_Name
   * @param new_var the new value of User_Name
   */
  void setUser_Name (string new_var)   {
      User_Name = new_var;
  }

  /**
   * Get the value of User_Name
   * @return the value of User_Name
   */
  string getUser_Name ()   {
    return User_Name;
  }

  /**
   * Set the value of User_email
   * @param new_var the new value of User_email
   */
  void setUser_email (string new_var)   {
      User_email = new_var;
  }

  /**
   * Get the value of User_email
   * @return the value of User_email
   */
  string getUser_email ()   {
    return User_email;
  }

  /**
   * Set the value of User_dob
   * @param new_var the new value of User_dob
   */
  void setUser_dob (date new_var)   {
      User_dob = new_var;
  }

  /**
   * Get the value of User_dob
   * @return the value of User_dob
   */
  date getUser_dob ()   {
    return User_dob;
  }

  /**
   * Set the value of User_Address
   * @param new_var the new value of User_Address
   */
  void setUser_Address (string new_var)   {
      User_Address = new_var;
  }

  /**
   * Get the value of User_Address
   * @return the value of User_Address
   */
  string getUser_Address ()   {
    return User_Address;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
