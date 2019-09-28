
public class median {
	public static void main(String args[])
	{
		int n = 5;
		int m = 6;
		int [] A = new int[n];
		int [] B = new int[m];
		int low = 0;
		int high=4;
		double ans = 0;
		while(low <= high)
		{
			int partX = (low + high)/2;
			int partY = (n + m  + 1)/2 - partX;
			int maxLeftX = (partX==0)?Integer.MIN_VALUE:A[partX - 1];
			int minRightX = (partX==n)?Integer.MAX_VALUE:A[partX];
			
			int maxLeftY = (partY==0)?Integer.MIN_VALUE:B[partY-1];
			int minRightY  = (partY== m)?Integer.MAX_VALUE:B[partY];
			
			if(maxLeftX <= minRightY  && maxLeftY <= minRightX) {
				if((n + m)%2 == 0) {
					ans = (double)(Integer.max(maxLeftY, maxLeftX) + Integer.min(minRightX, minRightY))/2;
				}
				else {
					ans = (double) Integer.max(maxLeftY, maxLeftX);
				}
				break;
			}
			else if(maxLeftX > minRightY) {
				high = partX -1;
			}
			else {
				low = partX + 1;
			}
		}
		System.out.println(ans);
	}
}
