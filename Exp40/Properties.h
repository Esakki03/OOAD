
#ifndef HOME_SYSTEM_H
#define HOME_SYSTEM_H

#include <string>

/**
  * class Home_system
  * 
  */

class Home_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Home_system ();

  /**
   * Empty Destructor
   */
  virtual ~Home_system ();

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

  void Tax_payers;
  void Collectors;
  void Properties;
  void Payment;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Tax_payers
   * @param new_var the new value of Tax_payers
   */
  void setTax_payers (void new_var)   {
      Tax_payers = new_var;
  }

  /**
   * Get the value of Tax_payers
   * @return the value of Tax_payers
   */
  void getTax_payers ()   {
    return Tax_payers;
  }

  /**
   * Set the value of Collectors
   * @param new_var the new value of Collectors
   */
  void setCollectors (void new_var)   {
      Collectors = new_var;
  }

  /**
   * Get the value of Collectors
   * @return the value of Collectors
   */
  void getCollectors ()   {
    return Collectors;
  }

  /**
   * Set the value of Properties
   * @param new_var the new value of Properties
   */
  void setProperties (void new_var)   {
      Properties = new_var;
  }

  /**
   * Get the value of Properties
   * @return the value of Properties
   */
  void getProperties ()   {
    return Properties;
  }

  /**
   * Set the value of Payment
   * @param new_var the new value of Payment
   */
  void setPayment (void new_var)   {
      Payment = new_var;
  }

  /**
   * Get the value of Payment
   * @return the value of Payment
   */
  void getPayment ()   {
    return Payment;
  }
private:


  void initAttributes () ;

};

#endif // HOME_SYSTEM_H


#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <string>

/**
  * class Properties
  * 
  */

class Properties
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Properties ();

  /**
   * Empty Destructor
   */
  virtual ~Properties ();

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
  void Calculalte_Tax ()
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

  void Id;
  void Name;
  void Address;
  void Owner;
  void Vallue;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (void new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  void getId ()   {
    return Id;
  }

  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of Address
   * @param new_var the new value of Address
   */
  void setAddress (void new_var)   {
      Address = new_var;
  }

  /**
   * Get the value of Address
   * @return the value of Address
   */
  void getAddress ()   {
    return Address;
  }

  /**
   * Set the value of Owner
   * @param new_var the new value of Owner
   */
  void setOwner (void new_var)   {
      Owner = new_var;
  }

  /**
   * Get the value of Owner
   * @return the value of Owner
   */
  void getOwner ()   {
    return Owner;
  }

  /**
   * Set the value of Vallue
   * @param new_var the new value of Vallue
   */
  void setVallue (void new_var)   {
      Vallue = new_var;
  }

  /**
   * Get the value of Vallue
   * @return the value of Vallue
   */
  void getVallue ()   {
    return Vallue;
  }
private:


  void initAttributes () ;

};

#endif // PROPERTIES_H
