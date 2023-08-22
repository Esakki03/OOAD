
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


#ifndef TRAIN_H
#define TRAIN_H

#include <string>

/**
  * class Train
  * 
  */

class Train
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Train ();

  /**
   * Empty Destructor
   */
  virtual ~Train ();

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

  void Train_name;
  void Timming;
  new_class Train_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Train_name
   * @param new_var the new value of Train_name
   */
  void setTrain_name (void new_var)   {
      Train_name = new_var;
  }

  /**
   * Get the value of Train_name
   * @return the value of Train_name
   */
  void getTrain_name ()   {
    return Train_name;
  }

  /**
   * Set the value of Timming
   * @param new_var the new value of Timming
   */
  void setTimming (void new_var)   {
      Timming = new_var;
  }

  /**
   * Get the value of Timming
   * @return the value of Timming
   */
  void getTimming ()   {
    return Timming;
  }

  /**
   * Set the value of Train_type
   * @param new_var the new value of Train_type
   */
  void setTrain_type (new_class new_var)   {
      Train_type = new_var;
  }

  /**
   * Get the value of Train_type
   * @return the value of Train_type
   */
  new_class getTrain_type ()   {
    return Train_type;
  }
private:


  void initAttributes () ;

};

#endif // TRAIN_H
