
#ifndef CENTRAL_SYSTEM1_H
#define CENTRAL_SYSTEM1_H

#include <string>

/**
  * class Central_System1
  * 
  */

class Central_System1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Central_System1 ();

  /**
   * Empty Destructor
   */
  virtual ~Central_System1 ();

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
  void storing ()
  {
  }


  /**
   */
  void updating ()
  {
  }


  /**
   */
  void processing ()
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

  void store;
  void update;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store
   * @param new_var the new value of store
   */
  void setStore (void new_var)   {
      store = new_var;
  }

  /**
   * Get the value of store
   * @return the value of store
   */
  void getStore ()   {
    return store;
  }

  /**
   * Set the value of update
   * @param new_var the new value of update
   */
  void setUpdate (void new_var)   {
      update = new_var;
  }

  /**
   * Get the value of update
   * @return the value of update
   */
  void getUpdate ()   {
    return update;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_SYSTEM1_H


#ifndef CUSTOMER1_H
#define CUSTOMER1_H

#include <string>

/**
  * class Customer1
  * 
  */

class Customer1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer1 ();

  /**
   * Empty Destructor
   */
  virtual ~Customer1 ();

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
  void payment ()
  {
  }


  /**
   */
  void feedback ()
  {
  }


  /**
   */
  void customer ()
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

  void name;
  void purchase_product;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of purchase_product
   * @param new_var the new value of purchase_product
   */
  void setPurchase_product (void new_var)   {
      purchase_product = new_var;
  }

  /**
   * Get the value of purchase_product
   * @return the value of purchase_product
   */
  void getPurchase_product ()   {
    return purchase_product;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER1_H
