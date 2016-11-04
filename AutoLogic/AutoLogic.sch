<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="Door">
            <attr value="E11" name="LOC">
                <trait verilog="all:0 wsynth:1" />
                <trait vhdl="all:0 wa:1 wd:1" />
            </attr>
        </signal>
        <signal name="Ignition">
            <attr value="K2" name="LOC">
                <trait verilog="all:0 wsynth:1" />
                <trait vhdl="all:0 wa:1 wd:1" />
            </attr>
        </signal>
        <signal name="Seatbelt">
            <attr value="A13" name="LOC">
                <trait verilog="all:0 wsynth:1" />
                <trait vhdl="all:0 wa:1 wd:1" />
            </attr>
        </signal>
        <signal name="Buzzer">
            <attr value="M6" name="LOC">
                <trait verilog="all:0 wsynth:1" />
                <trait vhdl="all:0 wa:1 wd:1" />
            </attr>
        </signal>
        <port polarity="Input" name="Door" />
        <port polarity="Input" name="Ignition" />
        <port polarity="Input" name="Seatbelt" />
        <port polarity="Output" name="Buzzer" />
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="buf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="0" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="128" />
            <line x2="64" y1="-64" y2="0" x1="64" />
        </blockdef>
        <block symbolname="and2" name="XLXI_1">
            <blockpin signalname="XLXN_3" name="I0" />
            <blockpin signalname="XLXN_1" name="I1" />
            <blockpin signalname="XLXN_5" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_3">
            <blockpin signalname="XLXN_2" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_4">
            <blockpin signalname="XLXN_6" name="I0" />
            <blockpin signalname="XLXN_5" name="I1" />
            <blockpin signalname="XLXN_9" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_5">
            <blockpin signalname="XLXN_7" name="I" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_6">
            <blockpin signalname="XLXN_8" name="I" />
            <blockpin signalname="XLXN_2" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_7">
            <blockpin signalname="Door" name="I" />
            <blockpin signalname="XLXN_7" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_8">
            <blockpin signalname="Ignition" name="I" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_9">
            <blockpin signalname="Seatbelt" name="I" />
            <blockpin signalname="XLXN_8" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_10">
            <blockpin signalname="XLXN_9" name="I" />
            <blockpin signalname="Buzzer" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1296" y="624" name="XLXI_1" orien="R0" />
        <instance x="1296" y="864" name="XLXI_3" orien="R0" />
        <branch name="XLXN_1">
            <wire x2="1296" y1="496" y2="496" x1="1264" />
        </branch>
        <instance x="1040" y="528" name="XLXI_5" orien="R0" />
        <branch name="XLXN_2">
            <wire x2="1296" y1="800" y2="800" x1="1264" />
        </branch>
        <instance x="1040" y="832" name="XLXI_6" orien="R0" />
        <branch name="XLXN_3">
            <wire x2="1280" y1="640" y2="640" x1="1040" />
            <wire x2="1280" y1="640" y2="736" x1="1280" />
            <wire x2="1296" y1="736" y2="736" x1="1280" />
            <wire x2="1296" y1="560" y2="560" x1="1280" />
            <wire x2="1280" y1="560" y2="640" x1="1280" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="1568" y1="528" y2="528" x1="1552" />
            <wire x2="1600" y1="528" y2="528" x1="1568" />
            <wire x2="1600" y1="528" y2="608" x1="1600" />
            <wire x2="1648" y1="608" y2="608" x1="1600" />
        </branch>
        <branch name="XLXN_7">
            <wire x2="1040" y1="496" y2="496" x1="1008" />
        </branch>
        <instance x="784" y="528" name="XLXI_7" orien="R0" />
        <instance x="816" y="672" name="XLXI_8" orien="R0" />
        <branch name="XLXN_8">
            <wire x2="1040" y1="800" y2="800" x1="1008" />
        </branch>
        <instance x="784" y="832" name="XLXI_9" orien="R0" />
        <branch name="XLXN_9">
            <wire x2="1920" y1="640" y2="640" x1="1904" />
            <wire x2="1936" y1="640" y2="640" x1="1920" />
        </branch>
        <instance x="1936" y="672" name="XLXI_10" orien="R0" />
        <branch name="Door">
            <wire x2="784" y1="496" y2="496" x1="752" />
        </branch>
        <iomarker fontsize="28" x="752" y="496" name="Door" orien="R180" />
        <branch name="Ignition">
            <wire x2="816" y1="640" y2="640" x1="784" />
        </branch>
        <iomarker fontsize="28" x="784" y="640" name="Ignition" orien="R180" />
        <branch name="Seatbelt">
            <wire x2="784" y1="800" y2="800" x1="752" />
        </branch>
        <iomarker fontsize="28" x="752" y="800" name="Seatbelt" orien="R180" />
        <branch name="Buzzer">
            <wire x2="2192" y1="640" y2="640" x1="2160" />
        </branch>
        <iomarker fontsize="28" x="2192" y="640" name="Buzzer" orien="R0" />
        <branch name="XLXN_6">
            <wire x2="1568" y1="768" y2="768" x1="1552" />
            <wire x2="1600" y1="768" y2="768" x1="1568" />
            <wire x2="1600" y1="672" y2="768" x1="1600" />
            <wire x2="1648" y1="672" y2="672" x1="1600" />
        </branch>
        <instance x="1648" y="736" name="XLXI_4" orien="R0" />
    </sheet>
</drawing>