package myproj.Interface;

public class MarkerInaterface {

    public static void main(String[] args) {
        AB obj = new AB();
        if (obj instanceof BC) {
            obj.show();
        } else {
            System.out.println("No Permission..");
        }
    }
}

interface BC {};  //marker interface...

class AB implements BC {

    public void show() {
        System.out.println("Hello..");
    }
}
