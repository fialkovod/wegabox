
void bitW4(int p1, int p2, int p3, int p4, int b1, int b2, int b3, int b4)
{
    bitWrite(bitw, p1, b1);
    bitWrite(bitw, p2, b2);
    bitWrite(bitw, p3, b3);
    bitWrite(bitw, p4, b4);
}

// Шаг насоса А вперед
void StepAF(bool phase1, bool phase2, bool cool)
{
    if (AExt == 1) {
        bitWrite(bitw, ASt, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
        bitWrite(bitw, ASt, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
        return;
    }
    // enn
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }
    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 1, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }

    // twee
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 1, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }

    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 1, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }

    // drie
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }

    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 1, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }

    // vier
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 1, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }

    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 1, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
}

// Шаг насоса B вперед
void StepBF(bool phase1, bool phase2, bool cool)
{
    if (BExt == 1) {
        bitWrite(bitw, BSt, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
        bitWrite(bitw, BSt, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
        return;
    }
    // enn
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }
    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 1, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }

    // twee
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 1, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }

    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 1, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }

    // drie
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }

    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 1, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }

    // vier
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 1, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }

    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 1, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
}

// Шаг насоса А назад
void StepAB(bool phase1, bool phase2, bool cool)
{

    // vier

    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 1, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 1, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }

    // drie
    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 1, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }

    // twee
    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 1, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }

    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 1, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }

    // enn
    if (phase2 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 1, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ADel);
    }
    if (phase1 == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(ARet);
    }
}

// Шаг насоса B назад
void StepBB(bool phase1, bool phase2, bool cool)
{

    // vier
    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 1, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }

    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 1, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    // drie

    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 1, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }

    // twee

    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 1, 1, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 1, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }

    // enn
    if (phase2 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 1, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
    if (cool == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BDel);
    }
    if (phase1 == true)
    {
        bitW4(BA, BB, BC, BD, 0, 0, 0, 1);
        mcp.writeGPIOAB(bitw);
        delayMicroseconds(BRet);
    }
}

// Шаг двумя насосами вперед
void StepTwoDrvForward(int AA, int AB, int AC, int AD, int BA, int BB, int BC, int BD, int del)
{
    del = preferences.getInt("StPumpA_Del", 700);
    ret = preferences.getInt("StPumpA_Ret", 700);
    AOn = preferences.getInt("StPumpA_On", 0);
    BOn = preferences.getInt("StPumpB_On", 0);

    // enn
    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 0, 1, 1, 0);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 0, 1, 1, 0);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);

    // twee
    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 0, 1, 0, 1);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 0, 1, 0, 1);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);

    // drie
    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 1, 0, 0, 1);
    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 1, 0, 0, 1);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);
    // vier
    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 1, 0, 1, 0);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 1, 0, 1, 0);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);
}

// Шаг двумя насосами назад
void StepTwoDrvBackward(int AA, int AB, int AC, int AD, int BA, int BB, int BC, int BD, int del)
{
    del = preferences.getInt("StPumpA_Del", 700);
    ret = preferences.getInt("StPumpA_Ret", 700);
    AOn = preferences.getInt("StPumpA_On", 0);
    BOn = preferences.getInt("StPumpB_On", 0);
    // enn

    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 0, 1, 1, 0);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 0, 1, 1, 0);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);
    // twee
    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 1, 0, 1, 0);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 1, 0, 1, 0);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);
    // drie
    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 1, 0, 0, 1);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 1, 0, 0, 1);

    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);

    // vier

    if (AOn != 0)
        bitW4(AA, AB, AC, AD, 0, 1, 0, 1);

    if (BOn != 0)
        bitW4(BA, BB, BC, BD, 0, 1, 0, 1);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(ret);
    bitW4(AA, AB, AC, AD, 0, 0, 0, 0);
    bitW4(BA, BB, BC, BD, 0, 0, 0, 0);
    mcp.writeGPIOAB(bitw);
    delayMicroseconds(del);
}
