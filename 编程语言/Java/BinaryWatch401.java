public class BinaryWatch401{
    public static void main(String[] args) {
        for(int i=0;i<12;i++){
            System.out.print(i);

            int count = 0;
            int n = i;
            while(n != 0)
            {
                ++ count;
                n=n & (n-1);
            }
            System.out.println(" count="+count);
        }
    }
}
