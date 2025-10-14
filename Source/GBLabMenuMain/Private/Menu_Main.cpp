//------------------------------------------------------------------------------------------------------------
#include "Menu_Main.h"
//------------------------------------------------------------------------------------------------------------
#include "Materials/MaterialInstanceDynamic.h" // <-- ÃËÀÂÍÛÉ ÈÍÊËÞÄ!

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Materials/MaterialInterface.h"
//------------------------------------------------------------------------------------------------------------




// UGBLab_Menu_Main_Button 
void UGBLab_Menu_Main_Button::NativePreConstruct()
{
	Super::NativePreConstruct();

}
//------------------------------------------------------------------------------------------------------------
void UGBLab_Menu_Main_Button::Init_Widget(UTextBlock *text, UImage *image)
{
	Image_Button = image;
	TB_Button = text;
}
//------------------------------------------------------------------------------------------------------------
void UGBLab_Menu_Main_Button::Update()
{
	DMI_Button_Background = UMaterialInstanceDynamic::Create(Button_Background, this);
	DMI_Button_Background->SetScalarParameterValue("Hovered", 0.0f);

	Image_Button->SetBrushFromMaterial(DMI_Button_Background);
	TB_Button->SetText(Button_Text);
}
//------------------------------------------------------------------------------------------------------------




// UGBLab_Menu_Main
void UGBLab_Menu_Main::NativePreConstruct()
{
	Super::NativePreConstruct();
}
//------------------------------------------------------------------------------------------------------------
void UGBLab_Menu_Main::Init_Widget(UTextBlock *text, UImage *image)
{
	Image_Temp = image;
	Text_Block = text;
}
//------------------------------------------------------------------------------------------------------------
