package myproj;

import java.util.Scanner;

public class PalindromNumber {

    public static void main(String[] args) {

        palin pal = new palin();
        pal.make();
    }

}

class palin {

    int i, j, k, n = 0;

    public void make() {
        System.out.printf("Enter Number for justify it is Palindrom or not: ");
        Scanner s = new Scanner(System.in);
        i = s.nextInt();
        k = i;
        while (i > 0) {
            j = i % 10;
            i = i / 10;
            n = n * 10 + j;
        }
        if (n == k) {
            System.out.println("This is a Palindrom Number.");
        } else {
            System.out.println("This is not a Palindrom Number.");
        }
    }
}
