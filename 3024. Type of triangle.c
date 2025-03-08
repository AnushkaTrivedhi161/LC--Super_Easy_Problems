char* triangleType(int* nums, int numsSize) {
    int a=nums[0];
    int b=nums[1];
    int c=nums[2];
    if( ((a+b)<=c) || ((a+c)<=b) || ((c+b)<=a) )
    {
        return "none";
    }
    else if((a == b)&&(a == c))
    {
        return "equilateral";
    }
    else if((a!= b) && (a!=c) && (b!=c))
    {
        return "scalene";
    }
    else if (((a==b) && (a!=c)) || ((b==c) && (b!=a)) || ((c==a) && (c!=b)))
    {
        return "isosceles";
    }
    
    return 0;
}
