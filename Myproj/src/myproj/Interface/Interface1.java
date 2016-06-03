package myproj.Interface;

public class Interface1 {

    public static void main(String[] args) {
        C obj = new C();

        obj.show();
        obj.display();
    }

}

interface A {

    public void show();
}
interface B{
    public void display();
}
class C implements A,B {

    public void show() {
        System.out.println("Hello..");
    }

    public void display() {
        System.out.println("Hi..");
    }
}
