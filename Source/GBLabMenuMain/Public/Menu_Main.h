//------------------------------------------------------------------------------------------------------------
#pragma once
//------------------------------------------------------------------------------------------------------------
#include "GBLabMenuMain.h"
//------------------------------------------------------------------------------------------------------------
#include "Menu_Main.generated.h"
//------------------------------------------------------------------------------------------------------------
UCLASS(meta = (DisableNativeTick) ) class UGBLab_Menu_Main_Button : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativePreConstruct();

	UFUNCTION(BlueprintCallable) void Init_Widget();

};
//------------------------------------------------------------------------------------------------------------
class UTextBlock;
class UImage;
//------------------------------------------------------------------------------------------------------------
UCLASS(meta = (DisableNativeTick) ) class GBLABMENUMAIN_API UGBLab_Menu_Main: public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativePreConstruct();

	UFUNCTION(BlueprintCallable) void Init_Widget(UTextBlock *text, UImage *image);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) UImage *Image_Temp = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) UTextBlock *Text_Block = 0;

};
//------------------------------------------------------------------------------------------------------------
