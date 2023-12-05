/*
 *   Copyright (c) 2020 Project CHIP Authors
 *   All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#include "rezi/common/Command.h"
#include "rezi/example/ExampleCredentialIssuerCommands.h"
#include "rezi/clusters/DataModelLogger.h"

// #include "commands/clusters/SubscriptionsCommands.h"
// #include "commands/delay/Commands.h"
// #include "commands/discover/Commands.h"
// #include "commands/group/Commands.h"
// #include "commands/interactive/Commands.h"
#include "rezi/pairing/Commands.h"
// #include "commands/payload/Commands.h"
// #include "commands/session-management/Commands.h"
// #include "commands/storage/Commands.h"

// #include <zap-generated/cluster/Commands.h>

#include <iostream>

// ================================================================================
// Main Code
// ================================================================================
int main(int argc, char * argv[])
{
    ExampleCredentialIssuerCommands credIssuerCommands;
    PairOnNetwork pairing(&credIssuerCommands, (CHIPCommand::NodeId)1, (uint32_t)20202021);
    pairing.Run();
    

    // Commands commands;
    // registerCommandsDelay(commands, &credIssuerCommands);
    // registerCommandsDiscover(commands, &credIssuerCommands);
    // registerCommandsInteractive(commands, &credIssuerCommands);
    // registerCommandsPayload(commands);
    // registerCommandsPairing(commands, &credIssuerCommands);
    // registerCommandsGroup(commands, &credIssuerCommands);
    // registerClusters(commands, &credIssuerCommands);
    // registerCommandsSubscriptions(commands, &credIssuerCommands);
    // registerCommandsStorage(commands);
    // registerCommandsSessionManagement(commands, &credIssuerCommands);

    // return 
    // commands.Run(argc, argv);
    return 0;
}
