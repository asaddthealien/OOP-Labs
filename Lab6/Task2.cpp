#include <iostream>
using namespace std;

class MediaLibrary {
protected:
    string filepath;
    string filesize;

public:
    MediaLibrary(string filepath, string filesize) : filepath(filepath), filesize(filesize) {}

    virtual void play() 
    {
        cout << "Playing.." << endl;
    }

    virtual void stop() 
    {
        cout << "Stopping.." << endl;
    }

    virtual ~MediaLibrary() {}
};

class VisualMedia : virtual public MediaLibrary {
protected:
    string resolution;

public:
    VisualMedia(string filepath, string filesize, string resolution)
        : MediaLibrary(filepath, filesize), resolution(resolution) {}
};

class AudioMedia : virtual public MediaLibrary {
protected:
    string samplerate;

public:
    AudioMedia(string filepath, string filesize, string samplerate) : MediaLibrary(filepath, filesize), samplerate(samplerate) {}
};

class VideoFile : public VisualMedia, public AudioMedia {
public:
    VideoFile(string filepath, string filesize, string resolution, string samplerate) : MediaLibrary(filepath, filesize), VisualMedia(filepath, filesize, resolution),  AudioMedia(filepath, filesize, samplerate) {}

    void play() override 
    {
        cout << "Playing video file: " << filepath << endl;
    }
};

int main() 
{
    VideoFile video("life", "1TB", "8k", "44100"); 
    MediaLibrary* mediaptr = &video;
    mediaptr->play();
    mediaptr->stop();

    return 0;
}
