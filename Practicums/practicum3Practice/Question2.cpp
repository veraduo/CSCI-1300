class Quarterback
{
    private: 

        int pass_completes;
        int pass_attempts;
        int total_yards;
        int touchdowns;
        int intercepts;
        string name;
        
        
    public: 
    
        Quarterback();
        
        Quarterback(string n, int comp, int att, int yards, int td, int i);
        
        Quarterback(string d);
        
        void setName(string new_name);
        
        void setComp(int x);
        
        void setAtt(int x);
        
        void setYards(int x);
        
        int getYards();
        
        void setTD(int x);
        
        int getTD();
        
        void setPick(int x);
        
        int getPick();
        
        void PassCompleted(int x);
        
        void PassAttempted();
        
        void Interception();
        
        float PasserRating();
        
        void Touchdown(int x);
        
        string getName();
        
        int getComp();
        
        int getAtt();
}; 