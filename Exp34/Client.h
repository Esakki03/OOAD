
#ifndef ADD_H
#define ADD_H

#include <string>

/**
  * class Add
  * 
  */

class Add
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Add ();

  /**
   * Empty Destructor
   */
  virtual ~Add ();

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
  void Add_Client ()
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

  void Client_Name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Client_Name
   * @param new_var the new value of Client_Name
   */
  void setClient_Name (void new_var)   {
      Client_Name = new_var;
  }

  /**
   * Get the value of Client_Name
   * @return the value of Client_Name
   */
  void getClient_Name ()   {
    return Client_Name;
  }
private:


  void initAttributes () ;

};

#endif // ADD_H


#ifndef CLIENT_H
#define CLIENT_H

#include <string>

/**
  * class Client
  * 
  */

class Client
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Client ();

  /**
   * Empty Destructor
   */
  virtual ~Client ();

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
  void Sign_in ()
  {
  }


  /**
   */
  void Sign_Out ()
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

  void Client_Name;
  void Id;
  void Password;
  void Phone;
  void Address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Client_Name
   * @param new_var the new value of Client_Name
   */
  void setClient_Name (void new_var)   {
      Client_Name = new_var;
  }

  /**
   * Get the value of Client_Name
   * @return the value of Client_Name
   */
  void getClient_Name ()   {
    return Client_Name;
  }

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
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (void new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  void getPassword ()   {
    return Password;
  }

  /**
   * Set the value of Phone
   * @param new_var the new value of Phone
   */
  void setPhone (void new_var)   {
      Phone = new_var;
  }

  /**
   * Get the value of Phone
   * @return the value of Phone
   */
  void getPhone ()   {
    return Phone;
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
private:


  void initAttributes () ;

};

#endif // CLIENT_H
