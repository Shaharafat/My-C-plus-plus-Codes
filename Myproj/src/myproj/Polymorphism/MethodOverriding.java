package myproj.Polymorphism;

public class MethodOverriding {

    public static void main(String[] args) {
        Bc obj = new Bc();
        obj.show();

    }

}

class Ab {  // Method Overriding / Late Binding / Dynamic Binding / Runtime Polymorphism...

    public void show() {
        System.out.println("Hello Show A...");
    }

}

class Bc extends Ab {

    public void show() {
        System.out.println("Hello Show B...");
    }
}
