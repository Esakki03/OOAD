
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


#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

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

  int payment_id;
  string payment_description;
  string payment_amount;
  date payment_date;
  int payment_customer_id;
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
  void setPayment_id (int new_var)   {
      payment_id = new_var;
  }

  /**
   * Get the value of payment_id
   * @return the value of payment_id
   */
  int getPayment_id ()   {
    return payment_id;
  }

  /**
   * Set the value of payment_description
   * @param new_var the new value of payment_description
   */
  void setPayment_description (string new_var)   {
      payment_description = new_var;
  }

  /**
   * Get the value of payment_description
   * @return the value of payment_description
   */
  string getPayment_description ()   {
    return payment_description;
  }

  /**
   * Set the value of payment_amount
   * @param new_var the new value of payment_amount
   */
  void setPayment_amount (string new_var)   {
      payment_amount = new_var;
  }

  /**
   * Get the value of payment_amount
   * @return the value of payment_amount
   */
  string getPayment_amount ()   {
    return payment_amount;
  }

  /**
   * Set the value of payment_date
   * @param new_var the new value of payment_date
   */
  void setPayment_date (date new_var)   {
      payment_date = new_var;
  }

  /**
   * Get the value of payment_date
   * @return the value of payment_date
   */
  date getPayment_date ()   {
    return payment_date;
  }

  /**
   * Set the value of payment_customer_id
   * @param new_var the new value of payment_customer_id
   */
  void setPayment_customer_id (int new_var)   {
      payment_customer_id = new_var;
  }

  /**
   * Get the value of payment_customer_id
   * @return the value of payment_customer_id
   */
  int getPayment_customer_id ()   {
    return payment_customer_id;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
