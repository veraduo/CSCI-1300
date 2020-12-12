class DogProfile
{
    private:
    
        string name;
        
        string temperament;
        
        float bitingProbability;
        
    public:
    
        DogProfile()
        {
            name = "Fido";
            
            temperament = "always wags tail";
            
            bitingProbability = -100.0;
    
        }
        
        DogProfile(string dogName, string temp, float prob)
        {
            name = dogName;
            temperament = temp;
            bitingProbability = prob;
        }
    
        void setName(string name_)
        {
             name = name_;
        }
        
        string getName()
        {
            return name;
        }
        
        void setTemperament(string temperament_)
        {
            temperament = temperament_;
        }
        
        string getTemperament()
        {
            return temperament;
        }
        
        void setBitingProbability(float bitingProbability_)
        {
            bitingProbability = bitingProbability_;
        }
        
        float getBitingProbability()
        {
            return bitingProbability;
        }
        
        string goodBoy()
        {
            if(bitingProbability <= 1000.0)
            {
                return "Good Boy";
            }
            
            else if(bitingProbability > 1000.0)
            {
                return "Bad Boy";
            }
        }
};


//--------------------------------------------------[long way]-----------------------------------------------------------------------------

class DogProfile
{
    private:
    
        string name;
        
        string temperament;
        
        float bitingProbability;
        
    public:
    
        DogProfile();
        DogProfile(string, string, float);
        
        void setName(string name_);
        string getName();
        
        void setTemperament(string temperament_);
        string getTemperament();
        
        void setBitingProbability(float bitingProbability_);
        float getBitingProbability();
        
        string goodBoy();
};

DogProfile::DogProfile()
{
    name = "Fido";
    
    temperament = "always wags tail";
    
    bitingProbability = -100.0;
    
}

DogProfile::DogProfile(string dogName, string temp, float prob)
{
    name = dogName;
    temperament = temp;
    bitingProbability = prob;
}

void DogProfile::setName(string name_)
{
    name = name_;
}

string DogProfile::getName()
{
    return name;
}

void DogProfile::setTemperament(string temperament_)
{
    temperament = temperament_;
}

string DogProfile::getTemperament()
{
    return temperament;
}

void DogProfile::setBitingProbability(float bitingProbability_)
{
    bitingProbability = bitingProbability_;
}

float DogProfile::getBitingProbability()
{
    return bitingProbability;
}

string DogProfile::goodBoy()
{
    if(bitingProbability <= 1000.0)
    {
        return "Good Boy";
    }
    
    else if(bitingProbability > 1000.0)
    {
        return "Bad Boy";
    }
}
