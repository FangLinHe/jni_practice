public class TestJniPrimitive
{
  static
  {
    System.loadLibrary("myjni");
  }

  private native double average(int n1, int n2);

  public static void main(String args[])
  {
    System.out.println("In java, the average is " + 
        new TestJniPrimitive().average(3, 2));
  }
}
