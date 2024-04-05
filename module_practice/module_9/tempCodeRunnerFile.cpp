#include <iostream>

using namespace std;

struct YoutubeChannel{
    string Name;
    int SubscriberCount;

    YoutubeChannel(string name, int subscriberCount){
        Name = name;
        SubscriberCount = subscriberCount;
    }
};

// void operator <<(ostream& COUT, YoutubeChannel& ytChannel){
//     COUT << "Name: " << ytChannel.Name << endl;
//     COUT << "Subscriber: " << ytChannel.SubscriberCount << endl;
// };

// Took out void to handle multiple outputs
ostream& operator <<(ostream& COUT, YoutubeChannel& ytChannel){
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subs: " << ytChannel.SubscriberCount<< endl;

    return COUT;
}

int main(){
    YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
    YoutubeChannel yt2 = YoutubeChannel("AlexVlogs",1991);
    
    cout << yt1 << yt2;

    return 0;
}

