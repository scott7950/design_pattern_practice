

/**
 * Class Singleton
 */
public class Singleton {

  //
  // Fields
  //

  static private Singleton instance;
  private int data;
  
  //
  // Other methods
  //

  /**
   * @return       Singleton
   */
  public static synchronized Singleton getInstance()
  {
      if(instance == null)
          instance = new Singleton();

      return instance;
  }

  public void display() {
      System.out.println(Integer.toString(data));
  }

  public void setData(int data) {
      this.data = data;
  }

  /**
   */
  private void Singleton()
  {
  }


}
