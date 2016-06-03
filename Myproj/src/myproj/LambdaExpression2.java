package myproj;

public class LambdaExpression2 {

    public static void main(String[] args) {
        D obj = new D()
        {
            public void show()
            {
                System.out.println("Hello...");
            }
        };
                obj.show();
    }

}
@FunctionalInterface  //Latest feature of JAVA 1.8....
interface D {

    void show();
}
