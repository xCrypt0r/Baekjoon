import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner arch = new Scanner(System.in);
        String[] a = arch.nextLine().split(" ");
        arch.close();

        String big = new String();
        String small = new String();
        int[] result = new int[10001];

        if (a[0].length() >= a[1].length()) {
            a[0] = "0" + a[0];
            big = a[0];
            small = a[1];
        } else {
            a[1] = "0" + a[1];
            big = a[1];
            small = a[0];
        }

        int i = big.length() - 1, j = small.length() - 1;

        while (i != -1) {

            int n_b = Integer.parseInt(String.valueOf(big.charAt(i)), 10);

            if (j >= 0) {
                int n_s = Integer.parseInt(String.valueOf(small.charAt(j)), 10);
                result[i] = result[i] + n_b + n_s;
            } else {
                result[i] = result[i] + n_b;
            }

            if (result[i] >= 10) {
                result[i] = result[i] - 10;
                result[i - 1] = 1;
            }

            i--;
            j--;
        }

        for (int k = 0; k < big.length(); k++) {
            if (k == 0) {
                if (result[0] == 0) {
                    continue;
                } else {
                    System.out.print(result[k]);
                }
            } else {
                System.out.print(result[k]);
            }
        }

    }
}
