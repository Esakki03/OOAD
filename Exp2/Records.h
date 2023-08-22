
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class admin
  * 
  */

class admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admin ();

  /**
   * Empty Destructor
   */
  virtual ~admin ();

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
  void validate_user ()
  {
  }


  /**
   */
  void update_record ()
  {
  }


  /**
   */
  void order_books ()
  {
  }


  /**
   */
  void manage_users ()
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

  void username;
  void password;
  void booklist;
  void update_record;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (void new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }

  /**
   * Set the value of booklist
   * @param new_var the new value of booklist
   */
  void setBooklist (void new_var)   {
      booklist = new_var;
  }

  /**
   * Get the value of booklist
   * @return the value of booklist
   */
  void getBooklist ()   {
    return booklist;
  }

  /**
   * Set the value of update_record
   * @param new_var the new value of update_record
   */
  void setUpdate_record (void new_var)   {
      update_record = new_var;
  }

  /**
   * Get the value of update_record
   * @return the value of update_record
   */
  void getUpdate_record ()   {
    return update_record;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H


#ifndef RECORDS_H
#define RECORDS_H

#include <string>
#include vector



/**
  * class Records
  * 
  */

class Records
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Records ();

  /**
   * Empty Destructor
   */
  virtual ~Records ();

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
  void login ()
  {
  }


  /**
   */
  void Register ()
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

  string name;
  string father_name;
  int date_of_birth;
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
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of father_name
   * @param new_var the new value of father_name
   */
  void setFather_name (string new_var)   {
      father_name = new_var;
  }

  /**
   * Get the value of father_name
   * @return the value of father_name
   */
  string getFather_name ()   {
    return father_name;
  }

  /**
   * Set the value of date_of_birth
   * @param new_var the new value of date_of_birth
   */
  void setDate_of_birth (int new_var)   {
      date_of_birth = new_var;
  }

  /**
   * Get the value of date_of_birth
   * @return the value of date_of_birth
   */
  int getDate_of_birth ()   {
    return date_of_birth;
  }
private:


  void initAttributes () ;

};

#endif // RECORDS_H
