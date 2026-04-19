#pragma once
#include <iostream>
#include <vector>
#include <string>

class Media {
protected:
    std::string name;
    std::string company;
public:
    Media(const std::string& n, const std::string& c) : name(n), company(c) {}
    virtual ~Media() {}
    virtual void showInfo() const = 0;
};

class AudioMedia : public Media {
private:
    std::string singer;
public:
    AudioMedia(const std::string& n, const std::string& c, const std::string& s)
        : Media(n, c), singer(s) {}
    void showInfo() const override {
        std::cout << "Audio Media:\nName: " << name << "\nCompany: " << company
                   << "\nSinger: " << singer << "\n" << std::endl;
    }
};

class VideoMedia : public Media {
private:
    std::string actor;
public:
    VideoMedia(const std::string& n, const std::string& c, const std::string& a)
        : Media(n, c), actor(a) {}
    void showInfo() const override {
        std::cout << "Video Media:\nName: " << name << "\nCompany: " << company
                   << "\nActor: " << actor << "\n" << std::endl;
    }
};

class Software : public Media {
private:
    std::string version;
public:
    Software(const std::string& n, const std::string& c, const std::string& v)
        : Media(n, c), version(v) {}
    void showInfo() const override {
        std::cout << "Software:\nName: " << name << "\nCompany: " << company
                   << "\nVersion: " << version << "\n" << std::endl;
    }
};

class Shelf {
private:
    std::vector<Media*> mediaList;
public:
    void add(Media* media) {
        mediaList.push_back(media);
    }
    void printMediaInfo() const {
        for (const auto& media : mediaList) {
            media->showInfo();
        }
    }
    ~Shelf() {
        for (auto media : mediaList) {
            delete media;
        }
    }
};