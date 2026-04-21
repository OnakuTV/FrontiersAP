std::vector<bool> sendList;
std::list<app::save::CyberStageData> stagecodeList;
std::vector<int> stageOrder = { 0, 18, 26, 1, 13, 5, 28, 4, 20, 11, 15, 21, 2, 22, 3, 7, 19, 8, 6, 23, 12, 17, 24, 10, 25, 9, 16, 27, 14, 29 };
bool cyberspaceFlagCheck(int flag);

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
        if (cyberspaceFlagCheck(it->flags) && !sendList.at(pos)) {
            int id = pos * 7;
            for (int i = 0; i < 7; i++) {
                itemsToSend.push(50000 + id + i);
            }
            sendList[pos] = true;
        }
        pos++;
    }
}

bool cyberspaceFlagCheck(int flag) {

    return (flag == 55295 || flag == 51199 || flag == 63487 || flag == 59391 || flag == 2047
        || flag == 6143 || flag == 22527 || flag == 18431 || flag == 26623 || flag == 38911 
        || flag == 34815 || flag == 10239 || flag == 14335 || flag == 30719 || flag == 43007 
        || flag == 47103 || flag == 59391);
}