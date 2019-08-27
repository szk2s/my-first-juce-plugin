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
class MyFirstJucePluginAudioProcessorEditor : public AudioProcessorEditor, private Slider::Listener
{
public:
    MyFirstJucePluginAudioProcessorEditor (MyFirstJucePluginAudioProcessor&);
    ~MyFirstJucePluginAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    void sliderValueChanged (Slider* slider) override;

    MyFirstJucePluginAudioProcessor& processor;

    Slider midiVolume;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MyFirstJucePluginAudioProcessorEditor);
};
