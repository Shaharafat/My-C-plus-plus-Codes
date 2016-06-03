package myproj;

public class NestedClass {

    public static void main(String[] args)
    {
        m obj = new m();
        m.n obj1 = new m.n(); //this is the main thing....
        obj1.show();
        

    }

}

class m {

    int roll;
    String sname;

    static class n {  //static class is called as Nested Class....

        public void show() {

            System.out.println("Hello...");
        }
    }
}
