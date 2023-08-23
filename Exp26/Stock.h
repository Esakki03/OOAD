
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


#ifndef STOCK_H
#define STOCK_H

#include <string>

/**
  * class Stock
  * 
  */

class Stock
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Stock ();

  /**
   * Empty Destructor
   */
  virtual ~Stock ();

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
  void addStock ()
  {
  }


  /**
   */
  void editStock ()
  {
  }


  /**
   */
  void deleteStock ()
  {
  }


  /**
   */
  void searchStock ()
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

  int stock_id;
  string stock_items;
  string stock_number;
  string stock_type;
  string stock_description;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of stock_id
   * @param new_var the new value of stock_id
   */
  void setStock_id (int new_var)   {
      stock_id = new_var;
  }

  /**
   * Get the value of stock_id
   * @return the value of stock_id
   */
  int getStock_id ()   {
    return stock_id;
  }

  /**
   * Set the value of stock_items
   * @param new_var the new value of stock_items
   */
  void setStock_items (string new_var)   {
      stock_items = new_var;
  }

  /**
   * Get the value of stock_items
   * @return the value of stock_items
   */
  string getStock_items ()   {
    return stock_items;
  }

  /**
   * Set the value of stock_number
   * @param new_var the new value of stock_number
   */
  void setStock_number (string new_var)   {
      stock_number = new_var;
  }

  /**
   * Get the value of stock_number
   * @return the value of stock_number
   */
  string getStock_number ()   {
    return stock_number;
  }

  /**
   * Set the value of stock_type
   * @param new_var the new value of stock_type
   */
  void setStock_type (string new_var)   {
      stock_type = new_var;
  }

  /**
   * Get the value of stock_type
   * @return the value of stock_type
   */
  string getStock_type ()   {
    return stock_type;
  }

  /**
   * Set the value of stock_description
   * @param new_var the new value of stock_description
   */
  void setStock_description (string new_var)   {
      stock_description = new_var;
  }

  /**
   * Get the value of stock_description
   * @return the value of stock_description
   */
  string getStock_description ()   {
    return stock_description;
  }
private:


  void initAttributes () ;

};

#endif // STOCK_H
