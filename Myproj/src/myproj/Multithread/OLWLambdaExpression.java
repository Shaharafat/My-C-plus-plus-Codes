package myproj.Multithread;

import java.util.logging.Level;
import java.util.logging.Logger;

public class OLWLambdaExpression {

    public static void main(String[] args) {
        AB obj = new AB();
        obj.start();

        BC obj2 = new BC();

        Thread t = new Thread(obj2);
        t.start();
    }

}

class AB extends Thread {

    public void show() {
        for (int i = 0; i < 5; i++) {
            try {
                System.out.println("Hi.");
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(AB.class.getName()).log(Level.SEVERE, null, ex);
            }
        }

    }

    public void run() {
        show();
    }
}

class BC implements Runnable {

    public void make() {
        for (int i = 0; i < 5; i++) {
            try {
                System.out.println("Hello..");
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(BC.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }

    public void run() {
        make();
      
    }
}
