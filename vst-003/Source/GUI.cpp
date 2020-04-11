/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUI.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUI::GUI ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

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


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUI::~GUI()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    m_sl = nullptr;
    m_lb = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUI::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUI::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GUI::sliderValueChanged (Slider* sliderThatWasMoved)
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



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUI" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <SLIDER name="sl" id="3e7f0bb4aa66d09" memberName="m_sl" virtualName=""
          explicitFocusOrder="0" pos="88 88 192 24" min="0.0" max="100.0"
          int="1.0" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="lb" id="eb703e4d5f6c630c" memberName="m_lb" virtualName=""
         explicitFocusOrder="0" pos="8 88 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="test_label" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

