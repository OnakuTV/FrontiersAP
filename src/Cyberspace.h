std::vector<bool> sendList;
std::list<app::save::CyberStageData> stagecodeList;
std::vector<int> stageOrder = { 0, 18, 26, 1, 13, 5, 28, 4, 20, 11, 15, 21, 2, 22, 3, 7, 19, 8, 6, 23, 12, 17, 24, 10, 25, 9, 16, 27, 14, 29 };


void cyberspaceChecks(app::save::GameData* data, std::vector<int> order) {
    if (sendList.size() < 1) {
        for (int i = 0; i < 30; i++) {
            sendList.emplace_back(false);
        }
    }
    if (stagecodeList.size() < 1) {
        for (int i = 0; i < 30; i++) {
            stagecodeList.emplace_back(data->stages.actStages[order.at(i)]);
        }
    }
    else {
        for (int i = 0; i < 30; i++) {
            stagecodeList.pop_front();
            stagecodeList.emplace_back(data->stages.actStages[order.at(i)]);
        }
    }
    
    //1-1 portal -> data.stages.actStages[0].flags
    //Enter 1-1 -> 4-3 -> data.stages.actStages[25]

    //stageCode from randomizedList, get Position in List, get stageCode from stagecodeList, find it in map -> send check
    int pos = 0;
    for (std::list<app::save::CyberStageData>::iterator it = stagecodeList.begin(); it != stagecodeList.end(); it++)
    {
        if ((it->flags == 55295 || it->flags == 51199 || it->flags == 63487 || it->flags == 59391) && !sendList.at(pos)) {
            int id = pos * 7;
            for (int i = 0; i < 7; i++) {
                itemsToSend.push(50000 + id + i);
            }
            sendList[pos] = true;
        }
        pos++;
    }
    /*
    * 
    * KRONOS
    * 
    */
    /*
    if ((data->stages.actStages[18].flags == 55295 || data->stages.actStages[18].flags == 51199) && !cyberspaceIsSent1) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14007+i);
            cyberspaceIsSent1 = true;
        }
    }
    if ((data->stages.actStages[26].flags == 55295 || data->stages.actStages[26].flags == 51199) && !cyberspaceIsSent2) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14014+i);
            cyberspaceIsSent2 = true;
        }
    }
    if ((data->stages.actStages[1].flags == 55295 || data->stages.actStages[1].flags == 51199) && !cyberspaceIsSent3) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14021+i);
            cyberspaceIsSent3 = true;
        }
    }
    if ((data->stages.actStages[13].flags == 55295 || data->stages.actStages[13].flags == 51199) && !cyberspaceIsSent4) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14028+i);
            cyberspaceIsSent4 = true;
        }
    }
    if ((data->stages.actStages[5].flags == 55295 || data->stages.actStages[5].flags == 51199) && !cyberspaceIsSent5) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14035+i);
            cyberspaceIsSent5 = true;
        }
    }
    if ((data->stages.actStages[28].flags == 55295 || data->stages.actStages[28].flags == 51199) && !cyberspaceIsSent6) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14042+i);
            cyberspaceIsSent6 = true;
        }
    }
    /*
    * 
    * ARES
    *

    if ((data->stages.actStages[4].flags == 55295 || data->stages.actStages[4].flags == 51199) && !cyberspaceIsSent7) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12486+i);
            cyberspaceIsSent7 = true;
        }
    }
    if ((data->stages.actStages[20].flags == 55295 || data->stages.actStages[20].flags == 51199) && !cyberspaceIsSent8) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12493 +i);
            cyberspaceIsSent8 = true;
        }
    }
    if ((data->stages.actStages[11].flags == 55295 || data->stages.actStages[11].flags == 51199) && !cyberspaceIsSent9) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12500+i);
            cyberspaceIsSent9 = true;
        }
    }
    if ((data->stages.actStages[15].flags == 55295 || data->stages.actStages[15].flags == 51199) && !cyberspaceIsSent10) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12507+i);
            cyberspaceIsSent10 = true;
        }
    }
    if ((data->stages.actStages[21].flags == 55295 || data->stages.actStages[21].flags == 51199) && !cyberspaceIsSent11) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12514+i);
            cyberspaceIsSent11 = true;
        }
    }
    if ((data->stages.actStages[2].flags == 55295 || data->stages.actStages[2].flags == 51199) && !cyberspaceIsSent12) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12521+i);
            cyberspaceIsSent12 = true;
        }
    }
    if ((data->stages.actStages[22].flags == 55295 || data->stages.actStages[22].flags == 51199) && !cyberspaceIsSent13) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(12528+i);
            cyberspaceIsSent13 = true;
        }
    }
    /*
    * 
    * CHAOS
    * 

    if ((data->stages.actStages[3].flags == 55295 || data->stages.actStages[3].flags == 51199) && !cyberspaceIsSent14) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14413 +i);
            cyberspaceIsSent14 = true;
        }
    }
    if ((data->stages.actStages[7].flags == 55295 || data->stages.actStages[7].flags == 51199) && !cyberspaceIsSent15) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14420 +i);
            cyberspaceIsSent15 = true;
        }
    }
    if ((data->stages.actStages[19].flags == 55295 || data->stages.actStages[19].flags == 51199) && !cyberspaceIsSent16) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14427 +i);
            cyberspaceIsSent16 = true;
        }
    }
    if ((data->stages.actStages[8].flags == 55295 || data->stages.actStages[8].flags == 51199) && !cyberspaceIsSent17) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14434+i);
            cyberspaceIsSent17 = true;
        }
    }
    if ((data->stages.actStages[6].flags == 55295 || data->stages.actStages[6].flags == 51199) && !cyberspaceIsSent18) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14441 +i);
            cyberspaceIsSent18 = true;
        }
    }
    if ((data->stages.actStages[23].flags == 55295 || data->stages.actStages[23].flags == 51199) && !cyberspaceIsSent19) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14448+i);
            cyberspaceIsSent19 = true;
        }
    }
    if ((data->stages.actStages[12].flags == 55295 || data->stages.actStages[12].flags == 51199) && !cyberspaceIsSent20) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(14455+i);
            cyberspaceIsSent20 = true;
        }
    }
    /*
    *
    * OURANOS
    *

    if ((data->stages.actStages[17].flags == 55295 || data->stages.actStages[17].flags == 51199) && !cyberspaceIsSent21) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16329 +i);
            cyberspaceIsSent21 = true;
        }
    }
    if ((data->stages.actStages[24].flags == 55295 || data->stages.actStages[24].flags == 51199) && !cyberspaceIsSent22) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16336+i);
            cyberspaceIsSent22 = true;
        }
    }
    if ((data->stages.actStages[10].flags == 55295 || data->stages.actStages[10].flags == 51199) && !cyberspaceIsSent23) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16343+i);
            cyberspaceIsSent23 = true;
        }
    }
    if ((data->stages.actStages[25].flags == 55295 || data->stages.actStages[25].flags == 51199) && !cyberspaceIsSent24) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16350 +i);
            cyberspaceIsSent24 = true;
        }
    }
    if ((data->stages.actStages[9].flags == 55295 || data->stages.actStages[9].flags == 51199) && !cyberspaceIsSent25) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16357+i);
            cyberspaceIsSent25 = true;
        }
    }
    if ((data->stages.actStages[16].flags == 55295 || data->stages.actStages[16].flags == 51199) && !cyberspaceIsSent26) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16364 +i);
            cyberspaceIsSent26 = true;
        }
    }
    if ((data->stages.actStages[27].flags == 55295 || data->stages.actStages[27].flags == 51199) && !cyberspaceIsSent27) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16371 +i);
            cyberspaceIsSent27 = true;
        }
    }
    if ((data->stages.actStages[14].flags == 55295 || data->stages.actStages[14].flags == 51199) && !cyberspaceIsSent28) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16378 +i);
            cyberspaceIsSent28 = true;
        }
    }
    if ((data->stages.actStages[29].flags == 55295 || data->stages.actStages[29].flags == 51199) && !cyberspaceIsSent29) {
        for (int i = 0; i < 7; i++) {
            AP_SendItem(16385 +i);
            cyberspaceIsSent29 = true;
        }
    }*/
}