int countDigits(int num) {
    int c = 0;
    int temp= num; 
    int rem=0;
    while (num != 0) {
        rem = num % 10;   
        if (rem!= 0 && temp % rem == 0) {
            c++;  
        }
        num/=10;
    }

    return c;
}
