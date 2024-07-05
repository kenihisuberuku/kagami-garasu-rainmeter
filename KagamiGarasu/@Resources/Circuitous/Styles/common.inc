[Bg]
Meter=IMAGE
X=0
Y=0
W=((#radius#*6)+(#edging#*2))
H=((#radius#*2)+(#edging#*1))
SolidColor=0,0,0,1

[pieCommon]
W=(2*#radius#)
H=(2*#radius#)
LineLength=(#radius#*0.91)
LineStart=(#innerRadius#*1.14)

[roundlineCommon]
Solid=1
AntiAlias=1
StartAngle=(-1.25*PI) 
  ;-pi/2
RotationAngle=(1.5*PI*#pieSize#)

[innerEdgeCommon]
Hidden=1

[outerEdgeCommon]
Hidden=1

[dividerCommon]
Y=#radius#r
W=(#radius#*4)
H=(#radius#*0.05)
SolidColor=#outerRingColor#
Hidden=#hideDivider#

[mainTextCommon]
AntiAlias=1
;StringCase=Lower
FontFace=#mainFont#
FontSize=(#radius#*0.6)
FontColor=#textMainColor#
SolidColor=0,0,0,1

[subTextCommon]
AntiAlias=1
ClipStringW=(#radius#*4)
ClipStringH=(#subTwoLines# = 1 ? (#radius#) : (#radius#*0.5))
ClipString=2
FontFace=#subFont#
FontSize=(#radius#*0.3)
FontColor=#textSubColor#
Hidden=#hideSubText#

; circle level indicator
[midCircleText]
FontSize=(0.5*#radius#)
FontColor=#innerRingColor#
FontFace=Fira Code
StringAlign=Center
AntiAlias=1

InlineSetting=Size | (0.5*#radius#/2)
InlinePattern="%"

InlineSetting2=Size | (0.5*#radius#/1.5)
InlinePattern2=100
Percentual=1