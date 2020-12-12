int addOddMinusEven(int start, int end)
{
    int sumEven = 0;
    int sumOdd = 0;
    
    for(int i = start; i < end; i++)
    {
        if(i % 2 ==0)
        {
            sumEven += i;
            //sumEven = sumEven + i;
        }
        
        else
        {
            sumOdd += i;
        }
        
    }
    
    int output = sumOdd - sumEven;
    return output;
    
}