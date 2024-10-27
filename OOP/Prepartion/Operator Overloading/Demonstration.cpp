#include<iostream>
#include<string>
#include<list>

using namespace std;

class YoutubeChannel

{
private:
    /* data */
public:
    string Name;
    int SubcribersCount;  

    YoutubeChannel(string name,int subcribersCount)
    {
           Name = name;
        SubcribersCount = subcribersCount;
    }

    bool operator== ( const YoutubeChannel & channel)
    const{
        return this->Name == channel.Name;

    }

};
ostream & operator<<(ostream & COUT , YoutubeChannel & ytchanel)
{
     COUT<<"Name : " << ytchanel.Name<<endl;
     COUT<<"Subcribers Count : " <<ytchanel.SubcribersCount<<endl;
     return COUT;
}

class MyCollection
{
    public:
   list < YoutubeChannel > mychannels;

   void operator+=(YoutubeChannel & channel)
   {
         this->mychannels.push_back(channel);
   }

    void operator-=(YoutubeChannel & channel)
   {
         this->mychannels.remove(channel);
   }
};

ostream& operator<<(ostream & COUT , MyCollection & mycollection)
{
    for (YoutubeChannel ytchannel : mycollection.mychannels)
    COUT <<ytchannel <<endl;
    return COUT;
}

int main()
{
    YoutubeChannel yt1=YoutubeChannel("Get it done", 1000  );
        YoutubeChannel yt2=YoutubeChannel("Second Channel", 8000  );

   // cout<<yt1; //but this is a much simpler way
    //operator<<(cout , yt1);// we can also call it like a function 
    
    MyCollection mycollection;
    mycollection += yt1;
    mycollection += yt2;
    
    mycollection -= yt2;
    
    cout << mycollection;
    
    cin.get();
}
