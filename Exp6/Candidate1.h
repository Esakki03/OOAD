
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class Admin
  * 
  */

class Admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Admin ();

  /**
   * Empty Destructor
   */
  virtual ~Admin ();

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

  int id;
  string username;
  string password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (string new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  string getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (string new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  string getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H


#ifndef CANDIDATE1_H
#define CANDIDATE1_H

#include <string>

/**
  * class Candidate1
  * 
  */

class Candidate1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Candidate1 ();

  /**
   * Empty Destructor
   */
  virtual ~Candidate1 ();

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
  void verify ()
  {
  }


  /**
   */
  void Candidate ()
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
  void operation;
  void qualification;
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
   * Set the value of operation
   * @param new_var the new value of operation
   */
  void setOperation (void new_var)   {
      operation = new_var;
  }

  /**
   * Get the value of operation
   * @return the value of operation
   */
  void getOperation ()   {
    return operation;
  }

  /**
   * Set the value of qualification
   * @param new_var the new value of qualification
   */
  void setQualification (void new_var)   {
      qualification = new_var;
  }

  /**
   * Get the value of qualification
   * @return the value of qualification
   */
  void getQualification ()   {
    return qualification;
  }
private:


  void initAttributes () ;

};

#endif // CANDIDATE1_H
