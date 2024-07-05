[innerEdgeStyle]
X=#edging#
Y=#edging#

[outerEdge]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | outerEdgeCommon
X=r
Y=r

[pieBg]
X=r
Y=r
LineColor=#GlassWhite#,25
Hidden=#hidePieBg#

[pieCommon]
X=r
Y=r
LineColor=#pieColor#

[mainTextStyle]
X=(#radius#*2)+(0.5*#edging#)
;+(#edging#)
Y=(#radius#*1.2)
StringAlign=LeftBottom

[subTextStyle]
X=(#radius#*0.1)r
Y=r
StringAlign=LeftTop

[dividerStyle]
X=(#radius#*2)+(#edging#)

[midCircleStyle]
X=(#radius#)
Y=(#innerRadius#)