#pragma once

#include <pu/Plutonium>

class HomeMenuLayout : public pu::ui::Layout
{
private:
public:
    HomeMenuLayout();

    PU_SMART_CTOR(HomeMenuLayout)
};

class MainApplication : public pu::ui::Application
{
private:
    HomeMenuLayout::Ref layout;

public:
    using Application::Application;
    PU_SMART_CTOR(MainApplication)

    // We need to define this, and use it to initialize everything
    void OnLoad() override;
};