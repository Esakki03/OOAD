
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


#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

/**
  * class Transaction
  * 
  */

class Transaction
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Transaction ();

  /**
   * Empty Destructor
   */
  virtual ~Transaction ();

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
  void initiateTransaction ()
  {
  }


  /**
   */
  void finalizeTransaction ()
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

  int transactionID;
  int fromOwnerID;
  int toOwnerID;
  int ParcelID;
  date transactionDate;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of transactionID
   * @param new_var the new value of transactionID
   */
  void setTransactionID (int new_var)   {
      transactionID = new_var;
  }

  /**
   * Get the value of transactionID
   * @return the value of transactionID
   */
  int getTransactionID ()   {
    return transactionID;
  }

  /**
   * Set the value of fromOwnerID
   * @param new_var the new value of fromOwnerID
   */
  void setFromOwnerID (int new_var)   {
      fromOwnerID = new_var;
  }

  /**
   * Get the value of fromOwnerID
   * @return the value of fromOwnerID
   */
  int getFromOwnerID ()   {
    return fromOwnerID;
  }

  /**
   * Set the value of toOwnerID
   * @param new_var the new value of toOwnerID
   */
  void setToOwnerID (int new_var)   {
      toOwnerID = new_var;
  }

  /**
   * Get the value of toOwnerID
   * @return the value of toOwnerID
   */
  int getToOwnerID ()   {
    return toOwnerID;
  }

  /**
   * Set the value of ParcelID
   * @param new_var the new value of ParcelID
   */
  void setParcelID (int new_var)   {
      ParcelID = new_var;
  }

  /**
   * Get the value of ParcelID
   * @return the value of ParcelID
   */
  int getParcelID ()   {
    return ParcelID;
  }

  /**
   * Set the value of transactionDate
   * @param new_var the new value of transactionDate
   */
  void setTransactionDate (date new_var)   {
      transactionDate = new_var;
  }

  /**
   * Get the value of transactionDate
   * @return the value of transactionDate
   */
  date getTransactionDate ()   {
    return transactionDate;
  }
private:


  void initAttributes () ;

};

#endif // TRANSACTION_H
