<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3a" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="CLK" />
        <signal name="Salida(4:0)" />
        <signal name="RST" />
        <signal name="RST1" />
        <port polarity="Input" name="CLK" />
        <port polarity="Output" name="Salida(4:0)" />
        <port polarity="Input" name="RST" />
        <port polarity="Input" name="RST1" />
        <blockdef name="DivisorFreq">
            <timestamp>2022-2-24T14:48:26</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="contador">
            <timestamp>2022-2-24T15:14:24</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <block symbolname="DivisorFreq" name="XLXI_3">
            <blockpin signalname="CLK" name="clk" />
            <blockpin signalname="RST" name="reset" />
            <blockpin signalname="XLXN_1" name="salida" />
        </block>
        <block symbolname="contador" name="XLXI_4">
            <blockpin signalname="XLXN_1" name="pulsador" />
            <blockpin signalname="RST1" name="reset" />
            <blockpin signalname="Salida(4:0)" name="salida(4:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <iomarker fontsize="28" x="1056" y="1232" name="CLK" orien="R180" />
        <branch name="Salida(4:0)">
            <wire x2="2016" y1="1232" y2="1232" x1="2000" />
            <wire x2="2032" y1="1232" y2="1232" x1="2016" />
        </branch>
        <iomarker fontsize="28" x="2032" y="1232" name="Salida(4:0)" orien="R0" />
        <branch name="RST">
            <wire x2="1072" y1="1296" y2="1296" x1="1056" />
            <wire x2="1088" y1="1296" y2="1296" x1="1072" />
        </branch>
        <iomarker fontsize="28" x="1056" y="1296" name="RST" orien="R180" />
        <branch name="RST1">
            <wire x2="1600" y1="1360" y2="1360" x1="512" />
            <wire x2="1616" y1="1296" y2="1296" x1="1600" />
            <wire x2="1600" y1="1296" y2="1360" x1="1600" />
        </branch>
        <branch name="XLXN_1">
            <wire x2="1488" y1="1232" y2="1232" x1="1472" />
            <wire x2="1600" y1="1232" y2="1232" x1="1488" />
            <wire x2="1616" y1="1232" y2="1232" x1="1600" />
        </branch>
        <instance x="1616" y="1328" name="XLXI_4" orien="R0">
        </instance>
        <branch name="CLK">
            <wire x2="1072" y1="1232" y2="1232" x1="1056" />
            <wire x2="1088" y1="1232" y2="1232" x1="1072" />
        </branch>
        <instance x="1088" y="1328" name="XLXI_3" orien="R0">
        </instance>
        <iomarker fontsize="28" x="512" y="1360" name="RST1" orien="R180" />
    </sheet>
</drawing>