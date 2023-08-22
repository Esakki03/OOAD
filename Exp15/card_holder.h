
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


#ifndef CARD_HOLDER_H
#define CARD_HOLDER_H

#include <string>

/**
  * class card_holder
  * 
  */

class card_holder
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  card_holder ();

  /**
   * Empty Destructor
   */
  virtual ~card_holder ();

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
  void sign_bill ()
  {
  }


  /**
   */
  void give_card ()
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

  void item_purchased;
  void credit_card;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of item_purchased
   * @param new_var the new value of item_purchased
   */
  void setItem_purchased (void new_var)   {
      item_purchased = new_var;
  }

  /**
   * Get the value of item_purchased
   * @return the value of item_purchased
   */
  void getItem_purchased ()   {
    return item_purchased;
  }

  /**
   * Set the value of credit_card
   * @param new_var the new value of credit_card
   */
  void setCredit_card (void new_var)   {
      credit_card = new_var;
  }

  /**
   * Get the value of credit_card
   * @return the value of credit_card
   */
  void getCredit_card ()   {
    return credit_card;
  }
private:


  void initAttributes () ;

};

#endif // CARD_HOLDER_H
