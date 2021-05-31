public class hello01 {
    /**

        给定一个整数，写一个函数来判断它是否是 4 的幂次方。
        如果是，返回 true ；否则，返回 false 。

        整数 n 是 4 的幂次方需满足：存在整数 x 使得 n == 4^x

    */
    public static boolean isFore(int n){
        while(n>1){
            if(n%4!=0) return false;
            n=n/4;
        }
        return n==1;
    }

    /*
        如果 n 是 4 的幂，那么 n 的二进制表示中有且仅有一个 1
        并且这个 1 出现在从低位开始的第偶数个二进制位上
        （这是因为这个 1 后面必须有偶数个 0）。

        由于题目保证了 n 是一个 32 位的有符号整数，
        因此我们可以构造一个整数 mask，
        它的所有偶数二进制位都是 0，所有奇数二进制位都是 1。
        这样一来，我们将 n 和 mask 进行按位与运算，
        如果结果为 0，
        说明 n 二进制表示中的 1 出现在偶数的位置，
        否则说明其出现在奇数的位置。

    */
    public static boolean isFore1(int n){
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }

    /*
        如果 n 是 4 的幂，那么它可以表示成 4^x 的形式，
        我们可以发现它除以 3 的余数一定为 1
        如果n是2的幂却不是4的幂,那么它可以表示成4^x*2的形式，
        此时它除以3的余数一定为2。
        因此我们可以通过n除以3的余数是否为1来判断n是否是4的幂
    */
    public static boolean isFore2(int n){
        return n > 0 && (n & (n - 1)) == 0 && n % 3 == 1;
    }

    public static void main(String[] args) {
        System.out.println(isFore(-2147483648));
        System.out.println(isFore1(-2147483648));
        System.out.println(isFore2(-2147483648));
    }
}
