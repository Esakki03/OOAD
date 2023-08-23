
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


#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

/**
  * class Document
  * 
  */

class Document
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Document ();

  /**
   * Empty Destructor
   */
  virtual ~Document ();

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
  void viewDocument ()
  {
  }


  /**
   */
  void uploadDocument ()
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

  int documentID;
  string Type;
  string content;
  date dateCreated;
  int relatedParcelID;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of documentID
   * @param new_var the new value of documentID
   */
  void setDocumentID (int new_var)   {
      documentID = new_var;
  }

  /**
   * Get the value of documentID
   * @return the value of documentID
   */
  int getDocumentID ()   {
    return documentID;
  }

  /**
   * Set the value of Type
   * @param new_var the new value of Type
   */
  void setType (string new_var)   {
      Type = new_var;
  }

  /**
   * Get the value of Type
   * @return the value of Type
   */
  string getType ()   {
    return Type;
  }

  /**
   * Set the value of content
   * @param new_var the new value of content
   */
  void setContent (string new_var)   {
      content = new_var;
  }

  /**
   * Get the value of content
   * @return the value of content
   */
  string getContent ()   {
    return content;
  }

  /**
   * Set the value of dateCreated
   * @param new_var the new value of dateCreated
   */
  void setDateCreated (date new_var)   {
      dateCreated = new_var;
  }

  /**
   * Get the value of dateCreated
   * @return the value of dateCreated
   */
  date getDateCreated ()   {
    return dateCreated;
  }

  /**
   * Set the value of relatedParcelID
   * @param new_var the new value of relatedParcelID
   */
  void setRelatedParcelID (int new_var)   {
      relatedParcelID = new_var;
  }

  /**
   * Get the value of relatedParcelID
   * @return the value of relatedParcelID
   */
  int getRelatedParcelID ()   {
    return relatedParcelID;
  }
private:


  void initAttributes () ;

};

#endif // DOCUMENT_H
