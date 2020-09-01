class Problem1 {
    public int reverse(int x) {
        long integer = 0;
        while (x != 0) {
            integer = integer * 10 + x % 10;
            x = x / 10;
        }
        
        if (integer < Integer.MIN_VALUE || integer > Integer.MAX_VALUE) {
            return 0;
        } else {
            return (int)integer;
        }
    }
}
