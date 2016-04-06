//IBit palindrome-integer
//only function


int Solution::reverse(int A) {

    int ans=0;

    int num=0,r=0;
    num=A;
   if(A<0)
     return 0;
   else{}

    while(num!=0)
    {
          r=num%10;
          ans=ans*10+r;
          num=num/10;

    }



    if( ans==A )
    {
        return 1;
    }
    else
    {
        return 0);

  }
}
