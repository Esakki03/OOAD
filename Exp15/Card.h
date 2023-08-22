
#ifndef CARD_H
#define CARD_H

#include <string>

/**
  * class Card
  * 
  */

class Card
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Card ();

  /**
   * Empty Destructor
   */
  virtual ~Card ();

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

  void Card_number;
  void Card_Holder;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Card_number
   * @param new_var the new value of Card_number
   */
  void setCard_number (void new_var)   {
      Card_number = new_var;
  }

  /**
   * Get the value of Card_number
   * @return the value of Card_number
   */
  void getCard_number ()   {
    return Card_number;
  }

  /**
   * Set the value of Card_Holder
   * @param new_var the new value of Card_Holder
   */
  void setCard_Holder (void new_var)   {
      Card_Holder = new_var;
  }

  /**
   * Get the value of Card_Holder
   * @return the value of Card_Holder
   */
  void getCard_Holder ()   {
    return Card_Holder;
  }
private:


  void initAttributes () ;

};

#endif // CARD_H
