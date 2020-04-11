/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Vst003AudioProcessorEditor::Vst003AudioProcessorEditor (Vst003AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
       m_sl.reset (new Slider ("sl"));
       addAndMakeVisible (m_sl.get());
       m_sl->setRange (0, 100, 1);
       m_sl->setSliderStyle (Slider::LinearHorizontal);
       m_sl->setTextBoxStyle (Slider::TextBoxRight, false, 50, 20);
       m_sl->addListener (this);

       m_sl->setBounds (88, 88, 192, 24);

       m_lb.reset (new Label ("lb",
                              TRANS("test_label")));
       addAndMakeVisible (m_lb.get());
       m_lb->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
       m_lb->setJustificationType (Justification::centredLeft);
       m_lb->setEditable (false, false, false);
       m_lb->setColour (TextEditor::textColourId, Colours::black);
       m_lb->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

       m_lb->setBounds (8, 88, 72, 24);


       //[UserPreSize]
       //[/UserPreSize]

       setSize (600, 400);
}

Vst003AudioProcessorEditor::~Vst003AudioProcessorEditor()
{
       m_sl = nullptr;
       m_lb = nullptr;
}

//==============================================================================
void Vst003AudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
   g.fillAll (Colour (0xff323e44));
}

void Vst003AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

void Vst003AudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == m_sl.get())
    {
        //[UserSliderCode_m_sl] -- add your slider handling code here..
        //[/UserSliderCode_m_sl]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

