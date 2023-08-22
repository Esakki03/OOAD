
#ifndef EXAMINATION_H
#define EXAMINATION_H

#include <string>

/**
  * class Examination
  * 
  */

class Examination
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Examination ();

  /**
   * Empty Destructor
   */
  virtual ~Examination ();

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
  void Eligibility_check ()
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

  string Name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }
private:


  void initAttributes () ;

};

#endif // EXAMINATION_H


#ifndef FINANCE_H
#define FINANCE_H

#include <string>

/**
  * class Finance
  * 
  */

class Finance
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Finance ();

  /**
   * Empty Destructor
   */
  virtual ~Finance ();

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
  void Pooling_of_funds ()
  {
  }


  /**
   */
  void Economic_development ()
  {
  }


  /**
   */
  void Better_decision_making ()
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

  void Balance;
  void DataBase;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Balance
   * @param new_var the new value of Balance
   */
  void setBalance (void new_var)   {
      Balance = new_var;
  }

  /**
   * Get the value of Balance
   * @return the value of Balance
   */
  void getBalance ()   {
    return Balance;
  }

  /**
   * Set the value of DataBase
   * @param new_var the new value of DataBase
   */
  void setDataBase (void new_var)   {
      DataBase = new_var;
  }

  /**
   * Get the value of DataBase
   * @return the value of DataBase
   */
  void getDataBase ()   {
    return DataBase;
  }
private:


  void initAttributes () ;

};

#endif // FINANCE_H
