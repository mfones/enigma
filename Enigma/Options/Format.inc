[Variables]
PanelHeight=395
ArrowY=288
LabelsQueue=ColorImage|HideBordersTop|HideBordersBottom

;---------------------------------------------------------------------
; METERS

;-----------------------
; INDICATOR ARROW

[Arrow]
Meter=IMAGE
MeterStyle=StyleMenuArrow
Y=#ArrowY#

;-----------------------
; FORMAT

[PanelName]
Meter=STRING
MeterStyle=StyleName | StyleNameFirst
Text=F  O  R  M  A  T

[PanelNotes]
Meter=STRING
MeterStyle=StyleNotes | StyleNameFirst
Text=Set font, color and options for your stylesheet.
H=24

;-----------------------

[StylesheetName]
Meter=STRING
MeterStyle=StyleName
Text="Stylesheet"

[StylesheetText]
Meter=STRING
MeterStyle=StyleText
Text="#Stylesheet#"
StringStyle=BOLD
LeftMouseUpAction=["#@#Addons\RainFile\RainFile.exe" "Folder" "Variables" "Stylesheet" "#EnigmaSettings#" "#@#Styles" "N"]
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Stylesheet')"
TooltipTitle="Stylesheet Name (Enigma Light/Enigma Dark/[Other])"
TooltipText=Click to type the name of the Enigma Stylesheet that you would like to use. This will affect the images and color scheme used throughout Enigma.#CRLF##CRLF#Enigma comes with two stylesheets: 'Enigma Dark' and 'Enigma Light'. If you have downloaded additional stylesheets, place them in Skins\Enigma\Resources\Styles.

;-----------------------

[PrimaryColorName]
Meter=STRING
MeterStyle=StyleName
Text="Colors"

[PrimaryColorBackground]
Meter=IMAGE
MeterStyle=StyleColorBackground | StyleColorBackgroundFirst

[PrimaryColor]
Meter=IMAGE
MeterStyle=StyleColor
SolidColor=#Color1#
LeftMouseUpAction=["#RainRGB#" "VarName=Color1" "FileName=#StyleSettings#" "RefreshConfig=Enigma"]
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Color1')"
TooltipTitle="Primary Color"
TooltipText=Click to choose the primary text color for #Stylesheet#'s skins. This is the color in which most actual content will be shown. Labels will be a more translucent version of the same color.

[LinkColorBackground]
Meter=IMAGE
MeterStyle=StyleColorBackground

[LinkColor]
Meter=IMAGE
MeterStyle=StyleColor
SolidColor=#ColorLink#
LeftMouseUpAction=["#RainRGB#" "VarName=ColorLink" "FileName=#StyleSettings#" "RefreshConfig=Enigma"]
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('ColorLink')"
TooltipTitle="Link Color"
TooltipText=Click to choose #Stylesheet#'s link color. This is the color that will appear on some clickable text and buttons.

[BorderColorBackground]
Meter=IMAGE
MeterStyle=StyleColorBackground | StyleColorBackground

[BorderColor]
Meter=IMAGE
MeterStyle=StyleColor
SolidColor=#ColorBorder#
LeftMouseUpAction=["#RainRGB#" "VarName=ColorBorder" "FileName=#StyleSettings#" "RefreshConfig=Enigma"]
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('ColorBorder')"
TooltipTitle="Border Color"
TooltipText=Click to choose #Stylesheet#'s border color. This is the color of borders, outlines and separators.

[PanelColorBackground]
Meter=IMAGE
MeterStyle=StyleColorBackground | StyleColorBackgroundNewRow

[PanelColor]
Meter=IMAGE
MeterStyle=StyleColor
SolidColor=#ColorPanel#
LeftMouseUpAction=["#RainRGB#" "VarName=ColorPanel" "FileName=#StyleSettings#" "RefreshConfig=Enigma"]
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('ColorPanel')"
TooltipTitle="Menu Panel Color"
TooltipText=Click to choose #Stylesheet#'s panel color. This is the color of control panel menus, such as the one to the left.

[FilterColorBackground]
Meter=IMAGE
MeterStyle=StyleColorBackground

[FilterColor]
Meter=IMAGE
MeterStyle=StyleColor
SolidColor=#ColorFilter#
LeftMouseUpAction=["#RainRGB#" "VarName=ColorFilter" "FileName=#StyleSettings#" "RefreshConfig=Enigma"]
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('ColorFilter')"
TooltipTitle="Filter Color"
TooltipText=Click to choose #Stylesheet#'s filter color. This color is used to soften the texture of the Taskbar skin.

[TransparentColorBackground]
Meter=IMAGE
MeterStyle=StyleColorBackground

[TransparentColor]
Meter=IMAGE
MeterStyle=StyleColor
SolidColor=#ColorTransparent#
LeftMouseUpAction=!CommandMeasure "MeasureInputFormat" "ExecuteBatch 1"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('ColorTransparent')"
TooltipTitle="Transparent Background Color"
TooltipText=Click to type the color of #Stylesheet#'s transparent backgrounds. This color must be written numerically. The default color is "0,0,0,2" - black and almost completely transparent - and should only be changed when debugging skin sizes and positions.

;-----------------------

[ColorImageName]
Meter=STRING
MeterStyle=StyleName
Text="Images"

[ColorImageIcon]
Meter=IMAGE
MeterStyle=StyleImage | StyleImageNoTint
ImageName=#@#Images\Home\Config.#ColorImage#.png
LeftMouseUpAction=!CommandMeasure MeasureInputScript "Write('ColorImage')"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('ColorImage')"
TooltipTitle="Image Color (W/B)"
TooltipText=Click to type the color of #Stylesheet#'s images. For Enigma Dark, this should be "W" (white) for optimal contrast. For Enigma Light, use "B" (black). This setting may be irrelevant depending on your chosen stylesheet.
DynamicVariables=1

;-----------------------

[FontName]
Meter=STRING
MeterStyle=StyleName
Text="Font"

[FontText]
Meter=STRING
MeterStyle=StyleText
Text="#Font#"
LeftMouseUpAction=!CommandMeasure "MeasureInputFormat" "ExecuteBatch 2"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Font')"
TooltipTitle="Font Name"
TooltipText=Click to type the name of the font used throughout #Stylesheet#. If you aren't sure which name to use, or whether your font is compatible with Rainmeter, you should use Jeff Morley's RainFont utility.

[Size1Name]
Meter=STRING
MeterStyle=StyleName | StyleNameSub
Text="1st Size"

[Size1Text]
Meter=STRING
MeterStyle=StyleText
Text="#Size1#"
FontSize=#Size1#
LeftMouseUpAction=!CommandMeasure "MeasureInputFormat" "ExecuteBatch 3"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Size1')"
TooltipTitle="1st Font Size"
TooltipText=You may change the font sizes used in #Stylesheet#. Be aware, however, that most skins are not infinitely flexible, and dramatic changes may break the layout of your skins.

[Size2Name]
Meter=STRING
MeterStyle=StyleName | StyleNameSub
Text="2nd Size"

[Size2Text]
Meter=STRING
MeterStyle=StyleText
Text="#Size2#"
FontSize=#Size2#
LeftMouseUpAction=!CommandMeasure "MeasureInputFormat" "ExecuteBatch 4"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Size2')"
TooltipTitle="2nd Font Size"
TooltipText=You may change the font sizes used in #Stylesheet#. Be aware, however, that most skins are not infinitely flexible, and dramatic changes may break the layout of your skins.

[Size3Name]
Meter=STRING
MeterStyle=StyleName | StyleNameSub
Text="3rd Size"

[Size3Text]
Meter=STRING
MeterStyle=StyleText
Text="#Size3#"
FontSize=#Size3#
LeftMouseUpAction=!CommandMeasure "MeasureInputFormat" "ExecuteBatch 5"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Size3')"
TooltipTitle="3rd Font Size"
TooltipText=You may change the font sizes used in #Stylesheet#. Be aware, however, that most skins are not infinitely flexible, and dramatic changes may break the layout of your skins.

[Size4Name]
Meter=STRING
MeterStyle=StyleName | StyleNameSub
Text="4th Size"

[Size4Text]
Meter=STRING
MeterStyle=StyleText
Text="#Size4#"
FontSize=#Size4#
LeftMouseUpAction=!CommandMeasure "MeasureInputFormat" "ExecuteBatch 6"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('Size4')"
TooltipTitle="4th Font Size"
TooltipText=You may change the font sizes used in #Stylesheet#. Be aware, however, that most skins are not infinitely flexible, and dramatic changes may break the layout of your skins.

;-----------------------

[SidebarBordersTopName]
Meter=STRING
MeterStyle=StyleName
Text="Sidebar Borders"

[SidebarBordersTopText]
Meter=STRING
MeterStyle=StyleText
Text=#HideBordersTopLabel#
LeftMouseUpAction=!CommandMeasure MeasureInputScript "Write('HideBordersTop')"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('HideBordersTop')"
TooltipTitle="Show Sidebar Borders (Y/N)"
TooltipText=Click to toggle whether Enigma Sidebar skins display a separator at the top and/or bottom of each skin.
DynamicVariables=1

[SidebarBordersBottomName]
Meter=STRING
MeterStyle=StyleName | StyleNameSub
Text="Bottom Borders"

[SidebarBordersBottomText]
Meter=STRING
MeterStyle=StyleText
Text=#HideBordersBottomLabel#
LeftMouseUpAction=!CommandMeasure MeasureInputScript "Write('HideBordersBottom')"
RightMouseUpAction=!CommandMeasure MeasureInputScript "Default('HideBordersBottom')"
TooltipTitle="Show Bottom Borders (Y/N)"
TooltipText=Click to toggle whether Enigma Sidebar skins display a separator at the top and/or bottom of each skin.
DynamicVariables=1

;-----------------------

[RestoreDefault]
Meter=STRING
MeterStyle=StyleText | StyleRestoreDefault