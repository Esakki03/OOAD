
#ifndef CENTRAL_STOCK_SYSTEM_H
#define CENTRAL_STOCK_SYSTEM_H

#include <string>

/**
  * class central_stock_system
  * 
  */

class central_stock_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  central_stock_system ();

  /**
   * Empty Destructor
   */
  virtual ~central_stock_system ();

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
  void printbill ()
  {
  }


  /**
   */
  void delivary_product ()
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

  void store_stoick_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store_stoick_details
   * @param new_var the new value of store_stoick_details
   */
  void setStore_stoick_details (void new_var)   {
      store_stoick_details = new_var;
  }

  /**
   * Get the value of store_stoick_details
   * @return the value of store_stoick_details
   */
  void getStore_stoick_details ()   {
    return store_stoick_details;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_STOCK_SYSTEM_H
