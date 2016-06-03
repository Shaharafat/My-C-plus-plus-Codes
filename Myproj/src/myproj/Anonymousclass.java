package myproj;

public class Anonymousclass {

    public static void main(String[] args) {
        i obj = new i() {
            public void show() {
                System.out.println("Hi..");
            }
        };  //semicolon must...
        obj.show();

    }

}

class i {

    public void show() {
        System.out.println("Hello...");
    }
}
