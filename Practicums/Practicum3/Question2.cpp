class Time
{
    private:
    
        int hours;
        
        int minutes;
        
        int seconds;
    
    public:
        
        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        
        Time(int hours_, int minutes_, int seconds_)
        {
            hours = hours_;
            minutes = minutes_;
            seconds = seconds_;
        }
        
        void setHours(int hours_)
        {
            hours = hours_;
        }
        
        int getHours()
        {
            return hours;
        }
        
        void setMinutes(int minutes_)
        {
            minutes = minutes_;
        }
        
        int getMinutes()
        {
            return minutes;
        }
        
        void setSeconds(int seconds_)
        {
            seconds = seconds_;
        }
        
        int getSeconds()
        {
            return seconds;
        }
        
        int timeInSeconds()
        {
            int sec = hours*3600 + minutes*60 + seconds;
            
            return sec;
        }
};

