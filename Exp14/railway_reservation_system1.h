
#ifndef CENTRAL_MANAGEMENT_H
#define CENTRAL_MANAGEMENT_H

#include <string>

/**
  * class central_management
  * 
  */

class central_management
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  central_management ();

  /**
   * Empty Destructor
   */
  virtual ~central_management ();

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
  void reservation ()
  {
  }


  /**
   */
  void cancellation ()
  {
  }


  /**
   */
  void status ()
  {
  }


  /**
   */
  void login ()
  {
  }


  /**
   */
  void cental_management ()
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

  void train_name;
  void passenger_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of train_name
   * @param new_var the new value of train_name
   */
  void setTrain_name (void new_var)   {
      train_name = new_var;
  }

  /**
   * Get the value of train_name
   * @return the value of train_name
   */
  void getTrain_name ()   {
    return train_name;
  }

  /**
   * Set the value of passenger_name
   * @param new_var the new value of passenger_name
   */
  void setPassenger_name (void new_var)   {
      passenger_name = new_var;
  }

  /**
   * Get the value of passenger_name
   * @return the value of passenger_name
   */
  void getPassenger_name ()   {
    return passenger_name;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_MANAGEMENT_H


#ifndef RAILWAY_RESERVATION_SYSTEM1_H
#define RAILWAY_RESERVATION_SYSTEM1_H

#include <string>

/**
  * class railway_reservation_system1
  * 
  */

class railway_reservation_system1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  railway_reservation_system1 ();

  /**
   * Empty Destructor
   */
  virtual ~railway_reservation_system1 ();

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
  void status ()
  {
  }


  /**
   */
  void reservation ()
  {
  }


  /**
   */
  void cancellation ()
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

  void train_number;
  void train_name;
  void passenger_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of train_number
   * @param new_var the new value of train_number
   */
  void setTrain_number (void new_var)   {
      train_number = new_var;
  }

  /**
   * Get the value of train_number
   * @return the value of train_number
   */
  void getTrain_number ()   {
    return train_number;
  }

  /**
   * Set the value of train_name
   * @param new_var the new value of train_name
   */
  void setTrain_name (void new_var)   {
      train_name = new_var;
  }

  /**
   * Get the value of train_name
   * @return the value of train_name
   */
  void getTrain_name ()   {
    return train_name;
  }

  /**
   * Set the value of passenger_name
   * @param new_var the new value of passenger_name
   */
  void setPassenger_name (void new_var)   {
      passenger_name = new_var;
  }

  /**
   * Get the value of passenger_name
   * @return the value of passenger_name
   */
  void getPassenger_name ()   {
    return passenger_name;
  }
private:


  void initAttributes () ;

};

#endif // RAILWAY_RESERVATION_SYSTEM1_H
