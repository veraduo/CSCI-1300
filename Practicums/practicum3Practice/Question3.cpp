class Coffee
{
    private: 

        string roastType;
        float temp;
       
    public: 
    
        Coffee();
        
        Coffee(string, float);
        
        void setRoastType(string type_);
        
        string getRoastType();
        
        void setTemp(float coffeeTemp_);
        
        float getTemp();
        
        string drinkability();
};

Coffee::Coffee()
{
    roastType = "";
    temp = 180.0;
}

Coffee::Coffee(string type, float temp_)
{
    roastType = type;
    temp = temp_;
}

void Coffee::setRoastType(string type_)
{
    roastType = type_;
}

string Coffee::getRoastType()
{
   return roastType;
}

void Coffee::setTemp(float coffeeTemp_)
{
    temp = coffeeTemp_;
}

float Coffee::getTemp()
{
    return temp;
}

string Coffee::drinkability()
{
    if(temp < 100.0)
    {
        return "Too Cold";
    }
    else if(temp >= 100.0 && temp < 160.0)
    {
        return "Just Right";
    }
    else if(temp >= 160.0 && temp < 180.0)
    {
        return "Hot";
    }
    else if(temp >= 180.0)
    {
        return "Too Hot";
    }
}

//-------------------------------------------------[FAST METHOD]-----------------------------------------------------------------------

class Coffee
{
    private:
    
        string roastType;
        float temp;
    
    public:
    
        Coffee()
        {
            roastType = "";
            temp = 180.0;
        }
        
        Coffee(string roastType_, float temp_)
        {
            roastType = roastType_;
            temp = temp_;
        }
        
        void setRoastType(string roastType_)
        {
            roastType = roastType_;
        }
        
        string getRoastType()
        {
            return roastType;
        }
        
        void setTemp(float temp_)
        {
            temp = temp_;
        }
        
        float getTemp()
        {
            return temp;
        }
        
        string drinkability()
        {
            if(temp < 100.0)
            {
                return "Too Cold";
            }
            
            else if (temp >= 100.0 & temp < 160.0)
            {
                return "Just Right";
            }
            
            else if(temp >= 160.0 && temp < 180.0)
            {
                return "Hot";
            }
            
            else if(temp >= 180.0)
            {
                return "Too Hot";
            }
        }
    
};