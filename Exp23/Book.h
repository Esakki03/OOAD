
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include vector



/**
  * class Account
  * 
  */

class Account
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Account ();

  /**
   * Empty Destructor
   */
  virtual ~Account ();

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

  int Borrowed_count;
  int Reserved_count;
  int Returned_Count;
  int Lost_count;
  int Fine_Amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Borrowed_count
   * @param new_var the new value of Borrowed_count
   */
  void setBorrowed_count (int new_var)   {
      Borrowed_count = new_var;
  }

  /**
   * Get the value of Borrowed_count
   * @return the value of Borrowed_count
   */
  int getBorrowed_count ()   {
    return Borrowed_count;
  }

  /**
   * Set the value of Reserved_count
   * @param new_var the new value of Reserved_count
   */
  void setReserved_count (int new_var)   {
      Reserved_count = new_var;
  }

  /**
   * Get the value of Reserved_count
   * @return the value of Reserved_count
   */
  int getReserved_count ()   {
    return Reserved_count;
  }

  /**
   * Set the value of Returned_Count
   * @param new_var the new value of Returned_Count
   */
  void setReturned_Count (int new_var)   {
      Returned_Count = new_var;
  }

  /**
   * Get the value of Returned_Count
   * @return the value of Returned_Count
   */
  int getReturned_Count ()   {
    return Returned_Count;
  }

  /**
   * Set the value of Lost_count
   * @param new_var the new value of Lost_count
   */
  void setLost_count (int new_var)   {
      Lost_count = new_var;
  }

  /**
   * Get the value of Lost_count
   * @return the value of Lost_count
   */
  int getLost_count ()   {
    return Lost_count;
  }

  /**
   * Set the value of Fine_Amount
   * @param new_var the new value of Fine_Amount
   */
  void setFine_Amount (int new_var)   {
      Fine_Amount = new_var;
  }

  /**
   * Get the value of Fine_Amount
   * @return the value of Fine_Amount
   */
  int getFine_Amount ()   {
    return Fine_Amount;
  }
private:


  void initAttributes () ;

};

#endif // ACCOUNT_H


#ifndef BOOK_H
#define BOOK_H

#include <string>
#include vector



/**
  * class Book
  * 
  */

class Book
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Book ();

  /**
   * Empty Destructor
   */
  virtual ~Book ();

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
  void Show_details ()
  {
  }


  /**
   */
  void Reservation_status ()
  {
  }


  /**
   */
  void Feedback ()
  {
  }


  /**
   */
  void Book_request ()
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

  string Title;
  string Author;
  void ISBN;
  void Publication;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Title
   * @param new_var the new value of Title
   */
  void setTitle (string new_var)   {
      Title = new_var;
  }

  /**
   * Get the value of Title
   * @return the value of Title
   */
  string getTitle ()   {
    return Title;
  }

  /**
   * Set the value of Author
   * @param new_var the new value of Author
   */
  void setAuthor (string new_var)   {
      Author = new_var;
  }

  /**
   * Get the value of Author
   * @return the value of Author
   */
  string getAuthor ()   {
    return Author;
  }

  /**
   * Set the value of ISBN
   * @param new_var the new value of ISBN
   */
  void setISBN (void new_var)   {
      ISBN = new_var;
  }

  /**
   * Get the value of ISBN
   * @return the value of ISBN
   */
  void getISBN ()   {
    return ISBN;
  }

  /**
   * Set the value of Publication
   * @param new_var the new value of Publication
   */
  void setPublication (void new_var)   {
      Publication = new_var;
  }

  /**
   * Get the value of Publication
   * @return the value of Publication
   */
  void getPublication ()   {
    return Publication;
  }
private:


  void initAttributes () ;

};

#endif // BOOK_H
