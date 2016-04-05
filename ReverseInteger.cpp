//https://www.interviewbit.com/problems/reverse-integer/
//only function


int Solution::reverse(int A) {

    long int ans=0;

    long int min = INT_MIN;
    long int max = INT_MAX;


    long int num=0,r=0;

   num=abs(A);

    while(num!=0)
    {
          r=num%10;
          ans=ans*10+r;
          num=num/10;

    }
    long int ans1=0;
    if(A<0)
    ans1=-1*ans;
    else{
    ans1=ans;

    }


    if( (ans1 < min) || (ans1 > max) )
    {
        return 0;
    }
    else
    {
        return (ans1);

  }
}
