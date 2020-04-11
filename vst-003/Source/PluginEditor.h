/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Vst003AudioProcessorEditor  : public AudioProcessorEditor,public Slider::Listener
{
public:
    Vst003AudioProcessorEditor (Vst003AudioProcessor&);
    ~Vst003AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Vst003AudioProcessor& processor;
    std::unique_ptr<Slider> m_sl;
    std::unique_ptr<Label> m_lb;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Vst003AudioProcessorEditor)
};
