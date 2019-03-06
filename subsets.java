import java.util.ArrayList;
import java.util.*;
import java.math.*;
class Main{
    public static void main(String[] args) {
        
    }
    public static int[][] subsets(int input[]) {
        int n = input.length;
        int size = Math.pow(2,n);
        int [][] output = new int[size][1];
        if (n == 0){
            output[0][0] = {0};
            return 1;
        }

		return null;
	}
}