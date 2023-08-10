#if c_MCP23017 == 1 and c_DOSER == 1
if (server.arg("SetPumpA_Ml") != "")  preferences.putFloat ("SetPumpA_Ml", server.arg("SetPumpA_Ml").toFloat());
if (server.arg("SetPumpB_Ml") != "")  preferences.putFloat ("SetPumpB_Ml", server.arg("SetPumpB_Ml").toFloat());
SetPumpA_Ml=preferences.getFloat("SetPumpA_Ml", 0);
SetPumpB_Ml=preferences.getFloat("SetPumpB_Ml", 0);


if (server.arg("StPumpA_Del") != "")  preferences.putInt("StPumpA_Del", server.arg("StPumpA_Del").toInt());
if (server.arg("StPumpA_Ret") != "")  preferences.putInt("StPumpA_Ret", server.arg("StPumpA_Ret").toInt());

if (server.arg("StPumpA_On") != "")  preferences.putInt("StPumpA_On", server.arg("StPumpA_On").toInt());

if (server.arg("StPumpA_cStepMl") != "")  preferences.putFloat ("StPumpA_cStepMl", server.arg("StPumpA_cStepMl").toFloat());
if (server.arg("StPumpA_cMl") != "")  preferences.putFloat ("StPumpA_cMl", server.arg("StPumpA_cMl").toFloat());
if (server.arg("StPumpA_cStep") != "")  preferences.putFloat ("StPumpA_cStep", server.arg("StPumpA_cStep").toFloat());



if (server.arg("StPumpA_A") != "")  preferences.putInt("StPumpA_A", server.arg("StPumpA_A").toInt());
if (server.arg("StPumpA_B") != "")  preferences.putInt("StPumpA_B", server.arg("StPumpA_B").toInt());
if (server.arg("StPumpA_C") != "")  preferences.putInt("StPumpA_C", server.arg("StPumpA_C").toInt());
if (server.arg("StPumpA_D") != "")  preferences.putInt("StPumpA_D", server.arg("StPumpA_D").toInt());

if (server.arg("StPumpA_ExtDrv") != "")  preferences.putInt("StPumpA_ExtDrv", server.arg("StPumpA_ExtDrv").toInt());
if (server.arg("StPumpA_OnLv") != "")  preferences.putInt("StPumpA_OnLv", server.arg("StPumpA_OnLv").toInt());
if (server.arg("StPumpA_En") != "")  preferences.putInt("StPumpA_En", server.arg("StPumpA_En").toInt());
if (server.arg("StPumpA_St") != "")  preferences.putInt("StPumpA_St", server.arg("StPumpA_St").toInt());

if (server.arg("StPumpB_Del") != "")  preferences.putInt("StPumpB_Del", server.arg("StPumpB_Del").toInt());
if (server.arg("StPumpB_Ret") != "")  preferences.putInt("StPumpB_Ret", server.arg("StPumpB_Ret").toInt());

if (server.arg("StPumpB_On") != "")  preferences.putInt("StPumpB_On", server.arg("StPumpB_On").toInt());

if (server.arg("StPumpB_cStepMl") != "")  preferences.putFloat ("StPumpB_cStepMl", server.arg("StPumpB_cStepMl").toFloat());
if (server.arg("StPumpB_cMl") != "")  preferences.putFloat ("StPumpB_cMl", server.arg("StPumpB_cMl").toFloat());
if (server.arg("StPumpB_cStep") != "")  preferences.putFloat ("StPumpB_cStep", server.arg("StPumpB_cStep").toFloat());


if (server.arg("StPumpB_A") != "")  preferences.putInt("StPumpB_A", server.arg("StPumpB_A").toInt());
if (server.arg("StPumpB_B") != "")  preferences.putInt("StPumpB_B", server.arg("StPumpB_B").toInt());
if (server.arg("StPumpB_C") != "")  preferences.putInt("StPumpB_C", server.arg("StPumpB_C").toInt());
if (server.arg("StPumpB_D") != "")  preferences.putInt("StPumpB_D", server.arg("StPumpB_D").toInt());

if (server.arg("StPumpB_ExtDrv") != "")  preferences.putInt("StPumpB_ExtDrv", server.arg("StPumpB_ExtDrv").toInt());
if (server.arg("StPumpB_OnLv") != "")  preferences.putInt("StPumpB_OnLv", server.arg("StPumpB_OnLv").toInt());
if (server.arg("StPumpB_En") != "")  preferences.putInt("StPumpB_En", server.arg("StPumpB_En").toInt());
if (server.arg("StPumpB_St") != "")  preferences.putInt("StPumpB_St", server.arg("StPumpB_St").toInt());


ADel=preferences.getInt("StPumpA_Del", 700);
ARet=preferences.getInt("StPumpA_Ret", 700);
AOn=preferences.getInt("StPumpA_On", 0);
StPumpA_cStepMl=preferences.getFloat("StPumpA_cStepMl", 1000);
StPumpA_cMl=preferences.getFloat("StPumpA_cMl", 1);
StPumpA_cStep=preferences.getFloat("StPumpA_cStep", 1000);


AA=preferences.getInt("StPumpA_A", 4);
AB=preferences.getInt("StPumpA_B", 5);
AC=preferences.getInt("StPumpA_C", 6);
AD=preferences.getInt("StPumpA_D", 7);

AExt=preferences.getInt("StPumpA_ExtDrv", 0);
ALv=preferences.getInt("StPumpA_OnLv", 1);
AEn=preferences.getInt("StPumpA_En", 12);
ASt=preferences.getInt("StPumpA_St", 13);

BDel=preferences.getInt("StPumpB_Del", 700);
BRet=preferences.getInt("StPumpB_Ret", 700);
BOn=preferences.getInt("StPumpB_On", 0);
StPumpB_cStepMl=preferences.getFloat("StPumpB_cStepMl", 1000);
StPumpB_cMl=preferences.getFloat("StPumpB_cMl", 1);
StPumpB_cStep=preferences.getFloat("StPumpB_cStep", 1000);

BA=preferences.getInt("StPumpB_A", 8);
BB=preferences.getInt("StPumpB_B", 9);
BC=preferences.getInt("StPumpB_C", 10);
BD=preferences.getInt("StPumpB_D", 11);

BExt=preferences.getInt("StPumpB_ExtDrv", 0);
BLv=preferences.getInt("StPumpB_OnLv", 1);
BEn=preferences.getInt("StPumpB_En", 14);
BSt=preferences.getInt("StPumpB_St", 15);

h += "<form action='' method='POST' id='set'></form>\n";

/////////   A  //////////////
h += "<table><caption>Doser Steping Pump A</caption>\n";

h += "<tr><td>Todo, ml (SetPumpA_Ml)<td><input type='text' name='SetPumpA_Ml' value='" + fFTS(SetPumpA_Ml,3) + "' form='set'></tr>\n";

h += "<tr><td>Calibrate, steps (StPumpA_cStepMl)<td><input type='text' name='StPumpA_cStepMl' value='" + fFTS(StPumpA_cStepMl,3) + "' form='set'></tr>\n";
h += "<tr><td>Calibrate, ml (StPumpA_cMl)<td><input type='text' name='StPumpA_cMl' value='" + fFTS(StPumpA_cMl,3) + "' form='set'></tr>\n";
h += "<tr><td>Max steps per 1 cycle (StPumpA_cStep)<td><input type='text' name='StPumpA_cStep' value='" + fFTS(StPumpA_cStep,3) + "' form='set'></tr>\n";

h += "<tr><td>Step signal off, mks (StPumpA_Del)<td><input type='text' name='StPumpA_Del' value='" + String(ADel) + "' form='set'></tr>\n";
h += "<tr><td>Step signal on, mks (StPumpA_Ret)<td><input type='text' name='StPumpA_Ret' value='" + String(ARet) + "' form='set'></tr>\n";

h += "<tr><td>Pump Enable (StPumpA_On)<td><input type='text' name='StPumpA_On' value='" + String(AOn) + "' form='set'></tr>\n";

h += "<tr><td>Port A (StPumpA_A)<td><input type='text' name='StPumpA_A' value='" + String(AA) + "' form='set'></tr>\n";
h += "<tr><td>Port B (StPumpA_B)<td><input type='text' name='StPumpA_B' value='" + String(AB) + "' form='set'></tr>\n";
h += "<tr><td>Port C (StPumpA_C)<td><input type='text' name='StPumpA_C' value='" + String(AC) + "' form='set'></tr>\n";
h += "<tr><td>Port D (StPumpA_D)<td><input type='text' name='StPumpA_D' value='" + String(AD) + "' form='set'></tr>\n";

h += "<tr><td>Use external driver (StPumpA_ExtDrv)<td><input type='text' name='StPumpA_ExtDrv' value='" + String(AExt) + "' form='set'></tr>\n";
h += "<tr><td>Logical level to enable driver (StPumpA_OnLv)<td><input type='text' name='StPumpA_OnLv' value='" + String(ALv) + "' form='set'></tr>\n";
h += "<tr><td>Enable port (StPumpA_En)<td><input type='text' name='StPumpA_En' value='" + String(AEn) + "' form='set'></tr>\n";
h += "<tr><td>Step port (StPumpA_St)<td><input type='text' name='StPumpA_St' value='" + String(ASt) + "' form='set'></tr>\n";

h += "</table>\n";


/////////// B  //////////////
h += "<table><caption>Doser Steping Pump B</caption>\n";

h += "<tr><td>Todo, ml (SetPumpB_Ml)<td><input type='text' name='SetPumpB_Ml' value='" + fFTS(SetPumpB_Ml,3) + "' form='set'></tr>\n";


h += "<tr><td>Calibrate, steps (StPumpB_cStepMl)<td><input type='text' name='StPumpB_cStepMl' value='" + fFTS(StPumpB_cStepMl,3) + "' form='set'></tr>\n";
h += "<tr><td>Calibrate, ml (StPumpB_cMl)<td><input type='text' name='StPumpB_cMl' value='" + fFTS(StPumpB_cMl,3) + "' form='set'></tr>\n";
h += "<tr><td>Max steps per 1 cycle (StPumpB_cStep)<td><input type='text' name='StPumpB_cStep' value='" + fFTS(StPumpB_cStep,3) + "' form='set'></tr>\n";


h += "<tr><td>Step signal off, mks (StPumpB_Del)<td><input type='text' name='StPumpB_Del' value='" + String(BDel) + "' form='set'></tr>\n";
h += "<tr><td>Step signal on, mks (StPumpB_Ret)<td><input type='text' name='StPumpB_Ret' value='" + String(BRet) + "' form='set'></tr>\n";

h += "<tr><td>Pump Enable (StPumpB_On)<td><input type='text' name='StPumpB_On' value='" + String(BOn) + "' form='set'></tr>\n";

h += "<tr><td>Port A (StPumpB_A)<td><input type='text' name='StPumpB_A' value='" + String(BA) + "' form='set'></tr>\n";
h += "<tr><td>Port B (StPumpB_B)<td><input type='text' name='StPumpB_B' value='" + String(BB) + "' form='set'></tr>\n";
h += "<tr><td>Port C (StPumpB_C)<td><input type='text' name='StPumpB_C' value='" + String(BC) + "' form='set'></tr>\n";
h += "<tr><td>Port D (StPumpB_D)<td><input type='text' name='StPumpB_D' value='" + String(BD) + "' form='set'></tr>\n";
h += "<tr><td>Use external driver (StPumpB_ExtDrv)<td><input type='text' name='StPumpB_ExtDrv' value='" + String(BExt) + "' form='set'></tr>\n";
h += "<tr><td>Logical level to enable driver (StPumpB_OnLv)<td><input type='text' name='StPumpB_OnLv' value='" + String(BLv) + "' form='set'></tr>\n";
h += "<tr><td>Enable port (StPumpB_En)<td><input type='text' name='StPumpB_En' value='" + String(BEn) + "' form='set'></tr>\n";
h += "<tr><td>Step port (StPumpB_St)<td><input type='text' name='StPumpB_St' value='" + String(BSt) + "' form='set'></tr>\n";

h += "</table>\n";

h += "<input type='submit' value='save' form='set'/></form>\n";


#endif // c_DOSER