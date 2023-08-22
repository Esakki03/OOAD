
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


#ifndef STOCKK_DEALER_H
#define STOCKK_DEALER_H

#include <string>

/**
  * class stockk_dealer
  * 
  */

class stockk_dealer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  stockk_dealer ();

  /**
   * Empty Destructor
   */
  virtual ~stockk_dealer ();

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
  void deliver_item ()
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

  void take_order;
  void enter_order;
  void verify_order;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of take_order
   * @param new_var the new value of take_order
   */
  void setTake_order (void new_var)   {
      take_order = new_var;
  }

  /**
   * Get the value of take_order
   * @return the value of take_order
   */
  void getTake_order ()   {
    return take_order;
  }

  /**
   * Set the value of enter_order
   * @param new_var the new value of enter_order
   */
  void setEnter_order (void new_var)   {
      enter_order = new_var;
  }

  /**
   * Get the value of enter_order
   * @return the value of enter_order
   */
  void getEnter_order ()   {
    return enter_order;
  }

  /**
   * Set the value of verify_order
   * @param new_var the new value of verify_order
   */
  void setVerify_order (void new_var)   {
      verify_order = new_var;
  }

  /**
   * Get the value of verify_order
   * @return the value of verify_order
   */
  void getVerify_order ()   {
    return verify_order;
  }
private:


  void initAttributes () ;

};

#endif // STOCKK_DEALER_H
