
#ifndef 4EYKQI7ABH0Y_H
#define 4EYKQI7ABH0Y_H

#include <string>

/**
  * class 4eYkqI7aBh0Y
  * 
  */

class 4eYkqI7aBh0Y
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  4eYkqI7aBh0Y ();

  /**
   * Empty Destructor
   */
  virtual ~4eYkqI7aBh0Y ();

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

#endif // 4EYKQI7ABH0Y_H


#ifndef PRODUCT_CLASS_H
#define PRODUCT_CLASS_H

#include <string>
#include vector



/**
  * class Product_Class
  * 
  */

class Product_Class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Product_Class ();

  /**
   * Empty Destructor
   */
  virtual ~Product_Class ();

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
  void addProduct ()
  {
  }


  /**
   */
  void editProduct ()
  {
  }


  /**
   */
  void deleteJProduct ()
  {
  }


  /**
   */
  void searchProduct ()
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

  int Product_id;
  string Product_type;
  string Product_description;
  string Product_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Product_id
   * @param new_var the new value of Product_id
   */
  void setProduct_id (int new_var)   {
      Product_id = new_var;
  }

  /**
   * Get the value of Product_id
   * @return the value of Product_id
   */
  int getProduct_id ()   {
    return Product_id;
  }

  /**
   * Set the value of Product_type
   * @param new_var the new value of Product_type
   */
  void setProduct_type (string new_var)   {
      Product_type = new_var;
  }

  /**
   * Get the value of Product_type
   * @return the value of Product_type
   */
  string getProduct_type ()   {
    return Product_type;
  }

  /**
   * Set the value of Product_description
   * @param new_var the new value of Product_description
   */
  void setProduct_description (string new_var)   {
      Product_description = new_var;
  }

  /**
   * Get the value of Product_description
   * @return the value of Product_description
   */
  string getProduct_description ()   {
    return Product_description;
  }

  /**
   * Set the value of Product_name
   * @param new_var the new value of Product_name
   */
  void setProduct_name (string new_var)   {
      Product_name = new_var;
  }

  /**
   * Get the value of Product_name
   * @return the value of Product_name
   */
  string getProduct_name ()   {
    return Product_name;
  }
private:


  void initAttributes () ;

};

#endif // PRODUCT_CLASS_H
