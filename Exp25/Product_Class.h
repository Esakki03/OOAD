
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>

/**
  * class Administrator
  * 
  */

class Administrator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Administrator ();

  /**
   * Empty Destructor
   */
  virtual ~Administrator ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string getVote ()
  {
  }


  /**
   */
  void Login ()
  {
  }


  /**
   */
  void ChangeParty ()
  {
  }


  /**
   */
  void EditParty ()
  {
  }


  /**
   * @return string
   */
  string setParty ()
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

  string UserName;
  string Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // ADMINISTRATOR_H


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
