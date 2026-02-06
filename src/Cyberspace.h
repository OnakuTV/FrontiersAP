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
        if ((it->flags == 55295 || it->flags == 51199 || it->flags == 63487 || it->flags == 59391 || it->flags == 2047 
            || it->flags == 6143 || it->flags == 22527 || it->flags == 18431 || it->flags == 26623) && !sendList.at(pos)) {
            int id = pos * 7;
            for (int i = 0; i < 7; i++) {
                itemsToSend.push(50000 + id + i);
            }
            sendList[pos] = true;
        }
        pos++;
    }
}