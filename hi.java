import java.util.Scanner;

public class hi {
    public static boolean kiemTraNguyenTo(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static boolean kiemTraChinhPhuong(int n) {
        int can = (int) Math.sqrt(n);
        return can * can == n;
    }

    public static boolean kiemTraHoanHao(int n) {
        int tong = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                tong += i;
            }
        }
        return tong == n;
    }

    public static boolean kiemTraFibonacci(int n) {
        int a = 0, b = 1;
        while (b < n) {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b == n;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Nhap so n: ");
        int n = input.nextInt();

        if (kiemTraNguyenTo(n)) {
            System.out.println(n + " la so nguyen to");
        }
        if (kiemTraChinhPhuong(n)) {
            System.out.println(n + " la so chinh phuong");
        }
        if (kiemTraHoanHao(n)) {
            System.out.println(n + " la so hoan hao");
        }
        if (kiemTraFibonacci(n)) {
            System.out.println(n + " la so Fibonacci");
        }
    }
}