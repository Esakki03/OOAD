
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


#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include vector



/**
  * class Payment
  * 
  */

class Payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Payment ();

  /**
   * Empty Destructor
   */
  virtual ~Payment ();

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
  void addPayment ()
  {
  }


  /**
   */
  void editPayment ()
  {
  }


  /**
   */
  void deletePayment ()
  {
  }


  /**
   */
  void searchPayment ()
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

  void payment_id;
  void payment_description;
  void payment_amount;
  void payment_date;
  void payment_customer_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment_id
   * @param new_var the new value of payment_id
   */
  void setPayment_id (void new_var)   {
      payment_id = new_var;
  }

  /**
   * Get the value of payment_id
   * @return the value of payment_id
   */
  void getPayment_id ()   {
    return payment_id;
  }

  /**
   * Set the value of payment_description
   * @param new_var the new value of payment_description
   */
  void setPayment_description (void new_var)   {
      payment_description = new_var;
  }

  /**
   * Get the value of payment_description
   * @return the value of payment_description
   */
  void getPayment_description ()   {
    return payment_description;
  }

  /**
   * Set the value of payment_amount
   * @param new_var the new value of payment_amount
   */
  void setPayment_amount (void new_var)   {
      payment_amount = new_var;
  }

  /**
   * Get the value of payment_amount
   * @return the value of payment_amount
   */
  void getPayment_amount ()   {
    return payment_amount;
  }

  /**
   * Set the value of payment_date
   * @param new_var the new value of payment_date
   */
  void setPayment_date (void new_var)   {
      payment_date = new_var;
  }

  /**
   * Get the value of payment_date
   * @return the value of payment_date
   */
  void getPayment_date ()   {
    return payment_date;
  }

  /**
   * Set the value of payment_customer_id
   * @param new_var the new value of payment_customer_id
   */
  void setPayment_customer_id (void new_var)   {
      payment_customer_id = new_var;
  }

  /**
   * Get the value of payment_customer_id
   * @return the value of payment_customer_id
   */
  void getPayment_customer_id ()   {
    return payment_customer_id;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
