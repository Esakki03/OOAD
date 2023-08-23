
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
  void Login ()
  {
  }


  /**
   */
  void Logout ()
  {
  }


  /**
   */
  void UpdateUserDetails ()
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
  string Username;
  string Password;
  string FirstName;
  string LatName;
  number Contact;
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
   * Set the value of Username
   * @param new_var the new value of Username
   */
  void setUsername (string new_var)   {
      Username = new_var;
  }

  /**
   * Get the value of Username
   * @return the value of Username
   */
  string getUsername ()   {
    return Username;
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

  /**
   * Set the value of FirstName
   * @param new_var the new value of FirstName
   */
  void setFirstName (string new_var)   {
      FirstName = new_var;
  }

  /**
   * Get the value of FirstName
   * @return the value of FirstName
   */
  string getFirstName ()   {
    return FirstName;
  }

  /**
   * Set the value of LatName
   * @param new_var the new value of LatName
   */
  void setLatName (string new_var)   {
      LatName = new_var;
  }

  /**
   * Get the value of LatName
   * @return the value of LatName
   */
  string getLatName ()   {
    return LatName;
  }

  /**
   * Set the value of Contact
   * @param new_var the new value of Contact
   */
  void setContact (number new_var)   {
      Contact = new_var;
  }

  /**
   * Get the value of Contact
   * @return the value of Contact
   */
  number getContact ()   {
    return Contact;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
