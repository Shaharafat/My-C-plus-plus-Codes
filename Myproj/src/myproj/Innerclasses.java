package myproj;

public class Innerclasses {

    public static void main(String[] args)
    {
        n obj = new n();
        n.sh a = obj.new sh();
        a.show();

    }

}

class n {

    int roll;
    String sname;

    class sh {

        public void show() {

            System.out.println("Hello...");
        }
    }
}
