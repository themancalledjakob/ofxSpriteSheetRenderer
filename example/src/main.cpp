#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    ofSetupOpenGL(1920,1080,OF_GAME_MODE);			// <-------- setup the GL context

    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp(new ofApp());

//    ofGLFWWindowSettings settings;
//    settings.setGLVersion(2,1);
//    settings.setSize(1920,1080);
//    settings.setPosition(glm::vec2(0,0));
//    settings.setSize(1024,768);
//    settings.setPosition(glm::vec2(1920,0));
//    settings.numSamples = 4;
//    settings.monitor = 0;
//    settings.windowMode = OF_FULLSCREEN;
//    ofCreateWindow(settings);

//    // this kicks off the running of my app
//    // can be OF_WINDOW or OF_FULLSCREEN
//    // pass in width and height too:
//    ofRunApp(new ofApp());

    //settings.setSize(1920, 1080);
    //settings.setFSAASamples(4);

}
