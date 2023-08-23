
#ifndef CLERK_H
#define CLERK_H

#include <string>

/**
  * class Clerk
  * 
  */

class Clerk
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Clerk ();

  /**
   * Empty Destructor
   */
  virtual ~Clerk ();

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
  void Form_details_ ()
  {
  }


  /**
   */
  void clancelleation_form ()
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

  void Id;
  void Name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }
private:


  void initAttributes () ;

};

#endif // CLERK_H


#ifndef TICKET_H
#define TICKET_H

#include <string>

/**
  * class Ticket
  * 
  */

class Ticket
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Ticket ();

  /**
   * Empty Destructor
   */
  virtual ~Ticket ();

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
  void New_Ticket ()
  {
  }


  /**
   */
  void delete_ticket ()
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

  void Pnr_no;
  void Status;
  void No_of_person;
  void Charge_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Pnr_no
   * @param new_var the new value of Pnr_no
   */
  void setPnr_no (void new_var)   {
      Pnr_no = new_var;
  }

  /**
   * Get the value of Pnr_no
   * @return the value of Pnr_no
   */
  void getPnr_no ()   {
    return Pnr_no;
  }

  /**
   * Set the value of Status
   * @param new_var the new value of Status
   */
  void setStatus (void new_var)   {
      Status = new_var;
  }

  /**
   * Get the value of Status
   * @return the value of Status
   */
  void getStatus ()   {
    return Status;
  }

  /**
   * Set the value of No_of_person
   * @param new_var the new value of No_of_person
   */
  void setNo_of_person (void new_var)   {
      No_of_person = new_var;
  }

  /**
   * Get the value of No_of_person
   * @return the value of No_of_person
   */
  void getNo_of_person ()   {
    return No_of_person;
  }

  /**
   * Set the value of Charge_type
   * @param new_var the new value of Charge_type
   */
  void setCharge_type (void new_var)   {
      Charge_type = new_var;
  }

  /**
   * Get the value of Charge_type
   * @return the value of Charge_type
   */
  void getCharge_type ()   {
    return Charge_type;
  }
private:


  void initAttributes () ;

};

#endif // TICKET_H
