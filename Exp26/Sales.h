
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


#ifndef SALES_H
#define SALES_H

#include <string>

/**
  * class Sales
  * 
  */

class Sales
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Sales ();

  /**
   * Empty Destructor
   */
  virtual ~Sales ();

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
  void addSales ()
  {
  }


  /**
   */
  void editSales ()
  {
  }


  /**
   */
  void deleteSales ()
  {
  }


  /**
   */
  void searchSales ()
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

  int sale_id;
  int sale_customer_id;
  string sale_amount;
  string sale_descryption;
  string sale_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of sale_id
   * @param new_var the new value of sale_id
   */
  void setSale_id (int new_var)   {
      sale_id = new_var;
  }

  /**
   * Get the value of sale_id
   * @return the value of sale_id
   */
  int getSale_id ()   {
    return sale_id;
  }

  /**
   * Set the value of sale_customer_id
   * @param new_var the new value of sale_customer_id
   */
  void setSale_customer_id (int new_var)   {
      sale_customer_id = new_var;
  }

  /**
   * Get the value of sale_customer_id
   * @return the value of sale_customer_id
   */
  int getSale_customer_id ()   {
    return sale_customer_id;
  }

  /**
   * Set the value of sale_amount
   * @param new_var the new value of sale_amount
   */
  void setSale_amount (string new_var)   {
      sale_amount = new_var;
  }

  /**
   * Get the value of sale_amount
   * @return the value of sale_amount
   */
  string getSale_amount ()   {
    return sale_amount;
  }

  /**
   * Set the value of sale_descryption
   * @param new_var the new value of sale_descryption
   */
  void setSale_descryption (string new_var)   {
      sale_descryption = new_var;
  }

  /**
   * Get the value of sale_descryption
   * @return the value of sale_descryption
   */
  string getSale_descryption ()   {
    return sale_descryption;
  }

  /**
   * Set the value of sale_type
   * @param new_var the new value of sale_type
   */
  void setSale_type (string new_var)   {
      sale_type = new_var;
  }

  /**
   * Get the value of sale_type
   * @return the value of sale_type
   */
  string getSale_type ()   {
    return sale_type;
  }
private:


  void initAttributes () ;

};

#endif // SALES_H
