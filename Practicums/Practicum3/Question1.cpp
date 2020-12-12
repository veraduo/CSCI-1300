class ComputerLab
{
    private:
    
        string name;
        
        vector<double> speeds;
        
        vector<string> models;
        
        
    
    
    public:
    
        ComputerLab();
        
        ComputerLab(string labName);
        
        bool AddCPU(double speed, string model);
        
        double CalcAverage();
        
        int CountAvailable(double minSpeed);
        
        int CountAvailableModels(string model);
};