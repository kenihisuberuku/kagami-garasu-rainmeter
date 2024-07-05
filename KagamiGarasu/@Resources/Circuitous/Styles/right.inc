[innerEdgeStyle]
X=((#radius#*4)+#edging#)
Y=#edging#

[outerEdge]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | outerEdgeCommon
X=((#radius#*4)+#edging#)r
Y=r

[pieBg]
X=(4*#radius#+#edging#)r
Y=r
LineColor=#GlassWhite#,25
Hidden=#hidePieBg#

[pieCommon]
X=r
Y=r
LineColor=#pieColor#

[mainTextStyle]
X=(#radius#*4)
Y=(#radius#*0.1)r
StringAlign=RightBottom

[subTextStyle]
X=r
Y=r
StringAlign=RightTop

[dividerStyle]
X=#edging#

[iconStyle]
X=#edging#+#radius#-20

[midCircleStyle]
X=((#radius#*5)+#edging#)
Y=(#innerRadius#)