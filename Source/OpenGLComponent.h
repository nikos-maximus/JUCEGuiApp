/*
  ==============================================================================

    OpenGLComponent.h
    Created: 4 Dec 2019 5:15:25pm
    Author:  nikos

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class OpenGLComponent
    : public Component
    , public OpenGLRenderer
{
public:
    OpenGLComponent();
    virtual ~OpenGLComponent();
    void newOpenGLContextCreated() override;
    void renderOpenGL() override;
    void openGLContextClosing() override;
    void paint(Graphics& g) override;

protected:
    OpenGLContext glContext;
    float r = 0.f, g = 0.f, b = 0.f;

private:
};
