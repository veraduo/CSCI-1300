class Probability
{
    private:
    
        float prob_values[50];
        string event[50];
        
    public:
    
        Probability()
        {
            for(int i = 0; i < 50; i++)
            {
                prob_values[i] = 0.0;
                event[i] = "";
            }
        }
        
        void ReadFile(string filename)
        {
            ifstream infile;
    
            infile.open(filename);
    
            if(infile.fail())
            {
                return;
            }
    
            else
            {
                int count = 0;
                
                string line;
                
                while(getline(infile,line))
                {
                    if(line != "") 
                    {
                        count++;

                        string array[2];
                    
                        split(line, ',', array, 2);
                   
                        event[count] = array[0];
                    
                        prob_values[count] = stof(array[1]);
                    }
                }
            }
        }
            
        string getMostLikelyEvent(float num)
        {
            for(int i = 0; i < 50; i++)
            {
                if(prob_values[i] >= num)
                {
                    return event[i];
                }
            }
        }
    
};







//-----------------------------------------[BAD WAY]--------------------------------------------------
class Probability
{
    private: 

        float prob_values[50];
        string event[50];
       
    public: 
    
        Probability();
        void ReadFile(string filename);
        string getMostLikelyEvent(float num);
};

Probability::Probability()
{
    for(int i = 0; i < 50; i++)
    {
        prob_values[i] = 0.0;
        event[i] = "";
    }
}

void Probability::ReadFile(string filename)
{
    
    ifstream infile;
    
    infile.open(filename);
    
    if(infile.fail())
    {
        return;
    }
    
    else
    {
        int count = 0;
        
        string line;
        
        while (getline(infile, line)) 
        {
            if(line != "") 
            {
                string array[2];
                
                split(line, ',', array, 2);
               
                event[count] = array[0];
                
                prob_values[count] = stof(array[1]);
                
                count++;
            }
        }
            //return count;
    } 
        infile.close();
}

string Probability::getMostLikelyEvent(float num)
{
    string likely_event = "";
    
    for(int i = 0; i < 50; i++)
    {
        if(prob_values[i] >= num)
        {
            likely_event = event[i];
            break;
        }
    }
    
    return likely_event;
}