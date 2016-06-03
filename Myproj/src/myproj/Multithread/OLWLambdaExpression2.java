package myproj.Multithread;

import java.util.logging.Level;
import java.util.logging.Logger;

public class OLWLambdaExpression2 {

    public static void main(String[] args) {
        AB obj = new AB();
        obj.start();

        Thread t = new Thread(() -> {
            for (int i = 0; i < 5; i++) {
                try {
                    System.out.println("Hello..");
                    Thread.sleep(1000);
                } catch (InterruptedException ex) {
                    Logger.getLogger(BC.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        }
        );
        t.start();
    }

}

class x extends Thread {

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
