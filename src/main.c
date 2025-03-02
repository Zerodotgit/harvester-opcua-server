#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>
#include <stdlib.h>
#include <signal.h>

UA_Boolean running = true;

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Received Ctrl-C");
    running = false;
}

int main(void) {
    signal(SIGINT, stopHandler);  // 设置Ctrl-C信号处理
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    //冲压变量
    UA_VariableAttributes attr0 = UA_VariableAttributes_default;
    double push = 0.0;
    UA_Variant_setScalar(&attr0.value, &push, &UA_TYPES[UA_TYPES_DOUBLE]);
    attr0.description = UA_LOCALIZEDTEXT("en-US", "Push");
    attr0.displayName = UA_LOCALIZEDTEXT("en-US", "Push");
    attr0.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    attr0.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId0 = UA_NODEID_STRING(1, "Push");
    UA_QualifiedName myDoubleName0 = UA_QUALIFIEDNAME(1, "Push");
    UA_NodeId parentNodeId0 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId0 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId0, parentNodeId0,
                              parentReferenceNodeId0, myDoubleName0,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr0, NULL, NULL);

    //左轮变量
    UA_VariableAttributes attr1 = UA_VariableAttributes_default;
    double leftWheel = 0.0;
    UA_Variant_setScalar(&attr1.value, &leftWheel, &UA_TYPES[UA_TYPES_DOUBLE]);
    attr1.description = UA_LOCALIZEDTEXT("en-US", "Left Wheel");
    attr1.displayName = UA_LOCALIZEDTEXT("en-US", "Left Wheel");
    attr1.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    attr1.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId1 = UA_NODEID_STRING(1, "Left Wheel");
    UA_QualifiedName myDoubleName1 = UA_QUALIFIEDNAME(1, "Left Wheel");
    UA_NodeId parentNodeId1 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId1 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId1, parentNodeId1,
                              parentReferenceNodeId1, myDoubleName1,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr1, NULL, NULL);

    //右轮变量
    UA_VariableAttributes attr2 = UA_VariableAttributes_default;
    double rightWheel = 0.0;
    UA_Variant_setScalar(&attr2.value, &rightWheel, &UA_TYPES[UA_TYPES_DOUBLE]);
    attr2.description = UA_LOCALIZEDTEXT("en-US", "Right Wheel");
    attr2.displayName = UA_LOCALIZEDTEXT("en-US", "Right Wheel");
    attr2.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    attr2.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId2 = UA_NODEID_STRING(1, "Right Wheel");
    UA_QualifiedName myDoubleName2 = UA_QUALIFIEDNAME(1, "Right Wheel");
    UA_NodeId parentNodeId2 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId2 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId2, parentNodeId2,
                              parentReferenceNodeId2, myDoubleName2,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr2, NULL, NULL);

    //采收变量
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    double harvest = 0.0;  // 使用 double 类型
    UA_Variant_setScalar(&attr.value, &harvest, &UA_TYPES[UA_TYPES_DOUBLE]);
    attr.description = UA_LOCALIZEDTEXT("en-US", "Harvest");
    attr.displayName = UA_LOCALIZEDTEXT("en-US", "Harvest");
    attr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId = UA_NODEID_STRING(1, "Harvest");
    UA_QualifiedName myDoubleName = UA_QUALIFIEDNAME(1, "Harvest");
    UA_NodeId parentNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId, parentNodeId,
                              parentReferenceNodeId, myDoubleName,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr, NULL, NULL);

    //运动冲压变量
    UA_VariableAttributes attr3 = UA_VariableAttributes_default;
    UA_Boolean sportPush = false;
    UA_Variant_setScalar(&attr3.value, &sportPush, &UA_TYPES[UA_TYPES_BOOLEAN]);
    attr3.description = UA_LOCALIZEDTEXT("en-US", "Sport Push");
    attr3.displayName = UA_LOCALIZEDTEXT("en-US", "Sport Push");
    attr3.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
    attr3.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId3 = UA_NODEID_STRING(1, "Sport Push");
    UA_QualifiedName myDoubleName3 = UA_QUALIFIEDNAME(1, "Sport Push");
    UA_NodeId parentNodeId3 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId3 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId3, parentNodeId3,
                              parentReferenceNodeId3, myDoubleName3,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr3, NULL, NULL);

    //运动采收变量
    UA_VariableAttributes attr4 = UA_VariableAttributes_default;
    UA_Boolean sportHarvest = false;
    UA_Variant_setScalar(&attr4.value, &sportHarvest, &UA_TYPES[UA_TYPES_BOOLEAN]);
    attr4.description = UA_LOCALIZEDTEXT("en-US", "Sport Harvest");
    attr4.displayName = UA_LOCALIZEDTEXT("en-US", "Sport Harvest");
    attr4.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
    attr4.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId4 = UA_NODEID_STRING(1, "Sport Harvest");
    UA_QualifiedName myDoubleName4 = UA_QUALIFIEDNAME(1, "Sport Harvest");
    UA_NodeId parentNodeId4 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId4 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId4, parentNodeId4,
                              parentReferenceNodeId4, myDoubleName4,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr4, NULL, NULL);

    //运动左轮变量
    UA_VariableAttributes attr5 = UA_VariableAttributes_default;
    UA_Boolean sportLeftWheel = false;
    UA_Variant_setScalar(&attr5.value, &sportLeftWheel, &UA_TYPES[UA_TYPES_BOOLEAN]);
    attr5.description = UA_LOCALIZEDTEXT("en-US", "Sport Left Wheel");
    attr5.displayName = UA_LOCALIZEDTEXT("en-US", "Sport Left Wheel");
    attr5.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
    attr5.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId5 = UA_NODEID_STRING(1, "Sport Left Wheel");
    UA_QualifiedName myDoubleName5 = UA_QUALIFIEDNAME(1, "Sport Left Wheel");
    UA_NodeId parentNodeId5 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId5 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId5, parentNodeId5,
                              parentReferenceNodeId5, myDoubleName5,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr5, NULL, NULL);

    //运动右轮变量
    UA_VariableAttributes attr6 = UA_VariableAttributes_default;
    UA_Boolean sportRightWheel = false;
    UA_Variant_setScalar(&attr6.value, &sportRightWheel, &UA_TYPES[UA_TYPES_BOOLEAN]);
    attr6.description = UA_LOCALIZEDTEXT("en-US", "Sport Right Wheel");
    attr6.displayName = UA_LOCALIZEDTEXT("en-US", "Sport Right Wheel");
    attr6.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
    attr6.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_NodeId myDoubleNodeId6 = UA_NODEID_STRING(1, "Sport Right Wheel");
    UA_QualifiedName myDoubleName6 = UA_QUALIFIEDNAME(1, "Sport Right Wheel");
    UA_NodeId parentNodeId6 = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId6 = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_Server_addVariableNode(server, myDoubleNodeId6, parentNodeId6,
                              parentReferenceNodeId6, myDoubleName6,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr6, NULL, NULL);

    // 启动服务器
    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}