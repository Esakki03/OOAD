
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include vector



/**
  * class Account
  * 
  */

class Account
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Account ();

  /**
   * Empty Destructor
   */
  virtual ~Account ();

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

  int Borrowed_count;
  int Reserved_count;
  int Returned_Count;
  int Lost_count;
  int Fine_Amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Borrowed_count
   * @param new_var the new value of Borrowed_count
   */
  void setBorrowed_count (int new_var)   {
      Borrowed_count = new_var;
  }

  /**
   * Get the value of Borrowed_count
   * @return the value of Borrowed_count
   */
  int getBorrowed_count ()   {
    return Borrowed_count;
  }

  /**
   * Set the value of Reserved_count
   * @param new_var the new value of Reserved_count
   */
  void setReserved_count (int new_var)   {
      Reserved_count = new_var;
  }

  /**
   * Get the value of Reserved_count
   * @return the value of Reserved_count
   */
  int getReserved_count ()   {
    return Reserved_count;
  }

  /**
   * Set the value of Returned_Count
   * @param new_var the new value of Returned_Count
   */
  void setReturned_Count (int new_var)   {
      Returned_Count = new_var;
  }

  /**
   * Get the value of Returned_Count
   * @return the value of Returned_Count
   */
  int getReturned_Count ()   {
    return Returned_Count;
  }

  /**
   * Set the value of Lost_count
   * @param new_var the new value of Lost_count
   */
  void setLost_count (int new_var)   {
      Lost_count = new_var;
  }

  /**
   * Get the value of Lost_count
   * @return the value of Lost_count
   */
  int getLost_count ()   {
    return Lost_count;
  }

  /**
   * Set the value of Fine_Amount
   * @param new_var the new value of Fine_Amount
   */
  void setFine_Amount (int new_var)   {
      Fine_Amount = new_var;
  }

  /**
   * Get the value of Fine_Amount
   * @return the value of Fine_Amount
   */
  int getFine_Amount ()   {
    return Fine_Amount;
  }
private:


  void initAttributes () ;

};

#endif // ACCOUNT_H


#ifndef LIBRARY_MANAGEMENT_SYSTEM_H
#define LIBRARY_MANAGEMENT_SYSTEM_H

#include <string>
#include vector



/**
  * class Library_management_system
  * 
  */

class Library_management_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Library_management_system ();

  /**
   * Empty Destructor
   */
  virtual ~Library_management_system ();

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
  void Register ()
  {
  }


  /**
   */
  void Logout ()
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

  void UserType;
  void UserName;
  void Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserType
   * @param new_var the new value of UserType
   */
  void setUserType (void new_var)   {
      UserType = new_var;
  }

  /**
   * Get the value of UserType
   * @return the value of UserType
   */
  void getUserType ()   {
    return UserType;
  }

  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (void new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  void getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (void new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  void getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // LIBRARY_MANAGEMENT_SYSTEM_H
