//------------------------------------------------------------------------------------------------------------
#pragma once
//------------------------------------------------------------------------------------------------------------
#include "GBLabMenuMain.h"
//------------------------------------------------------------------------------------------------------------
#include "Menu_Main.generated.h"
//------------------------------------------------------------------------------------------------------------
class UTextBlock;
class UImage;
//------------------------------------------------------------------------------------------------------------
UCLASS(meta = (DisableNativeTick) ) class UGBLab_Menu_Main_Button : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativePreConstruct();

	UFUNCTION(BlueprintCallable) void Init_Widget(UTextBlock *text, UImage *image);
	UFUNCTION(BlueprintCallable) void Update();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) UImage *Image_Button = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) UTextBlock *TB_Button = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true", ToolTip = "temp") ) FText Button_Text;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true", ToolTip = "temp") ) UMaterialInterface *Button_Background = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic *DMI_Button_Background = 0;
};
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
