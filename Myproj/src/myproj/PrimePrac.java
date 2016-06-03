package myproj;

import java.util.Scanner;

public class PrimePrac {

    public static void main(String[] args) {
        Prime obj = new Prime();
        obj.show();

    }

}

class Prime {

    public int n, i, j;

    public void show() {
        System.out.printf("Enter the value of N: ");
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        for (i = 2; i <= n; i++) {
            for (j = 2; j <= i; j++) {
                if (i % j == 0) {
                    break;
                }
            }
            if (i == j) {
                System.out.println(i);
            }
        }
    }

}
