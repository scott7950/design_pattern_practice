
#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <memory>

/**
  * class Singleton
  * 
  */

class Singleton
{
public:

  // Constructors/Destructors
  //  

  /**
   * Empty Destructor
   */
  virtual ~Singleton ();


  /**
   * Get the value of instance
   * @return the value of instance
   */
  static std::shared_ptr<Singleton> getInstance ()   {
      std::shared_ptr<Singleton> instance = __instance.lock();

      if(!instance) {
          //instance = std::shared_ptr<Singleton>(new Singleton);
          instance.reset(new Singleton);
          __instance = instance;
      }

      return instance;
  }
  

  void display();

private:

  // Private attributes
  //  
  static std::weak_ptr<Singleton> __instance;

  int data;

  Singleton ();

};

#endif // SINGLETON_H
