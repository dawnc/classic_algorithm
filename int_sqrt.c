//1st alg
//binary restoring square root extraction
//basic principle:
//(r+1)^2 = r^2 + 2*r + 1;
//r^2*4=r^2*2^2=(2r)^2;

int mySqrt(int x) {
     
    unsigned int r = 0, rem = 0, div, i, xx=x;
    
    for(i = 0; i < 16; i++)
    {
        rem |= (xx >> 30);
        xx <<= 2;
        r <<= 1;
        div = (r << 1) + 1; //2r+1
        if(div <= rem) //just compare the new 2r+1 to delta value, because the delta value has been calculated in last step.
        {
            rem -= div; //substract 2r+1 for compare in next step.
            r++;
        }
        rem <<= 2;
    }

    return r;
}

//my own derived version
int mySqrt(int x) {
     
    unsigned int r = 0 , t, i;
    
    for(i = 0; i < 16; i++)
    {
        r <<= 1;
        t = x >> (30 - i*2); 
        if(r*r + r*2 + 1 <= t)
            r++;
    }

    return r;
}

//2nd alg
//newton's approach iteration

