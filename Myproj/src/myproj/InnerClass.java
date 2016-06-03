package myproj;

public class InnerClass {

    public static void main(String[] args) {
        first b = new first();
        first.second a = b.new second();
        a.show();
    }

}

class first {

    int Rollno;
    String sname;

    class second {

        public void show() {
            System.out.println("Hello...");
        }
    }
}
