/*
  ==============================================================================

    OpenGLComponent.cpp
    Created: 4 Dec 2019 5:15:34pm
    Author:  nikos

  ==============================================================================
*/

#include "OpenGLComponent.h"

OpenGLComponent::OpenGLComponent()
{
    glContext.setRenderer(this);
    glContext.attachTo(*this);
}

OpenGLComponent::~OpenGLComponent()
{}

void OpenGLComponent::newOpenGLContextCreated()
{
    glDisable(GL_DEPTH_TEST);
    
    glContext.setContinuousRepainting(true);
}

void OpenGLComponent::renderOpenGL()
{
    glClearColor(r, g, b, 1.f);
    glClear(GL_COLOR_BUFFER_BIT);
    r += 0.01f;
    g += 0.005f;
    b += 0.002f;
}

void OpenGLComponent::openGLContextClosing()
{
    glContext.setContinuousRepainting(false);
}

void OpenGLComponent::paint(Graphics& g)
{
    g.setFont (Font (16.0f));
    g.setColour (Colours::black);
    g.drawText ("OpenGL!", getLocalBounds(), Justification::centred, true);
}
