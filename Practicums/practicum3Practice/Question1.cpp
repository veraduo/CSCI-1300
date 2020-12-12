class Playlist 
{
    private: 

        string playlistName; 
        string currentSong;
        vector<string> songTitle;
        vector<int> songId;
        vector<string> songBand;
        
    public: 

        Playlist();
        
        Playlist(string);
        
        bool addSong(string name, string band, int Id);
        
        int playSongById(int);
        
        int playSongByTitle(string);
        
        int getBandCount(string);
};