
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
