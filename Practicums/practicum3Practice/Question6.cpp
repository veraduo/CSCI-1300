class Stats
{
    private:
    
        vector<string> data;
        
    public:
    
        Stats(){};
        
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
                string line;
                
                while(getline(infile,line))
                {
                    data.push_back(line);
                }
            }
        }
        
        float getAvgStringLength()
        {
            double total = 0;
            
            for(int i = 0; i < data.size(); i ++)
            {
                total += data[i].size();
            }
            
            return total / data.size();
        }
        
        string getLongestString()
        {
            int max = 0;
            int maxPos;
            
            for(int i = 0; i < data.size(); i++)
            {
                if (data[i].size() >= max)
                {
                    max = data[i].size();
                    maxPos = i;
                }
                
            }
            
            return data[maxPos];
        }
};

//------------------------------[BAD WAY]--------------------------------------
class Stats
{
    private:

        vector<string> data;
        
    public:

        Stats();
    
        void ReadFile(string filename);
        
        float getAvgStringLength();
        
        string getLongestString();
};

Stats::Stats(){}

void Stats::ReadFile(string filename)
{
    ifstream infile;
    
    infile.open(filename);
    
    if(infile.fail())
    {
        return;
    }
    
    else
    {
        string line;
        
        while (getline(infile, line)) 
        {
            if(line != "") 
            {
                data.push_back(line);
            }
        }
    }
}

float Stats::getAvgStringLength()
{
    double total = 0;
    
    for(int i = 0; i < data.size(); i++)
    {
        total += data[i].size();
    }
    
    return total / data.size();
}

string Stats::getLongestString()
{
    double max = 0;
    
    int maxPos;
    
    for(int i = 0; i < data.size(); i++)
    {
        if(data[i].size() >= max)
        {
            max = data[i].size();
            maxPos = i;
        }
    }
    
    return data[maxPos];
}