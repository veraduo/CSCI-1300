class CourseList
{
    private:
    
        string courses[50];
        
        string instructors[50];
        
    public:
    
        CourseList()
        {
            for(int i = 0; i < 50; i++)
            {
                courses[i] = "";
                instructors[i] = "";
            }
        }
        
        int LoadCourses(string filename)
        {
            ifstream infile;
    
            infile.open(filename);
    
            if(infile.fail())
            {
                return -1;
            }
    
            else
            {
                int count = 0;
                
                string line;
                
                while(getline(infile,line) && count < 50)
                {
                    if(line != "") 
                    {
                        string array[2];
                    
                        split(line, ',', array, 2);
                   
                        courses[count] = array[0];
                    
                        instructors[count] = array[1];
                        
                        count++;
                    }
                }
                
                return 0;
            }
        }
        
        int SearchForInstructor(string instructorName)
        {
            for(int i = 0; i < 50; i++)
            {
                if(instructorName == instructors[i])
                {
                    return i;
                }
            }
            
            return -1;
        }
        
        string GetCourse(string instructorName)
        {
            for(int i = 0; i < 50; i++)
            {
                if(instructorName == instructors[i])
                {
                    return courses[i];
                }
            }
            
            return "";
        }
};