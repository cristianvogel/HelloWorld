/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    g.setFont (Font (48.0f));
    g.setColour (Colours::seagreen);
    
    float opacity = 1.f;
    for (int i=0; i<(4*32); i+=32)
        
    {
        g.drawEllipse(i+30.f, 30.f, 28.F, 28.f, 2.f);
        g.setOpacity(opacity);
        opacity *= 0.75;
    }
    g.setOpacity(1.f);
    g.drawText ("Hello Disc World!", getLocalBounds(), Justification::centredRight, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
