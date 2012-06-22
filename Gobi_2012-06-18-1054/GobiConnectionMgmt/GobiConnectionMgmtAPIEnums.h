/*===========================================================================
FILE: 
   GobiConnectionMgmtAPIEnums.h

DESCRIPTION:
   Declaration of the Gobi API enumerations

Copyright (c) 2012, Code Aurora Forum. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of Code Aurora Forum nor
      the names of its contributors may be used to endorse or promote
      products derived from this software without specific prior written
      permission.


THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
==========================================================================*/

#pragma once

// Gobi API error code
enum eGobiError
{
   eGOBI_ERR_ENUM_BEGIN = -1, 

   eGOBI_ERR_NONE,               // 00 Success
   eGOBI_ERR_GENERAL,            // 01 General error
   eGOBI_ERR_INTERNAL,           // 02 Internal error
   eGOBI_ERR_MEMORY,             // 03 Memory error
   eGOBI_ERR_INVALID_ARG,        // 04 Invalid argument
   eGOBI_ERR_BUFFER_SZ,          // 05 Buffer too small
   eGOBI_ERR_NO_DEVICE,          // 06 Unable to detect device
   eGOBI_ERR_INVALID_DEVID,      // 07 Invalid device ID
   eGOBI_ERR_NO_CONNECTION,      // 08 No connection to device
   eGOBI_ERR_IFACE,              // 09 Unable to obtain required interace
   eGOBI_ERR_CONNECT,            // 10 Unable to connect to interface
   eGOBI_ERR_REQ_SCHEDULE,       // 11 Unable to schedule request
   eGOBI_ERR_REQUEST,            // 12 Error sending request
   eGOBI_ERR_RESPONSE,           // 13 Error receiving response
   eGOBI_ERR_REQUEST_TO,         // 14 Timeout while sending request
   eGOBI_ERR_RESPONSE_TO,        // 15 Timeout while receiving response
   eGOBI_ERR_MALFORMED_RSP,      // 16 Malformed response received
   eGOBI_ERR_INVALID_RSP,        // 17 Invalid/error response received
   eGOBI_ERR_INVALID_FILE,       // 18 Invalid file path
   eGOBI_ERR_FILE_OPEN,          // 19 Unable to open file
   eGOBI_ERR_FILE_COPY,          // 20 Unable to copy file
   eGOBI_ERR_QDL_SCM,            // 21 Unable to open service control mgr
   eGOBI_ERR_NO_QDL_SVC,         // 22 Unable to detect QDL service
   eGOBI_ERR_NO_QDL_SVC_INFO,    // 23 Unable to obtain QDL service info
   eGOBI_ERR_NO_QDL_SVC_PATH,    // 24 Unable to locate QSL service 
   eGOBI_ERR_QDL_SVC_CFG,        // 25 Unable to reconfigure QDL service
   eGOBI_ERR_QDL_SVC_IFACE,      // 26 Unable to interface to QDL service
   eGOBI_ERR_OFFLINE,            // 27 Unable to set device offline
   eGOBI_ERR_RESET,              // 28 Unable to reset device
   eGOBI_ERR_NO_SIGNAL,          // 29 No available signal 
   eGOBI_ERR_MULTIPLE_DEVICES,   // 30 Multiple devices detected
   eGOBI_ERR_DRIVER,             // 31 Error interfacing to driver
   eGOBI_ERR_NO_CANCELABLE_OP,   // 32 No cancelable operation is pending
   eGOBI_ERR_CANCEL_OP,          // 33 Error canceling outstanding operation
   eGOBI_ERR_QDL_CRC,            // 34 QDL image data CRC error
   eGOBI_ERR_QDL_PARSING,        // 35 QDL image data parsing error
   eGOBI_ERR_QDL_AUTH,           // 36 QDL image authentication error
   eGOBI_ERR_QDL_WRITE,          // 37 QDL image write error
   eGOBI_ERR_QDL_OPEN_SIZE,      // 38 QDL image size error
   eGOBI_ERR_QDL_OPEN_TYPE,      // 39 QDL image type error
   eGOBI_ERR_QDL_OPEN_PROT,      // 40 QDL memory protection error
   eGOBI_ERR_QDL_OPEN_SKIP,      // 41 QDL image not required
   eGOBI_ERR_QDL_ERR_GENERAL,    // 42 QDL general error
   eGOBI_ERR_QDL_BAR_MODE,       // 43 QDL BAR mode error

   eGOBI_ERR_ENUM_END,

   // Offset from which mapped QMI error codes start from (see eQMIErrors)
   eGOBI_ERR_QMI_OFFSET = 1000,
};

// Enum to describe QMI AUTH AKA Result
enum eQMIAUTHAKAResult:UINT8
{
   eQMIAUTHAKAResult_Success                                              = 0,
   eQMIAUTHAKAResult_SyncFailure                                          = 1,
   eQMIAUTHAKAResult_Failure                                              = 2,
};

// Enum to describe QMI AUTH AKA Version
enum eQMIAUTHAKAVersion:UINT8
{
   eQMIAUTHAKAVersion_Version1                                            = 0,
   eQMIAUTHAKAVersion_Version2                                            = 1,
};

// Enum to describe QMI AUTH EAP Result
enum eQMIAUTHEAPResult:UINT8
{
   eQMIAUTHEAPResult_Success                                              = 0,
   eQMIAUTHEAPResult_Failure                                              = 1,
};

// Enum to describe QMI CAT Activate Targets
enum eQMICATActivateTargets:UINT8
{
   eQMICATActivateTargets_UICCCLFInterface                                = 1,
};

// Enum to describe QMI CAT Address NPI
enum eQMICATAddressNPI:UINT8
{
   eQMICATAddressNPI_Unknown                                              = 0,
   eQMICATAddressNPI_ISDNTelephony                                        = 1,
   eQMICATAddressNPI_DataNPI                                              = 2,
   eQMICATAddressNPI_TelexNPI                                             = 3,
   eQMICATAddressNPI_PrivateNPI                                           = 4,
   eQMICATAddressNPI_ExtensionIsReserved                                  = 15,
};

// Enum to describe QMI CAT Address TON
enum eQMICATAddressTON:UINT8
{
   eQMICATAddressTON_Unknown                                              = 0,
   eQMICATAddressTON_InternationalNumber                                  = 1,
   eQMICATAddressTON_NationalNumber                                       = 2,
   eQMICATAddressTON_NetworkSpecificNumber                                = 3,
};

// Enum to describe QMI CAT Address Type
enum eQMICATAddressType:UINT8
{
   eQMICATAddressType_NoAddressGiven                                      = 1,
   eQMICATAddressType_Dynamic                                             = 2,
   eQMICATAddressType_IPv4                                                = 3,
   eQMICATAddressType_IPv6                                                = 4,
};

// Enum to describe QMI CAT Alpha ID Command Type
enum eQMICATAlphaIDCommandType:UINT8
{
   eQMICATAlphaIDCommandType_SendSMSProactiveCommand                      = 1,
};

// Enum to describe QMI CAT Bearer
enum eQMICATBearer:UINT8
{
   eQMICATBearer_SMS                                                      = 0,
   eQMICATBearer_CSD                                                      = 1,
   eQMICATBearer_USSD                                                     = 2,
   eQMICATBearer_GPRS                                                     = 3,
   eQMICATBearer_Default                                                  = 4,
};

// Enum to describe QMI CAT Bearer Capability Repeat Indicator
enum eQMICATBearerCapabilityRepeatIndicator:UINT8
{
   eQMICATBearerCapabilityRepeatIndicator_AlternateMode                   = 0,
   eQMICATBearerCapabilityRepeatIndicator_SequentialMode                  = 1,
};

// Enum to describe QMI CAT Browser Termination Causes
enum eQMICATBrowserTerminationCauses:UINT32
{
   eQMICATBrowserTerminationCauses_UserTerminated                         = 0,
   eQMICATBrowserTerminationCauses_ErrorTerminated                        = 1,
};

// Enum to describe QMI CAT CSD Bearer Name
enum eQMICATCSDBearerName:UINT8
{
   eQMICATCSDBearerName_DataCircuitAsyncUDIOr31kHzModem                   = 0,
   eQMICATCSDBearerName_DataCircuitSyncUDIOr31kHzModem                    = 1,
   eQMICATCSDBearerName_PADAccessAsyncUDI                                 = 2,
   eQMICATCSDBearerName_PacketAccessSyncUDI                               = 3,
   eQMICATCSDBearerName_DataCircuitAsyncRDI                               = 4,
   eQMICATCSDBearerName_DataCircuitSyncRDI                                = 5,
   eQMICATCSDBearerName_PADAccessAsyncRDI                                 = 6,
   eQMICATCSDBearerName_PacketAccessSyncRDI                               = 7,
};

// Enum to describe QMI CAT Call Control Result
enum eQMICATCallControlResult:UINT8
{
   eQMICATCallControlResult_AllowedWithNoModification                     = 0,
   eQMICATCallControlResult_NotAllowed                                    = 1,
   eQMICATCallControlResult_AllowedWithModification                       = 2,
};

// Enum to describe QMI CAT Call Setup Requirement
enum eQMICATCallSetupRequirement:UINT8
{
   eQMICATCallSetupRequirement_NoOtherCalls                               = 0,
   eQMICATCallSetupRequirement_HoldActiveCalls                            = 1,
   eQMICATCallSetupRequirement_DisconnectActiveCalls                      = 2,
};

// Enum to describe QMI CAT Channel State
enum eQMICATChannelState:UINT8
{
   eQMICATChannelState_ClosedState                                        = 0,
   eQMICATChannelState_ListenState                                        = 1,
   eQMICATChannelState_EstablishedState                                   = 2,
};

// Enum to describe QMI CAT Command Format
enum eQMICATCommandFormat:UINT8
{
   eQMICATCommandFormat_Raw                                               = 1,
   eQMICATCommandFormat_Decoded                                           = 2,
};

// Enum to describe QMI CAT Command ID
enum eQMICATCommandID:UINT8
{
   eQMICATCommandID_DisplayText                                           = 1,
   eQMICATCommandID_GetInkey                                              = 2,
   eQMICATCommandID_GetInput                                              = 3,
   eQMICATCommandID_LaunchBrowser                                         = 4,
   eQMICATCommandID_PlayTone                                              = 5,
   eQMICATCommandID_SelectItem                                            = 6,
   eQMICATCommandID_SendSMS                                               = 7,
   eQMICATCommandID_SendSS                                                = 8,
   eQMICATCommandID_SendUSSD                                              = 9,
   eQMICATCommandID_SetupCallUserConfiguration                            = 10,
   eQMICATCommandID_SetupCallAlphaDisplay                                 = 11,
   eQMICATCommandID_SetupMenu                                             = 12,
   eQMICATCommandID_SetupIdleText                                         = 13,
   eQMICATCommandID_ProvideLocalInformationLanguage                       = 14,
   eQMICATCommandID_SendDTMF                                              = 15,
   eQMICATCommandID_LanguageNotification                                  = 16,
   eQMICATCommandID_SetupEventUserActivity                                = 17,
   eQMICATCommandID_SetupEventIdleScreenNotify                            = 18,
   eQMICATCommandID_SetupEventLanguageSelectionNotify                     = 19,
   eQMICATCommandID_OpenChannel                                           = 20,
   eQMICATCommandID_CloseChannel                                          = 21,
   eQMICATCommandID_ReceiveData                                           = 22,
   eQMICATCommandID_SendData                                              = 23,
   eQMICATCommandID_Activate                                              = 24,
   eQMICATCommandID_SetupEventHCIConnectivity                             = 25,
};

// Enum to describe QMI CAT Config Modes
enum eQMICATConfigModes:UINT8
{
   eQMICATConfigModes_DisabledMode                                        = 0,
   eQMICATConfigModes_GobiMode                                            = 1,
   eQMICATConfigModes_AndroidMode                                         = 2,
   eQMICATConfigModes_DecodedMode                                         = 3,
   eQMICATConfigModes_DecodedPullOnlyMode                                 = 4,
   eQMICATConfigModes_CustomRawMode                                       = 5,
   eQMICATConfigModes_CustomDecodedMode                                   = 6,
};

// Enum to describe QMI CAT Connection Element
enum eQMICATConnectionElement:UINT8
{
   eQMICATConnectionElement_Transparent                                   = 0,
   eQMICATConnectionElement_Nontransparent                                = 1,
   eQMICATConnectionElement_BothTransparentPreferred                      = 2,
   eQMICATConnectionElement_BothNontransparentPreferred                   = 3,
};

// Enum to describe QMI CAT Data Coding Scheme
enum eQMICATDataCodingScheme:UINT8
{
   eQMICATDataCodingScheme_7BitGSM                                        = 0,
   eQMICATDataCodingScheme_8BitGSM                                        = 1,
   eQMICATDataCodingScheme_UCS2                                           = 2,
};

// Enum to describe QMI CAT Decoded Envelope Command
enum eQMICATDecodedEnvelopeCommand:UINT16
{
   eQMICATDecodedEnvelopeCommand_MenuSelection                            = 1,
   eQMICATDecodedEnvelopeCommand_EventDownloadLanguageSelection           = 2,
   eQMICATDecodedEnvelopeCommand_EventDownloadUserActivity                = 3,
   eQMICATDecodedEnvelopeCommand_EventDownloadIdleScreenAvailable         = 4,
   eQMICATDecodedEnvelopeCommand_SendCallControl                          = 5,
   eQMICATDecodedEnvelopeCommand_EventDownloadHCIConnectivity             = 6,
   eQMICATDecodedEnvelopeCommand_EventBrowserTermination                  = 7,
};

// Enum to describe QMI CAT Deliver Error SDU
enum eQMICATDeliverErrorSDU:UINT8
{
   eQMICATDeliverErrorSDU_No                                              = 0,
   eQMICATDeliverErrorSDU_Yes                                             = 1,
   eQMICATDeliverErrorSDU_NoDetect                                        = 2,
   eQMICATDeliverErrorSDU_SubscribedValue                                 = 3,
};

// Enum to describe QMI CAT Delivery Order
enum eQMICATDeliveryOrder:UINT8
{
   eQMICATDeliveryOrder_No                                                = 0,
   eQMICATDeliveryOrder_Yes                                               = 1,
   eQMICATDeliveryOrder_SubscribedValue                                   = 2,
};

// Enum to describe QMI CAT Display Icon Only
enum eQMICATDisplayIconOnly:UINT8
{
   eQMICATDisplayIconOnly_DoNotDisplayTheIcon                             = 0,
   eQMICATDisplayIconOnly_DisplayOnlyTheIcon                              = 1,
};

// Enum to describe QMI CAT Envelope Command Type
enum eQMICATEnvelopeCommandType:UINT16
{
   eQMICATEnvelopeCommandType_MenuSelection                               = 1,
   eQMICATEnvelopeCommandType_EventDownloadUserActivity                   = 2,
   eQMICATEnvelopeCommandType_EventDownloadIdleScreenAvailable            = 3,
   eQMICATEnvelopeCommandType_EventDownloadLanguageSelection              = 4,
   eQMICATEnvelopeCommandType_UnknownType                                 = 5,
   eQMICATEnvelopeCommandType_EventDownloadBrowserTermination             = 6,
   eQMICATEnvelopeCommandType_SendCallControl                             = 7,
   eQMICATEnvelopeCommandType_EventDownloadHCIConnectivity                = 8,
};

// Enum to describe QMI CAT Help Available
enum eQMICATHelpAvailable:UINT8
{
   eQMICATHelpAvailable_NoHelpIsAvailable                                 = 0,
   eQMICATHelpAvailable_HelpIsAvailable                                   = 1,
};

// Enum to describe QMI CAT Help Request
enum eQMICATHelpRequest:UINT8
{
   eQMICATHelpRequest_NoHelpIsRequested                                   = 0,
   eQMICATHelpRequest_HelpIsRequested                                     = 1,
};

// Enum to describe QMI CAT High Priority
enum eQMICATHighPriority:UINT8
{
   eQMICATHighPriority_DoNotClearTheScreen                                = 0,
   eQMICATHighPriority_ClearAnythingThatIsOnTheScreen                     = 1,
};

// Enum to describe QMI CAT Icon Is Displayed
enum eQMICATIconIsDisplayed:UINT8
{
   eQMICATIconIsDisplayed_No                                              = 0,
   eQMICATIconIsDisplayed_Yes                                             = 1,
};

// Enum to describe QMI CAT Icon Qualifier
enum eQMICATIconQualifier:UINT8
{
   eQMICATIconQualifier_IconIsSelfExplanatory                             = 0,
   eQMICATIconQualifier_IconIsNotSelfExplanatory                          = 1,
};

// Enum to describe QMI CAT Image Coding Scheme
enum eQMICATImageCodingScheme:UINT8
{
   eQMICATImageCodingScheme_Unknown                                       = 0,
   eQMICATImageCodingScheme_Basic                                         = 1,
   eQMICATImageCodingScheme_Color                                         = 2,
};

// Enum to describe QMI CAT Immediate Response
enum eQMICATImmediateResponse:UINT8
{
   eQMICATImmediateResponse_No                                            = 0,
   eQMICATImmediateResponse_Yes                                           = 1,
};

// Enum to describe QMI CAT Is CDMA SMS
enum eQMICATIsCDMASMS:UINT8
{
   eQMICATIsCDMASMS_NotCDMASMS                                            = 0,
   eQMICATIsCDMASMS_CDMASMS                                               = 1,
};

// Enum to describe QMI CAT Launch Mode
enum eQMICATLaunchMode:UINT8
{
   eQMICATLaunchMode_LaunchIfNotAlreadyLaunched                           = 0,
   eQMICATLaunchMode_UseTheExistingBrowser                                = 1,
   eQMICATLaunchMode_CloseTheExistingBroswer                              = 2,
};

// Enum to describe QMI CAT Next Action
enum eQMICATNextAction:UINT8
{
   eQMICATNextAction_SetupCall                                            = 0,
   eQMICATNextAction_SendSS                                               = 1,
   eQMICATNextAction_SendUSSD                                             = 2,
   eQMICATNextAction_SendShortMessage                                     = 3,
   eQMICATNextAction_LaunchBrowser                                        = 4,
   eQMICATNextAction_PlayTone                                             = 5,
   eQMICATNextAction_DisplayText                                          = 6,
   eQMICATNextAction_GetInkey                                             = 7,
   eQMICATNextAction_GetInput                                             = 8,
   eQMICATNextAction_SelectItem                                           = 9,
   eQMICATNextAction_SetupMenu                                            = 10,
   eQMICATNextAction_SetupIdleModeText                                    = 11,
   eQMICATNextAction_EndOfTheProactiveSession                             = 12,
   eQMICATNextAction_ProvideLocalInformation                              = 13,
};

// Enum to describe QMI CAT Notification Required
enum eQMICATNotificationRequired:UINT8
{
   eQMICATNotificationRequired_NotificationIsNotRequired                  = 0,
   eQMICATNotificationRequired_NotificationIsRequired                     = 1,
};

// Enum to describe QMI CAT On Demand Link Establish
enum eQMICATOnDemandLinkEstablish:UINT8
{
   eQMICATOnDemandLinkEstablish_LinkIsNotRequired                         = 0,
   eQMICATOnDemandLinkEstablish_LinkIsRequired                            = 1,
};

// Enum to describe QMI CAT PDP Type
enum eQMICATPDPType:UINT8
{
   eQMICATPDPType_IP                                                      = 2,
};

// Enum to describe QMI CAT Packet Data Protocol
enum eQMICATPacketDataProtocol:UINT8
{
   eQMICATPacketDataProtocol_IP                                           = 2,
};

// Enum to describe QMI CAT Packing Required
enum eQMICATPackingRequired:UINT8
{
   eQMICATPackingRequired_PackingIsNotRequired                            = 0,
   eQMICATPackingRequired_PackingIsRequired                               = 1,
};

// Enum to describe QMI CAT Presentation
enum eQMICATPresentation:UINT8
{
   eQMICATPresentation_NotSpecified                                       = 0,
   eQMICATPresentation_DataValuePresentation                              = 1,
   eQMICATPresentation_NavigationPresentation                             = 2,
};

// Enum to describe QMI CAT Proactive Session End Type
enum eQMICATProactiveSessionEndType:UINT8
{
   eQMICATProactiveSessionEndType_EndProactiveSessionCommandReceivedFromTheCard = 1,
   eQMICATProactiveSessionEndType_EndProactiveSessionInternalToME         = 2,
};

// Enum to describe QMI CAT Redial Necessary
enum eQMICATRedialNecessary:UINT8
{
   eQMICATRedialNecessary_RedialIsNotNecessary                            = 0,
   eQMICATRedialNecessary_RedialIsNecessary                               = 1,
};

// Enum to describe QMI CAT Refresh Stage
enum eQMICATRefreshStage:UINT16
{
   eQMICATRefreshStage_RefreshStart                                       = 1,
   eQMICATRefreshStage_RefreshSuccess                                     = 2,
   eQMICATRefreshStage_RefreshFailed                                      = 3,
};

// Enum to describe QMI CAT Response Command
enum eQMICATResponseCommand:UINT8
{
   eQMICATResponseCommand_DisplayText                                     = 1,
   eQMICATResponseCommand_GetInkey                                        = 2,
   eQMICATResponseCommand_GetInput                                        = 3,
   eQMICATResponseCommand_LaunchBrowser                                   = 4,
   eQMICATResponseCommand_PlayTone                                        = 5,
   eQMICATResponseCommand_SelectItemRequest                               = 6,
   eQMICATResponseCommand_SetupMenu                                       = 7,
   eQMICATResponseCommand_SetupIdleText                                   = 8,
   eQMICATResponseCommand_ProvideLocalInformationLanguage                 = 9,
   eQMICATResponseCommand_SetupEventUserActivity                          = 10,
   eQMICATResponseCommand_SetupEventIdleScreenActivity                    = 11,
   eQMICATResponseCommand_SetupEventLanguageSelectNotify                  = 12,
   eQMICATResponseCommand_LanguageNotification                            = 13,
   eQMICATResponseCommand_Activate                                        = 14,
   eQMICATResponseCommand_SetupEventHCIConnectivity                       = 15,
};

// Enum to describe QMI CAT Response Format
enum eQMICATResponseFormat:UINT8
{
   eQMICATResponseFormat_SMSDefaultAlphabet                               = 0,
   eQMICATResponseFormat_YesOrNo                                          = 1,
   eQMICATResponseFormat_NumericalOnly                                    = 2,
   eQMICATResponseFormat_UCS2                                             = 3,
   eQMICATResponseFormat_ImmediateDigitResponse                           = 4,
   eQMICATResponseFormat_YesOrNoOrImmediateDigitalResponse                = 5,
};

// Enum to describe QMI CAT Response Packing Format
enum eQMICATResponsePackingFormat:UINT8
{
   eQMICATResponsePackingFormat_UnpacketFormat                            = 0,
   eQMICATResponsePackingFormat_PacketFormat                              = 1,
};

// Enum to describe QMI CAT Send Data Immediately
enum eQMICATSendDataImmediately:UINT8
{
   eQMICATSendDataImmediately_NoStoreInTXBuffer                           = 0,
   eQMICATSendDataImmediately_Yes                                         = 1,
};

// Enum to describe QMI CAT Send Data Result
enum eQMICATSendDataResult:UINT8
{
   eQMICATSendDataResult_Failed                                           = 0,
   eQMICATSendDataResult_Success                                          = 1,
};

// Enum to describe QMI CAT Show User Input
enum eQMICATShowUserInput:UINT8
{
   eQMICATShowUserInput_DeviceCanShowAllCharacters                        = 0,
   eQMICATShowUserInput_DeviceCanShowUserInput                            = 1,
};

// Enum to describe QMI CAT Slot
enum eQMICATSlot:UINT8
{
   eQMICATSlot_Slot1                                                      = 1,
   eQMICATSlot_Slot2                                                      = 2,
};

// Enum to describe QMI CAT Softkey Selection
enum eQMICATSoftkeySelection:UINT8
{
   eQMICATSoftkeySelection_SoftkeyIsNotSelected                           = 0,
   eQMICATSoftkeySelection_SoftkeyIsSelected                              = 1,
};

// Enum to describe QMI CAT Specific Language Notfication
enum eQMICATSpecificLanguageNotfication:UINT8
{
   eQMICATSpecificLanguageNotfication_No                                  = 0,
   eQMICATSpecificLanguageNotfication_Yes                                 = 1,
};

// Enum to describe QMI CAT Time Units
enum eQMICATTimeUnits:UINT8
{
   eQMICATTimeUnits_Minutes                                               = 0,
   eQMICATTimeUnits_Seconds                                               = 1,
   eQMICATTimeUnits_TenthsOfSeconds                                       = 2,
   eQMICATTimeUnits_DurationIsNotPresent                                  = 255,
};

// Enum to describe QMI CAT Tone
enum eQMICATTone:UINT8
{
   eQMICATTone_DialTone                                                   = 1,
   eQMICATTone_CalledSubscriberBusy                                       = 2,
   eQMICATTone_Congestion                                                 = 3,
   eQMICATTone_RadioPathAck                                               = 4,
   eQMICATTone_RadioPathNotAvailableCallDrop                              = 5,
   eQMICATTone_ErrorTone                                                  = 6,
   eQMICATTone_CallWaitingTone                                            = 7,
   eQMICATTone_RingingTone                                                = 8,
   eQMICATTone_GeneralBeep                                                = 9,
   eQMICATTone_PositiveAckTone                                            = 10,
   eQMICATTone_NegativeAckTone                                            = 11,
   eQMICATTone_RingingToneSelectedByUser                                  = 12,
   eQMICATTone_SMSAlertToneSelectedByUser                                 = 13,
   eQMICATTone_NotInUse                                                   = 255,
};

// Enum to describe QMI CAT Traffic Class
enum eQMICATTrafficClass:UINT8
{
   eQMICATTrafficClass_Conversational                                     = 0,
   eQMICATTrafficClass_Streaming                                          = 1,
   eQMICATTrafficClass_Interactive                                        = 2,
   eQMICATTrafficClass_Background                                         = 3,
   eQMICATTrafficClass_SubscribedValue                                    = 4,
};

// Enum to describe QMI CAT Transport Protocol
enum eQMICATTransportProtocol:UINT8
{
   eQMICATTransportProtocol_NotPresent                                    = 0,
   eQMICATTransportProtocol_UDP                                           = 1,
   eQMICATTransportProtocol_TCP                                           = 2,
};

// Enum to describe QMI CAT USSD Data Coding Scheme
enum eQMICATUSSDDataCodingScheme:UINT8
{
   eQMICATUSSDDataCodingScheme_7BitGSM                                    = 0,
   eQMICATUSSDDataCodingScheme_8BitGSM                                    = 1,
   eQMICATUSSDDataCodingScheme_8BitUCS2                                   = 2,
   eQMICATUSSDDataCodingScheme_7BitUCS2                                   = 3,
};

// Enum to describe QMI CAT User Confirmed
enum eQMICATUserConfirmed:UINT8
{
   eQMICATUserConfirmed_No                                                = 0,
   eQMICATUserConfirmed_Yes                                               = 1,
};

// Enum to describe QMI CAT User Control
enum eQMICATUserControl:UINT8
{
   eQMICATUserControl_DoNotAllowUserToClearTheScreen                      = 0,
   eQMICATUserControl_AllowUserToClearTheScreen                           = 1,
};

// Enum to describe QMI CTL Driver Data Formats
enum eQMICTLDriverDataFormats
{
   eQMICTLDriverDataFormats_QoSFlowHeaderAbsent                           = 0,
   eQMICTLDriverDataFormats_QoSFlowHeaderPresent                          = 1,
};

// Enum to describe QMI CTL Power Save States 
enum eQMICTLPowerSaveStates
{
   eQMICTLPowerSaveStates_Normal                                          = 0,
   eQMICTLPowerSaveStates_Suspend                                         = 1,
   eQMICTLPowerSaveStates_Powerdown                                       = 2,
};

// Enum to describe QMI CTL Service Types
enum eQMICTLServiceTypes
{
   eQMICTLServiceTypes_Control                                            = 0,
   eQMICTLServiceTypes_WDS                                                = 1,
   eQMICTLServiceTypes_DMS                                                = 2,
   eQMICTLServiceTypes_NAS                                                = 3,
   eQMICTLServiceTypes_QOS                                                = 4,
   eQMICTLServiceTypes_WMS                                                = 5,
   eQMICTLServiceTypes_PDS                                                = 6,
   eQMICTLServiceTypes_AUTH                                               = 7,
   eQMICTLServiceTypes_CAT                                                = 224,
   eQMICTLServiceTypes_RMS                                                = 225,
   eQMICTLServiceTypes_OMA                                                = 226,
};

// Enum to describe QMI Call End Reasons
enum eQMICallEndReasons:UINT16
{
   eQMICallEndReasons_Unknown                                             = 0,
   eQMICallEndReasons_Unspecified                                         = 1,
   eQMICallEndReasons_ClientEnd                                           = 2,
   eQMICallEndReasons_NoService                                           = 3,
   eQMICallEndReasons_Fade                                                = 4,
   eQMICallEndReasons_ReleaseNormal                                       = 5,
   eQMICallEndReasons_AccInProgress                                       = 6,
   eQMICallEndReasons_AccFailed                                           = 7,
   eQMICallEndReasons_RedirectOrHandoff                                   = 8,
   eQMICallEndReasons_CloseInProgress                                     = 9,
   eQMICallEndReasons_AuthenticationFailed                                = 10,
   eQMICallEndReasons_InternalError                                       = 11,
   eQMICallEndReasons_CDMALock                                            = 500,
   eQMICallEndReasons_Intercept                                           = 501,
   eQMICallEndReasons_Reorder                                             = 502,
   eQMICallEndReasons_ReleaseServiceOptionRejected                        = 503,
   eQMICallEndReasons_IncomingCall                                        = 504,
   eQMICallEndReasons_AlertStop                                           = 505,
   eQMICallEndReasons_Activation                                          = 506,
   eQMICallEndReasons_MaxAccessProbe                                      = 507,
   eQMICallEndReasons_CCSNotSupportedByBS                                 = 508,
   eQMICallEndReasons_NoResponseFromBS                                    = 509,
   eQMICallEndReasons_RejectedByBS                                        = 510,
   eQMICallEndReasons_Incompatible                                        = 511,
   eQMICallEndReasons_AlreadyInTC                                         = 512,
   eQMICallEndReasons_UserCallOrigDuringGPS                               = 513,
   eQMICallEndReasons_UserCallOrigDuringSMS                               = 514,
   eQMICallEndReasons_NoCDMAService                                       = 515,
   eQMICallEndReasons_ConfFailed                                          = 1000,
   eQMICallEndReasons_IncomingRejected                                    = 1001,
   eQMICallEndReasons_NoGWService                                         = 1002,
   eQMICallEndReasons_NetworkEnd                                          = 1003,
   eQMICallEndReasons_LLCOrSNDCPFailure                                   = 1004,
   eQMICallEndReasons_InsufficientResources                               = 1005,
   eQMICallEndReasons_ServiceOptionOutOfOrder                             = 1006,
   eQMICallEndReasons_NSAPIAlreadyUsed                                    = 1007,
   eQMICallEndReasons_RegularPDPContextDeactivation                       = 1008,
   eQMICallEndReasons_NetworkFailure                                      = 1009,
   eQMICallEndReasons_ReactivationRequested                               = 1010,
   eQMICallEndReasons_ProtocolError                                       = 1011,
   eQMICallEndReasons_OperatorDeterminedBarring                           = 1012,
   eQMICallEndReasons_UnknownOrMissingAPN                                 = 1013,
   eQMICallEndReasons_UnknownPDPAddressOrPDPType                          = 1014,
   eQMICallEndReasons_ActivationRejectedByGGSN                            = 1015,
   eQMICallEndReasons_ActivationRejectedUnspecified                       = 1016,
   eQMICallEndReasons_ServiceOptionNotSupported                           = 1017,
   eQMICallEndReasons_RequestedServiceOptionNotSubscribed                 = 1018,
   eQMICallEndReasons_QoSNotAccepted                                      = 1019,
   eQMICallEndReasons_SemanticErrorInTheTFTOperation                      = 1020,
   eQMICallEndReasons_SyntacticalErrorInTheTFTOperation                   = 1021,
   eQMICallEndReasons_UnknownPDPContext                                   = 1022,
   eQMICallEndReasons_SemanticErrorsInPacketFilters                       = 1023,
   eQMICallEndReasons_SyntacticalErrorsInPacketFilters                    = 1024,
   eQMICallEndReasons_PDPContextWithoutTFTAlreadyActivated                = 1025,
   eQMICallEndReasons_InvalidTransactionIdentifierValue                   = 1026,
   eQMICallEndReasons_SemanticallyIncorrectMessage                        = 1027,
   eQMICallEndReasons_InvalidMandatoryInformation                         = 1028,
   eQMICallEndReasons_MessageTypeNonExistent                              = 1029,
   eQMICallEndReasons_MessageNotCompatibleWithState                       = 1030,
   eQMICallEndReasons_InformationElementNonexistent                       = 1031,
   eQMICallEndReasons_ConditionalInformationElementError                  = 1032,
   eQMICallEndReasons_MessageNotCompatibleWithProtocolState               = 1033,
   eQMICallEndReasons_APNRestrictionValueIncompatibleWithActivePDPContext = 1034,
   eQMICallEndReasons_NoGPRSContextPresent                                = 1035,
   eQMICallEndReasons_RequestedFeatureNotSupported                        = 1036,
   eQMICallEndReasons_CDGenOrBusy                                         = 1500,
   eQMICallEndReasons_CDBillOrAuth                                        = 1501,
   eQMICallEndReasons_ChangeHDR                                           = 1502,
   eQMICallEndReasons_ExitHDR                                             = 1503,
   eQMICallEndReasons_HDRNoSession                                        = 1504,
   eQMICallEndReasons_HDROrigDuringGPSFix                                 = 1505,
   eQMICallEndReasons_HDRCSTimeout                                        = 1506,
   eQMICallEndReasons_HDRReleasedByCM                                     = 1507,
};

// Enum to describe QMI Call History Types
enum eQMICallHistoryTypes:UINT8
{
   eQMICallHistoryTypes_Full                                              = 0,
   eQMICallHistoryTypes_IDsOnly                                           = 1,
};

// Enum to describe QMI Call Types
enum eQMICallTypes:UINT8
{
   eQMICallTypes_NDIS                                                     = 0,
   eQMICallTypes_DUN                                                      = 1,
};

// Enum to describe QMI Connection Status
enum eQMIConnectionStatus:UINT8
{
   eQMIConnectionStatus_Disconnected                                      = 1,
   eQMIConnectionStatus_Connected                                         = 2,
   eQMIConnectionStatus_Suspended                                         = 3,
   eQMIConnectionStatus_Authenticating                                    = 4,
};

// Enum to describe QMI DMS Activation States
enum eQMIDMSActivationStates:UINT16
{
   eQMIDMSActivationStates_ServiceNotActivated                            = 0,
   eQMIDMSActivationStates_SerivceActivated                               = 1,
   eQMIDMSActivationStates_ActivationConnecting                           = 2,
   eQMIDMSActivationStates_ActivationInProgress                           = 3,
   eQMIDMSActivationStates_OTASPSecurityAuthenticated                     = 4,
   eQMIDMSActivationStates_OTASPNAMDownloaded                             = 5,
   eQMIDMSActivationStates_OTASPMDNDownloaded                             = 6,
   eQMIDMSActivationStates_OTASPIMSIDownloaded                            = 7,
   eQMIDMSActivationStates_OTASPPRLDownloaded                             = 8,
   eQMIDMSActivationStates_OTASPSPCDownloaded                             = 9,
   eQMIDMSActivationStates_OTASPSettingsCommitted                         = 10,
};

// Enum to describe QMI DMS Activation Types
enum eQMIDMSActivationTypes
{
   eQMIDMSActivationTypes_OTASP                                           = 0,
};

// Enum to describe QMI DMS Data Service Capabilities 1
enum eQMIDMSDataServiceCapabilities1:UINT8
{
   eQMIDMSDataServiceCapabilities1_NoDataServicesSupported                = 0,
   eQMIDMSDataServiceCapabilities1_OnlyCircuitSwitched                    = 1,
   eQMIDMSDataServiceCapabilities1_OnlyPacketSwitched                     = 2,
   eQMIDMSDataServiceCapabilities1_SimultaneousCircuitPacketSwitched      = 3,
   eQMIDMSDataServiceCapabilities1_NonsimultaneousCircuitPacketSwitched   = 4,
};

// Enum to describe QMI DMS Image Types
enum eQMIDMSImageTypes
{
   eQMIDMSImageTypes_Modem                                                = 0,
   eQMIDMSImageTypes_PRI                                                  = 1,
};

// Enum to describe QMI DMS Lock States
enum eQMIDMSLockStates:UINT8
{
   eQMIDMSLockStates_LockDisabled                                         = 0,
   eQMIDMSLockStates_LockEnabled                                          = 1,
};

// Enum to describe QMI DMS Operating Modes
enum eQMIDMSOperatingModes:UINT8
{
   eQMIDMSOperatingModes_Online                                           = 0,
   eQMIDMSOperatingModes_LowPower                                         = 1,
   eQMIDMSOperatingModes_FactoryTestMode                                  = 2,
   eQMIDMSOperatingModes_Offline                                          = 3,
   eQMIDMSOperatingModes_Reset                                            = 4,
   eQMIDMSOperatingModes_Shutdown                                         = 5,
   eQMIDMSOperatingModes_PersistentLowPower                               = 6,
   eQMIDMSOperatingModes_ModeOnlyLowPower                                 = 7,
   eQMIDMSOperatingModes_GWNetworkTest                                    = 8,
};

// Enum to describe QMI DMS PIN Status
enum eQMIDMSPINStatus:UINT8
{
   eQMIDMSPINStatus_PINUninitialized                                      = 0,
   eQMIDMSPINStatus_PINEnabledUnverified                                  = 1,
   eQMIDMSPINStatus_PINEnabledVerified                                    = 2,
   eQMIDMSPINStatus_PINDisabled                                           = 3,
   eQMIDMSPINStatus_PINBlocked                                            = 4,
   eQMIDMSPINStatus_PINBlockedPermanently                                 = 5,
   eQMIDMSPINStatus_PINUnblocked                                          = 6,
   eQMIDMSPINStatus_PINChanged                                            = 7,
};

// Enum to describe QMI DMS Power Sources
enum eQMIDMSPowerSources:UINT8
{
   eQMIDMSPowerSources_Battery                                            = 0,
   eQMIDMSPowerSources_External                                           = 1,
};

// Enum to describe QMI DMS Radio Interfaces
enum eQMIDMSRadioInterfaces:UINT8
{
   eQMIDMSRadioInterfaces_CDMA20001x                                      = 1,
   eQMIDMSRadioInterfaces_CDMA2000HRPD                                    = 2,
   eQMIDMSRadioInterfaces_GSM                                             = 4,
   eQMIDMSRadioInterfaces_UMTS                                            = 5,
   eQMIDMSRadioInterfaces_LTE                                             = 8,
   eQMIDMSRadioInterfaces_TDS                                             = 9,
};

// Enum to describe QMI DMS Service Capabilities
enum eQMIDMSServiceCapabilities:UINT32
{
   eQMIDMSServiceCapabilities_DataOnly                                    = 1,
   eQMIDMSServiceCapabilities_VoiceOnly                                   = 2,
   eQMIDMSServiceCapabilities_SimultaneousVoiceAndData                    = 3,
   eQMIDMSServiceCapabilities_NonsimultaneousVoiceAndData                 = 4,
};

// Enum to describe QMI DMS Time References
enum eQMIDMSTimeReferences:UINT32
{
   eQMIDMSTimeReferences_User                                             = 0,
};

// Enum to describe QMI DMS Timestamp Sources
enum eQMIDMSTimestampSources:UINT16
{
   eQMIDMSTimestampSources_Device                                         = 0,
   eQMIDMSTimestampSources_CDMANetwork                                    = 1,
   eQMIDMSTimestampSources_CDMA1xEVDONetwork                              = 2,
   eQMIDMSTimestampSources_GSMNetwork                                     = 3,
   eQMIDMSTimestampSources_WCDMANetwork                                   = 4,
   eQMIDMSTimestampSources_GPSNetwork                                     = 5,
   eQMIDMSTimestampSources_MFLONetwork                                    = 6,
};

// Enum to describe QMI DMS UIM Facility
enum eQMIDMSUIMFacility:UINT8
{
   eQMIDMSUIMFacility_PNNetworkPersonalization                            = 0,
   eQMIDMSUIMFacility_PUNetworkSubsetPersonalization                      = 1,
   eQMIDMSUIMFacility_PPServiceProviderPersonalization                    = 2,
   eQMIDMSUIMFacility_PCCorporatePersonalization                          = 3,
   eQMIDMSUIMFacility_PFUIMPersonalization                                = 4,
};

// Enum to describe QMI DMS UIM Facility States
enum eQMIDMSUIMFacilityStates:UINT8
{
   eQMIDMSUIMFacilityStates_Deactivated                                   = 0,
   eQMIDMSUIMFacilityStates_Activated                                     = 1,
   eQMIDMSUIMFacilityStates_Block                                         = 2,
};

// Enum to describe QMI DMS UIM States
enum eQMIDMSUIMStates:UINT8
{
   eQMIDMSUIMStates_InitializationCompleted                               = 0,
   eQMIDMSUIMStates_InitializationFailed                                  = 1,
   eQMIDMSUIMStates_NotPresent                                            = 2,
   eQMIDMSUIMStates_StateUnavailable                                      = 255,
};

// Enum to describe QMI Data Bearer Technologies
enum eQMIDataBearerTechnologies:UINT8
{
   eQMIDataBearerTechnologies_CDMA20001x                                  = 1,
   eQMIDataBearerTechnologies_CDMA20001xEVDORev0                          = 2,
   eQMIDataBearerTechnologies_GPRS                                        = 3,
   eQMIDataBearerTechnologies_WCDMA                                       = 4,
   eQMIDataBearerTechnologies_CDMA20001xEVDORevA                          = 5,
   eQMIDataBearerTechnologies_EGPRS                                       = 6,
   eQMIDataBearerTechnologies_HSDPAWCDMA                                  = 7,
   eQMIDataBearerTechnologies_WCDMAHSUPA                                  = 8,
   eQMIDataBearerTechnologies_HSDPAHSUPA                                  = 9,
   eQMIDataBearerTechnologies_LTE                                         = 10,
   eQMIDataBearerTechnologies_CDMA2000EHRPD                               = 11,
   eQMIDataBearerTechnologies_HSDPAPlusWCDMA                              = 12,
   eQMIDataBearerTechnologies_HSDPAPlusHSUPA                              = 13,
   eQMIDataBearerTechnologies_DualCellHSDPAPlusWCDMA                      = 14,
   eQMIDataBearerTechnologies_DualCellHSDPAPlusHSUPA                      = 15,
   eQMIDataBearerTechnologies_HSDPAPlus64QAM                              = 16,
   eQMIDataBearerTechnologies_HSDPAPlus64QAMHSUPA                         = 17,
   eQMIDataBearerTechnologies_TDSCDMA                                     = 18,
   eQMIDataBearerTechnologies_TDSCDMAHSDPA                                = 19,
   eQMIDataBearerTechnologies_Unknown                                     = 255,
};

// Enum to describe QMI Dormancy Status
enum eQMIDormancyStatus:UINT8
{
   eQMIDormancyStatus_TrafficChannelDormant                               = 1,
   eQMIDormancyStatus_TrafficChannelActive                                = 2,
};

// Enum to describe QMI Erroneous SDU Deliveries
enum eQMIErroneousSDUDeliveries:UINT8
{
   eQMIErroneousSDUDeliveries_Subscribe                                   = 0,
   eQMIErroneousSDUDeliveries_NoDetection                                 = 1,
   eQMIErroneousSDUDeliveries_ErroneousSDUIsDelivered                     = 2,
   eQMIErroneousSDUDeliveries_ErroneousSDUIsNotDelivered                  = 3,
};

// Enum to describe QMI Errors
enum eQMIErrors:UINT16
{
   eQMIErrors_None                                                        = 0,
   eQMIErrors_MalformedMessage                                            = 1,
   eQMIErrors_NoMemory                                                    = 2,
   eQMIErrors_Internal                                                    = 3,
   eQMIErrors_Aborted                                                     = 4,
   eQMIErrors_ClientIDsExhausted                                          = 5,
   eQMIErrors_UnabortableTransaction                                      = 6,
   eQMIErrors_InvalidClientID                                             = 7,
   eQMIErrors_NoThresholdsProvided                                        = 8,
   eQMIErrors_InvalidHandle                                               = 9,
   eQMIErrors_InvalidProfile                                              = 10,
   eQMIErrors_InvalidPINID                                                = 11,
   eQMIErrors_IncorrectPIN                                                = 12,
   eQMIErrors_NoNetworkFound                                              = 13,
   eQMIErrors_CallFailed                                                  = 14,
   eQMIErrors_OutOfCall                                                   = 15,
   eQMIErrors_NotProvisioned                                              = 16,
   eQMIErrors_MissingArgument                                             = 17,
   eQMIErrors_ArgumentTooLong                                             = 19,
   eQMIErrors_InvalidTransactionID                                        = 22,
   eQMIErrors_DeviceInUse                                                 = 23,
   eQMIErrors_NetworkUnsupported                                          = 24,
   eQMIErrors_DeviceUnsupported                                           = 25,
   eQMIErrors_NoEffect                                                    = 26,
   eQMIErrors_NoFreeProfile                                               = 27,
   eQMIErrors_InvalidPDPType                                              = 28,
   eQMIErrors_InvalidTechnologyPreference                                 = 29,
   eQMIErrors_InvalidProfileType                                          = 30,
   eQMIErrors_InvalidServiceType                                          = 31,
   eQMIErrors_InvalidRegisterAction                                       = 32,
   eQMIErrors_InvalidPSAttachAction                                       = 33,
   eQMIErrors_AuthenticationFailed                                        = 34,
   eQMIErrors_PINBlocked                                                  = 35,
   eQMIErrors_PINAlwaysBlocked                                            = 36,
   eQMIErrors_UIMUninitialized                                            = 37,
   eQMIErrors_MaximumQoSRequestsInUse                                     = 38,
   eQMIErrors_IncorrectFlowFilter                                         = 39,
   eQMIErrors_NetworkQoSUnaware                                           = 40,
   eQMIErrors_InvalidQoSID                                                = 41,
   eQMIErrors_QoSUnavailable                                              = 42,
   eQMIErrors_FlowSuspended                                               = 43,
   eQMIErrors_GeneralError                                                = 46,
   eQMIErrors_UnknownError                                                = 47,
   eQMIErrors_InvalidArgument                                             = 48,
   eQMIErrors_InvalidIndex                                                = 49,
   eQMIErrors_NoEntry                                                     = 50,
   eQMIErrors_DeviceStorageFull                                           = 51,
   eQMIErrors_DeviceNotReady                                              = 52,
   eQMIErrors_NetworkNotReady                                             = 53,
   eQMIErrors_WMSCauseCode                                                = 54,
   eQMIErrors_WMSMessageNotSent                                           = 55,
   eQMIErrors_WMSMessageDeliveryFailure                                   = 56,
   eQMIErrors_WMSInvalidMessageID                                         = 57,
   eQMIErrors_WMSEncoding                                                 = 58,
   eQMIErrors_AuthenticationLock                                          = 59,
   eQMIErrors_InvalidTransition                                           = 60,
   eQMIErrors_SessionInactive                                             = 65,
   eQMIErrors_SessionInvalid                                              = 66,
   eQMIErrors_SessionOwnership                                            = 67,
   eQMIErrors_InsufficientResources                                       = 68,
   eQMIErrors_Disabled                                                    = 69,
   eQMIErrors_InvalidOperation                                            = 70,
   eQMIErrors_InvalidQMICommand                                           = 71,
   eQMIErrors_WMSTPDUType                                                 = 72,
   eQMIErrors_WMSSMSCAddress                                              = 73,
   eQMIErrors_InformationUnavailable                                      = 74,
   eQMIErrors_SegmentTooLong                                              = 75,
   eQMIErrors_SegmentOrder                                                = 76,
   eQMIErrors_BundlingNotSupported                                        = 77,
   eQMIErrors_SIMFileNotFound                                             = 80,
   eQMIErrors_AccessDenied                                                = 82,
   eQMIErrors_HardwareRestricted                                          = 83,
   eQMIErrors_CATEventRegistrationFailed                                  = 61441,
   eQMIErrors_CATInvalidTerminalResponse                                  = 61442,
   eQMIErrors_CATInvalidEnvelopeCommand                                   = 61443,
   eQMIErrors_CATEnvelopeCommandBusy                                      = 61444,
   eQMIErrors_CATEnvelopeCommandFailed                                    = 61445,
};

// Enum to describe QMI HA/AAA Key States
enum eQMIHAAAAKeyStates:UINT8
{
   eQMIHAAAAKeyStates_Unset                                               = 0,
   eQMIHAAAAKeyStates_SetDefault                                          = 1,
   eQMIHAAAAKeyStates_SetModified                                         = 2,
};

// Enum to describe QMI LOC Altitude Assumed
enum eQMILOCAltitudeAssumed:UINT32
{
   eQMILOCAltitudeAssumed_AltitudeIsCalculated                            = 0,
   eQMILOCAltitudeAssumed_AltitudeIsAssumed                               = 1,
};

// Enum to describe QMI LOC Altitude Source
enum eQMILOCAltitudeSource:UINT32
{
   eQMILOCAltitudeSource_Unknown                                          = 0,
   eQMILOCAltitudeSource_GPS                                              = 1,
   eQMILOCAltitudeSource_CellID                                           = 2,
   eQMILOCAltitudeSource_EnhancedCellID                                   = 3,
   eQMILOCAltitudeSource_WiFi                                             = 4,
   eQMILOCAltitudeSource_Terrestrial                                      = 5,
   eQMILOCAltitudeSource_TerrestrialHybrid                                = 6,
   eQMILOCAltitudeSource_AltitudeDatabase                                 = 7,
   eQMILOCAltitudeSource_BarometricAltimeter                              = 8,
   eQMILOCAltitudeSource_Other                                            = 9,
};

// Enum to describe QMI LOC Confidence
enum eQMILOCConfidence:UINT32
{
   eQMILOCConfidence_Low                                                  = 1,
   eQMILOCConfidence_Medium                                               = 2,
   eQMILOCConfidence_High                                                 = 3,
};

// Enum to describe QMI LOC Connection Request Type
enum eQMILOCConnectionRequestType
{
   eQMILOCConnectionRequestType_Open                                      = 1,
   eQMILOCConnectionRequestType_Close                                     = 2,
};

// Enum to describe QMI LOC Connection Status
enum eQMILOCConnectionStatus:UINT32
{
   eQMILOCConnectionStatus_Success                                        = 1,
   eQMILOCConnectionStatus_Failure                                        = 2,
};

// Enum to describe QMI LOC Control Mode
enum eQMILOCControlMode:UINT32
{
   eQMILOCControlMode_Automatic                                           = 0,
   eQMILOCControlMode_Forced                                              = 1,
};

// Enum to describe QMI LOC Coverage
enum eQMILOCCoverage:UINT32
{
   eQMILOCCoverage_NotSpecified                                           = 0,
   eQMILOCCoverage_Point                                                  = 1,
   eQMILOCCoverage_Full                                                   = 2,
};

// Enum to describe QMI LOC Cradle Mount State
enum eQMILOCCradleMountState:UINT32
{
   eQMILOCCradleMountState_NotMounted                                     = 0,
   eQMILOCCradleMountState_Mounted                                        = 1,
   eQMILOCCradleMountState_Unknown                                        = 2,
};

// Enum to describe QMI LOC Data Coding Scheme
enum eQMILOCDataCodingScheme:UINT32
{
   eQMILOCDataCodingScheme_German                                         = 12,
   eQMILOCDataCodingScheme_English                                        = 13,
   eQMILOCDataCodingScheme_Italian                                        = 14,
   eQMILOCDataCodingScheme_French                                         = 15,
   eQMILOCDataCodingScheme_Spanish                                        = 16,
   eQMILOCDataCodingScheme_Dutch                                          = 17,
   eQMILOCDataCodingScheme_Swedish                                        = 18,
   eQMILOCDataCodingScheme_Danish                                         = 19,
   eQMILOCDataCodingScheme_Portuguese                                     = 20,
   eQMILOCDataCodingScheme_Finnish                                        = 21,
   eQMILOCDataCodingScheme_Norwegian                                      = 22,
   eQMILOCDataCodingScheme_Greek                                          = 23,
   eQMILOCDataCodingScheme_Turkish                                        = 24,
   eQMILOCDataCodingScheme_Hungarian                                      = 25,
   eQMILOCDataCodingScheme_Polish                                         = 26,
   eQMILOCDataCodingScheme_Unspecified                                    = 27,
   eQMILOCDataCodingScheme_UTF8                                           = 28,
   eQMILOCDataCodingScheme_UCS2                                           = 29,
   eQMILOCDataCodingScheme_GSMDefault                                     = 30,
};

// Enum to describe QMI LOC Encoding Scheme
enum eQMILOCEncodingScheme:UINT32
{
   eQMILOCEncodingScheme_Octet                                            = 0,
   eQMILOCEncodingScheme_EXNProtocolMessage                               = 1,
   eQMILOCEncodingScheme_ASCII                                            = 2,
   eQMILOCEncodingScheme_IA5                                              = 3,
   eQMILOCEncodingScheme_Unicode                                          = 4,
   eQMILOCEncodingScheme_ShiftJIS                                         = 5,
   eQMILOCEncodingScheme_Korean                                           = 6,
   eQMILOCEncodingScheme_LatinHebrew                                      = 7,
   eQMILOCEncodingScheme_Latin                                            = 8,
   eQMILOCEncodingScheme_GSM                                              = 9,
};

// Enum to describe QMI LOC Engine State
enum eQMILOCEngineState
{
   eQMILOCEngineState_On                                                  = 1,
   eQMILOCEngineState_Off                                                 = 2,
};

// Enum to describe QMI LOC Fix Recurrence Type
enum eQMILOCFixRecurrenceType:UINT32
{
   eQMILOCFixRecurrenceType_RequestPeriodicFixes                          = 1,
   eQMILOCFixRecurrenceType_RequestSingleFix                              = 2,
};

// Enum to describe QMI LOC Format Type
enum eQMILOCFormatType:UINT32
{
   eQMILOCFormatType_LogicalName                                          = 0,
   eQMILOCFormatType_EmailAddress                                         = 1,
   eQMILOCFormatType_MSISDN                                               = 2,
   eQMILOCFormatType_URL                                                  = 3,
   eQMILOCFormatType_SIPURL                                               = 4,
   eQMILOCFormatType_MIN                                                  = 5,
   eQMILOCFormatType_MDN                                                  = 6,
   eQMILOCFormatType_IMSPublicIdentity                                    = 7,
   eQMILOCFormatType_OSSUnknown                                           = 2147483647,
};

// Enum to describe QMI LOC Geofence Breach Type
enum eQMILOCGeofenceBreachType
{
   eQMILOCGeofenceBreachType_Entering                                     = 1,
   eQMILOCGeofenceBreachType_Leaving                                      = 2,
};

// Enum to describe QMI LOC Geofence General Alert
enum eQMILOCGeofenceGeneralAlert:UINT32
{
   eQMILOCGeofenceGeneralAlert_GNSSUnavailable                            = 1,
   eQMILOCGeofenceGeneralAlert_GNSSAvailable                              = 2,
   eQMILOCGeofenceGeneralAlert_OOS                                        = 3,
   eQMILOCGeofenceGeneralAlert_TimeInvalid                                = 4,
};

// Enum to describe QMI LOC Geofence Operation Mode
enum eQMILOCGeofenceOperationMode
{
   eQMILOCGeofenceOperationMode_Added                                     = 1,
   eQMILOCGeofenceOperationMode_Deleted                                   = 2,
   eQMILOCGeofenceOperationMode_Edited                                    = 3,
};

// Enum to describe QMI LOC Geofence Origin
enum eQMILOCGeofenceOrigin:UINT32
{
   eQMILOCGeofenceOrigin_Network                                          = 1,
   eQMILOCGeofenceOrigin_Device                                           = 2,
};

// Enum to describe QMI LOC Geofence State
enum eQMILOCGeofenceState:UINT32
{
   eQMILOCGeofenceState_Active                                            = 1,
   eQMILOCGeofenceState_Suspended                                         = 2,
};

// Enum to describe QMI LOC Geofence Status
enum eQMILOCGeofenceStatus:UINT32
{
   eQMILOCGeofenceStatus_Success                                          = 0,
   eQMILOCGeofenceStatus_GeneralFailure                                   = 1,
   eQMILOCGeofenceStatus_Unsupported                                      = 2,
   eQMILOCGeofenceStatus_InvalidParameters                                = 3,
   eQMILOCGeofenceStatus_EngineBusy                                       = 4,
   eQMILOCGeofenceStatus_PhoneOffline                                     = 5,
   eQMILOCGeofenceStatus_Timeout                                          = 6,
   eQMILOCGeofenceStatus_InsufficientMemory                               = 8,
};

// Enum to describe QMI LOC Health Status
enum eQMILOCHealthStatus:UINT8
{
   eQMILOCHealthStatus_Unhealthy                                          = 0,
   eQMILOCHealthStatus_Healthy                                            = 1,
};

// Enum to describe QMI LOC Horizontal Accuracy
enum eQMILOCHorizontalAccuracy:UINT32
{
   eQMILOCHorizontalAccuracy_Low                                          = 1,
   eQMILOCHorizontalAccuracy_Medium                                       = 2,
   eQMILOCHorizontalAccuracy_High                                         = 3,
};

// Enum to describe QMI LOC Intermediate Report State
enum eQMILOCIntermediateReportState:UINT32
{
   eQMILOCIntermediateReportState_Enable                                  = 1,
   eQMILOCIntermediateReportState_Disable                                 = 2,
};

// Enum to describe QMI LOC Linkage
enum eQMILOCLinkage:UINT32
{
   eQMILOCLinkage_NotSpecified                                            = 0,
   eQMILOCLinkage_FullyInterdependent                                     = 1,
   eQMILOCLinkage_DependsOnLatLong                                        = 2,
   eQMILOCLinkage_FullyIndependent                                        = 3,
};

// Enum to describe QMI LOC Location Server Type
enum eQMILOCLocationServerType:UINT32
{
   eQMILOCLocationServerType_CDMAPDE                                      = 1,
   eQMILOCLocationServerType_CDMAMPC                                      = 2,
   eQMILOCLocationServerType_UMTSSLP                                      = 3,
   eQMILOCLocationServerType_CustomPDE                                    = 4,
};

// Enum to describe QMI LOC Location Type
enum eQMILOCLocationType:UINT32
{
   eQMILOCLocationType_CurrentLocation                                    = 1,
   eQMILOCLocationType_CurrentOrLastKnownLocation                         = 2,
   eQMILOCLocationType_InitialLocation                                    = 4,
};

// Enum to describe QMI LOC Lock Type
enum eQMILOCLockType:UINT32
{
   eQMILOCLockType_LockNone                                               = 1,
   eQMILOCLockType_LockMI                                                 = 2,
   eQMILOCLockType_LockMT                                                 = 3,
   eQMILOCLockType_LockAll                                                = 4,
};

// Enum to describe QMI LOC Notification Type
enum eQMILOCNotificationType:UINT32
{
   eQMILOCNotificationType_NoNotifyOrVerify                               = 1,
   eQMILOCNotificationType_NotifyOnly                                     = 2,
   eQMILOCNotificationType_AllowNoResponse                                = 3,
   eQMILOCNotificationType_ResponseRequired                               = 4,
   eQMILOCNotificationType_PrivacyOverride                                = 5,
};

// Enum to describe QMI LOC Operation Mode
enum eQMILOCOperationMode:UINT32
{
   eQMILOCOperationMode_Default                                           = 1,
   eQMILOCOperationMode_MSB                                               = 2,
   eQMILOCOperationMode_MSA                                               = 3,
   eQMILOCOperationMode_StandAlone                                        = 4,
   eQMILOCOperationMode_CellID                                            = 5,
};

// Enum to describe QMI LOC Orbits Format Type
enum eQMILOCOrbitsFormatType:UINT32
{
   eQMILOCOrbitsFormatType_PredictedOrbitsXTRA                            = 0,
};

// Enum to describe QMI LOC PDN Type
enum eQMILOCPDNType:UINT32
{
   eQMILOCPDNType_IPv4                                                    = 1,
   eQMILOCPDNType_IPv6                                                    = 2,
   eQMILOCPDNType_IPv4OrIPv6                                              = 3,
   eQMILOCPDNType_PPP                                                     = 4,
};

// Enum to describe QMI LOC Position
enum eQMILOCPosition:UINT32
{
   eQMILOCPosition_AGPSSetAssisted                                        = 1,
   eQMILOCPosition_AGPSSetBased                                           = 2,
   eQMILOCPosition_AGPSSetAssistedPreference                              = 3,
   eQMILOCPosition_AGPSSetBasedPreference                                 = 4,
   eQMILOCPosition_AutonomousGPS                                          = 5,
   eQMILOCPosition_AFLT                                                   = 6,
   eQMILOCPosition_ECID                                                   = 7,
   eQMILOCPosition_EOTD                                                   = 8,
   eQMILOCPosition_OTDOA                                                  = 9,
   eQMILOCPosition_NoPosition                                             = 10,
};

// Enum to describe QMI LOC Position From Geofence
enum eQMILOCPositionFromGeofence:UINT32
{
   eQMILOCPositionFromGeofence_Inside                                     = 1,
   eQMILOCPositionFromGeofence_Outside                                    = 2,
};

// Enum to describe QMI LOC Position Mode
enum eQMILOCPositionMode:UINT32
{
   eQMILOCPositionMode_AssistedOnly                                       = 1,
   eQMILOCPositionMode_BasedOnly                                          = 2,
   eQMILOCPositionMode_AssistedPreferredBasedAllowed                      = 3,
   eQMILOCPositionMode_BasedPreferredAssistedAllowed                      = 4,
};

// Enum to describe QMI LOC Position Source
enum eQMILOCPositionSource:UINT32
{
   eQMILOCPositionSource_GNSS                                             = 0,
   eQMILOCPositionSource_CellID                                           = 1,
   eQMILOCPositionSource_EnhancedCellID                                   = 2,
   eQMILOCPositionSource_WiFi                                             = 3,
   eQMILOCPositionSource_Terrestrial                                      = 4,
   eQMILOCPositionSource_TerrestrialHybrid                                = 5,
   eQMILOCPositionSource_Other                                            = 6,
};

// Enum to describe QMI LOC Power State
enum eQMILOCPowerState:UINT32
{
   eQMILOCPowerState_NotConnected                                         = 0,
   eQMILOCPowerState_Connected                                            = 1,
   eQMILOCPowerState_Unknown                                              = 2,
};

// Enum to describe QMI LOC Reliability
enum eQMILOCReliability:UINT32
{
   eQMILOCReliability_NotSet                                              = 0,
   eQMILOCReliability_VeryLow                                             = 1,
   eQMILOCReliability_Low                                                 = 2,
   eQMILOCReliability_Medium                                              = 3,
   eQMILOCReliability_High                                                = 4,
};

// Enum to describe QMI LOC Request Type
enum eQMILOCRequestType:UINT32
{
   eQMILOCRequestType_StartPeriodicHighFrequencyFixes                     = 0,
   eQMILOCRequestType_StartPeriodicKeepWarmFixes                          = 1,
   eQMILOCRequestType_StopPeriodicFixes                                   = 2,
};

// Enum to describe QMI LOC Responsiveness
enum eQMILOCResponsiveness:UINT32
{
   eQMILOCResponsiveness_Low                                              = 1,
   eQMILOCResponsiveness_Medium                                           = 2,
   eQMILOCResponsiveness_High                                             = 3,
};

// Enum to describe QMI LOC SUPL Version
enum eQMILOCSUPLVersion:UINT32
{
   eQMILOCSUPLVersion_10                                                  = 1,
   eQMILOCSUPLVersion_20                                                  = 2,
};

// Enum to describe QMI LOC Satellite Status
enum eQMILOCSatelliteStatus:UINT32
{
   eQMILOCSatelliteStatus_Idle                                            = 1,
   eQMILOCSatelliteStatus_Searching                                       = 2,
   eQMILOCSatelliteStatus_Tracking                                        = 3,
};

// Enum to describe QMI LOC Sensor Usage
enum eQMILOCSensorUsage:UINT32
{
   eQMILOCSensorUsage_SensorUseEnabled                                    = 0,
   eQMILOCSensorUsage_SensorUseDisabled                                   = 1,
};

// Enum to describe QMI LOC Service Interaction Type
enum eQMILOCServiceInteractionType:UINT32
{
   eQMILOCServiceInteractionType_OngoingNIIncomingMO                      = 1,
};

// Enum to describe QMI LOC Session State
enum eQMILOCSessionState:UINT32
{
   eQMILOCSessionState_Started                                            = 1,
   eQMILOCSessionState_Finished                                           = 2,
};

// Enum to describe QMI LOC Session Status
enum eQMILOCSessionStatus:UINT32
{
   eQMILOCSessionStatus_Success                                           = 0,
   eQMILOCSessionStatus_InProgress                                        = 1,
   eQMILOCSessionStatus_GeneralFailure                                    = 2,
   eQMILOCSessionStatus_Timeout                                           = 3,
   eQMILOCSessionStatus_UserEnded                                         = 4,
   eQMILOCSessionStatus_BadParameter                                      = 5,
   eQMILOCSessionStatus_PhoneOffline                                      = 6,
   eQMILOCSessionStatus_EngineLocked                                      = 7,
};

// Enum to describe QMI LOC Stationary Status
enum eQMILOCStationaryStatus
{
   eQMILOCStationaryStatus_DeviceIsNotStationary                          = 0,
   eQMILOCStationaryStatus_DeviceIsStationary                             = 1,
};

// Enum to describe QMI LOC Status
enum eQMILOCStatus
{
   eQMILOCStatus_Success                                                  = 0,
   eQMILOCStatus_GeneralFailure                                           = 1,
   eQMILOCStatus_Unsupported                                              = 2,
   eQMILOCStatus_InvalidParameter                                         = 3,
   eQMILOCStatus_EngineBusy                                               = 4,
   eQMILOCStatus_PhoneOffline                                             = 5,
   eQMILOCStatus_Timeout                                                  = 6,
};

// Enum to describe QMI LOC System
enum eQMILOCSystem:UINT32
{
   eQMILOCSystem_GlobalPositioningSystem                                  = 1,
   eQMILOCSystem_Galileo                                                  = 2,
   eQMILOCSystem_SatelliteBasedAugmentationSystem                         = 3,
   eQMILOCSystem_COMPASS                                                  = 4,
   eQMILOCSystem_GLONASS                                                  = 5,
};

// Enum to describe QMI LOC Time Source
enum eQMILOCTimeSource:UINT32
{
   eQMILOCTimeSource_Invalid                                              = 0,
   eQMILOCTimeSource_NetworkTimeTransfer                                  = 1,
   eQMILOCTimeSource_NetworkTimeTagging                                   = 2,
   eQMILOCTimeSource_ExternalInput                                        = 3,
   eQMILOCTimeSource_TOWDecode                                            = 4,
   eQMILOCTimeSource_TOWConfirmed                                         = 5,
   eQMILOCTimeSource_TOWAndWeekConfirmed                                  = 6,
   eQMILOCTimeSource_NavigationSolution                                   = 7,
   eQMILOCTimeSource_SolveForTime                                         = 8,
};

// Enum to describe QMI LOC Trigger Type
enum eQMILOCTriggerType
{
   eQMILOCTriggerType_SingleShot                                          = -1,
   eQMILOCTriggerType_Periodic                                            = 0,
   eQMILOCTriggerType_AreaEvent                                           = 1,
};

// Enum to describe QMI LOC User Response
enum eQMILOCUserResponse:UINT32
{
   eQMILOCUserResponse_Accept                                             = 1,
   eQMILOCUserResponse_Deny                                               = 2,
   eQMILOCUserResponse_NoResponse                                         = 3,
};

// Enum to describe QMI LOC VX Version
enum eQMILOCVXVersion:UINT32
{
   eQMILOCVXVersion_V1Only                                                = 1,
   eQMILOCVXVersion_V2Only                                                = 2,
};

// Enum to describe QMI LOC WWAN Type
enum eQMILOCWWANType:UINT32
{
   eQMILOCWWANType_Internet                                               = 0,
   eQMILOCWWANType_AGNSS                                                  = 1,
};

// Enum to describe QMI LOC Wi-Fi Fix Error Code
enum eQMILOCWiFiFixErrorCode:UINT32
{
   eQMILOCWiFiFixErrorCode_Success                                        = 0,
   eQMILOCWiFiFixErrorCode_WiFiNotAvailable                               = 1,
   eQMILOCWiFiFixErrorCode_NoAccessPointsFound                            = 2,
   eQMILOCWiFiFixErrorCode_Unauthorized                                   = 3,
   eQMILOCWiFiFixErrorCode_ServerUnavailable                              = 4,
   eQMILOCWiFiFixErrorCode_LocationCannotBeDetermined                     = 5,
   eQMILOCWiFiFixErrorCode_Unknown                                        = 6,
};

// Enum to describe QMI LOC Wi-Fi Status
enum eQMILOCWiFiStatus:UINT32
{
   eQMILOCWiFiStatus_Available                                            = 1,
   eQMILOCWiFiStatus_Unavailable                                          = 2,
};

// Enum to describe QMI Mobile IP Modes
enum eQMIMobileIPModes:UINT8
{
   eQMIMobileIPModes_MIPOffSimpleIPOnly                                   = 0,
   eQMIMobileIPModes_MIPPreferred                                         = 1,
   eQMIMobileIPModes_MIPOnly                                              = 2,
};

// Enum to describe QMI NAS AN-AAA Authentication Status
enum eQMINASANAAAAuthenticationStatus:UINT8
{
   eQMINASANAAAAuthenticationStatus_AuthenticationFailed                  = 0,
   eQMINASANAAAAuthenticationStatus_AuthenticationSuccess                 = 1,
   eQMINASANAAAAuthenticationStatus_NoAuthenticationRequested             = 2,
};

// Enum to describe QMI NAS Acquisition Order
enum eQMINASAcquisitionOrder:UINT32
{
   eQMINASAcquisitionOrder_Automatic                                      = 0,
   eQMINASAcquisitionOrder_GSMThenWCDMA                                   = 1,
   eQMINASAcquisitionOrder_WCDMAThenGSM                                   = 2,
};

// Enum to describe QMI NAS Active Subscription
enum eQMINASActiveSubscription:UINT8
{
   eQMINASActiveSubscription_NotActive                                    = 0,
   eQMINASActiveSubscription_Active                                       = 1,
};

// Enum to describe QMI NAS Band Classes
enum eQMINASBandClasses:UINT16
{
   eQMINASBandClasses_CDMABandClass0                                      = 0,
   eQMINASBandClasses_CDMABandClass1                                      = 1,
   eQMINASBandClasses_CDMABandClass3                                      = 3,
   eQMINASBandClasses_CDMABandClass4                                      = 4,
   eQMINASBandClasses_CDMABandClass5                                      = 5,
   eQMINASBandClasses_CDMABandClass6                                      = 6,
   eQMINASBandClasses_CDMABandClass7                                      = 7,
   eQMINASBandClasses_CDMABandClass8                                      = 8,
   eQMINASBandClasses_CDMABandClass9                                      = 9,
   eQMINASBandClasses_CDMABandClass10                                     = 10,
   eQMINASBandClasses_CDMABandClass11                                     = 11,
   eQMINASBandClasses_CDMABandClass12                                     = 12,
   eQMINASBandClasses_CDMABandClass13                                     = 13,
   eQMINASBandClasses_CDMABandClass14                                     = 14,
   eQMINASBandClasses_CDMABandClass15                                     = 15,
   eQMINASBandClasses_CDMABandClass16                                     = 16,
   eQMINASBandClasses_CDMABandClass17                                     = 17,
   eQMINASBandClasses_CDMABandClass18                                     = 18,
   eQMINASBandClasses_CDMABandClass19                                     = 19,
   eQMINASBandClasses_GSM450                                              = 40,
   eQMINASBandClasses_GSM480                                              = 41,
   eQMINASBandClasses_GSM750                                              = 42,
   eQMINASBandClasses_GSM850                                              = 43,
   eQMINASBandClasses_GSM900Extended                                      = 44,
   eQMINASBandClasses_GSM900Primary                                       = 45,
   eQMINASBandClasses_GSM900Railways                                      = 46,
   eQMINASBandClasses_GSM1800                                             = 47,
   eQMINASBandClasses_GSM1900                                             = 48,
   eQMINASBandClasses_WCDMA2100                                           = 80,
   eQMINASBandClasses_WCDMAPCS1900                                        = 81,
   eQMINASBandClasses_WCDMADCS1800                                        = 82,
   eQMINASBandClasses_WCDMA1700US                                         = 83,
   eQMINASBandClasses_WCDMA850                                            = 84,
   eQMINASBandClasses_WCDMA800                                            = 85,
   eQMINASBandClasses_WCDMA2600                                           = 86,
   eQMINASBandClasses_WCDMA900                                            = 87,
   eQMINASBandClasses_WCDMA1700Japan                                      = 88,
   eQMINASBandClasses_WCDMA1500Japan                                      = 90,
   eQMINASBandClasses_WCDMA850Japan                                       = 91,
   eQMINASBandClasses_EUTRABand1                                          = 120,
   eQMINASBandClasses_EUTRABand2                                          = 121,
   eQMINASBandClasses_EUTRABand3                                          = 122,
   eQMINASBandClasses_EUTRABand4                                          = 123,
   eQMINASBandClasses_EUTRABand5                                          = 124,
   eQMINASBandClasses_EUTRABand6                                          = 125,
   eQMINASBandClasses_EUTRABand7                                          = 126,
   eQMINASBandClasses_EUTRABand8                                          = 127,
   eQMINASBandClasses_EUTRABand9                                          = 128,
   eQMINASBandClasses_EUTRABand10                                         = 129,
   eQMINASBandClasses_EUTRABand11                                         = 130,
   eQMINASBandClasses_EUTRABand12                                         = 131,
   eQMINASBandClasses_EUTRABand13                                         = 132,
   eQMINASBandClasses_EUTRABand14                                         = 133,
   eQMINASBandClasses_EUTRABand17                                         = 134,
   eQMINASBandClasses_EUTRABand33                                         = 135,
   eQMINASBandClasses_EUTRABand34                                         = 136,
   eQMINASBandClasses_EUTRABand35                                         = 137,
   eQMINASBandClasses_EUTRABand36                                         = 138,
   eQMINASBandClasses_EUTRABand37                                         = 139,
   eQMINASBandClasses_EUTRABand38                                         = 140,
   eQMINASBandClasses_EUTRABand39                                         = 141,
   eQMINASBandClasses_EUTRABand40                                         = 142,
   eQMINASBandClasses_EUTRABand18                                         = 143,
   eQMINASBandClasses_EUTRABand19                                         = 144,
   eQMINASBandClasses_EUTRABand20                                         = 145,
   eQMINASBandClasses_EUTRABand21                                         = 146,
   eQMINASBandClasses_EUTRABand24                                         = 147,
   eQMINASBandClasses_EUTRABand25                                         = 148,
   eQMINASBandClasses_EUTRABand41                                         = 149,
   eQMINASBandClasses_EUTRABand42                                         = 150,
   eQMINASBandClasses_EUTRABand43                                         = 151,
   eQMINASBandClasses_TDSCDMABandA                                        = 200,
   eQMINASBandClasses_TDSCDMABandB                                        = 201,
   eQMINASBandClasses_TDSCDMABandC                                        = 202,
   eQMINASBandClasses_TDSCDMABandD                                        = 203,
   eQMINASBandClasses_TDSCDMABandE                                        = 204,
   eQMINASBandClasses_TDSCDMABandF                                        = 205,
};

// Enum to describe QMI NAS CDMA 1xEV-DO Active Protocol
enum eQMINASCDMA1xEVDOActiveProtocol:UINT8
{
   eQMINASCDMA1xEVDOActiveProtocol_None                                   = 0,
   eQMINASCDMA1xEVDOActiveProtocol_CDMA1xEVDORel0                         = 2,
   eQMINASCDMA1xEVDOActiveProtocol_CDMA1xEVDORelA                         = 3,
   eQMINASCDMA1xEVDOActiveProtocol_CDMA1xEVDORelB                         = 4,
};

// Enum to describe QMI NAS CDMA 1xEV-DO Hybrid Information
enum eQMINASCDMA1xEVDOHybridInformation:UINT8
{
   eQMINASCDMA1xEVDOHybridInformation_SystemIsNotHybrid                   = 0,
   eQMINASCDMA1xEVDOHybridInformation_SystemIsHybrid                      = 1,
};

// Enum to describe QMI NAS CDMA 1xEV-DO Personality
enum eQMINASCDMA1xEVDOPersonality:UINT8
{
   eQMINASCDMA1xEVDOPersonality_Unknown                                   = 0,
   eQMINASCDMA1xEVDOPersonality_HRPD                                      = 1,
   eQMINASCDMA1xEVDOPersonality_EHRPD                                     = 2,
};

// Enum to describe QMI NAS CDMA Pilot Types
enum eQMINASCDMAPilotTypes:UINT32
{
   eQMINASCDMAPilotTypes_Active                                           = 0,
   eQMINASCDMAPilotTypes_Neighbor                                         = 1,
};

// Enum to describe QMI NAS CS/PS Attach States
enum eQMINASCSPSAttachStates:UINT8
{
   eQMINASCSPSAttachStates_UnknownNotApplicable                           = 0,
   eQMINASCSPSAttachStates_Attached                                       = 1,
   eQMINASCSPSAttachStates_Detached                                       = 2,
};

// Enum to describe QMI NAS Call Barring Status
enum eQMINASCallBarringStatus:UINT32
{
   eQMINASCallBarringStatus_Unknown                                       = 4294967295u,
   eQMINASCallBarringStatus_NormalCallsOnly                               = 0,
   eQMINASCallBarringStatus_EmergencyCallsOnly                            = 1,
   eQMINASCallBarringStatus_NoCalls                                       = 2,
   eQMINASCallBarringStatus_AllCalls                                      = 3,
};

// Enum to describe QMI NAS Cell Broadcast Caps
enum eQMINASCellBroadcastCaps:UINT32
{
   eQMINASCellBroadcastCaps_Unknown                                       = 0,
   eQMINASCellBroadcastCaps_NotSupported                                  = 1,
   eQMINASCellBroadcastCaps_Supported                                     = 2,
};

// Enum to describe QMI NAS Cell Broadcast Caps 2
enum eQMINASCellBroadcastCaps2:UINT32
{
   eQMINASCellBroadcastCaps2_Unknown                                      = 0,
   eQMINASCellBroadcastCaps2_NotSupported                                 = 1,
   eQMINASCellBroadcastCaps2_Supported                                    = 2,
};

// Enum to describe QMI NAS Change Duration
enum eQMINASChangeDuration:UINT8
{
   eQMINASChangeDuration_PowerCycle                                       = 0,
   eQMINASChangeDuration_Permanent                                        = 1,
};

// Enum to describe QMI NAS Concurrent Service
enum eQMINASConcurrentService:UINT8
{
   eQMINASConcurrentService_NotAvailable                                  = 0,
   eQMINASConcurrentService_Available                                     = 1,
};

// Enum to describe QMI NAS Concurrent Service Supported
enum eQMINASConcurrentServiceSupported:UINT8
{
   eQMINASConcurrentServiceSupported_NotSupported                         = 0,
   eQMINASConcurrentServiceSupported_Supported                            = 1,
};

// Enum to describe QMI NAS DDTM Preferences
enum eQMINASDDTMPreferences:UINT8
{
   eQMINASDDTMPreferences_Off                                             = 0,
   eQMINASDDTMPreferences_On                                              = 1,
   eQMINASDDTMPreferences_NoChange                                        = 2,
};

// Enum to describe QMI NAS DTM Support
enum eQMINASDTMSupport:UINT8
{
   eQMINASDTMSupport_NotAvailable                                         = 0,
   eQMINASDTMSupport_Available                                            = 1,
};

// Enum to describe QMI NAS Data Service Capabilities 2
enum eQMINASDataServiceCapabilities2:UINT8
{
   eQMINASDataServiceCapabilities2_GPRS                                   = 1,
   eQMINASDataServiceCapabilities2_EGPRS                                  = 2,
   eQMINASDataServiceCapabilities2_HSDPA                                  = 3,
   eQMINASDataServiceCapabilities2_HSUPA                                  = 4,
   eQMINASDataServiceCapabilities2_WCDMA                                  = 5,
   eQMINASDataServiceCapabilities2_CDMA                                   = 6,
   eQMINASDataServiceCapabilities2_CDMA1xEVDORev0                         = 7,
   eQMINASDataServiceCapabilities2_CDMA1xEVDORevA                         = 8,
   eQMINASDataServiceCapabilities2_GSM                                    = 9,
   eQMINASDataServiceCapabilities2_CDMA1xEVDORevB                         = 10,
   eQMINASDataServiceCapabilities2_LTE                                    = 11,
   eQMINASDataServiceCapabilities2_HSDPAPlus                              = 12,
   eQMINASDataServiceCapabilities2_DCHSDPAPlus                            = 13,
};

// Enum to describe QMI NAS Day Of Week
enum eQMINASDayOfWeek:UINT8
{
   eQMINASDayOfWeek_Monday                                                = 0,
   eQMINASDayOfWeek_Tuesday                                               = 1,
   eQMINASDayOfWeek_Wednesday                                             = 2,
   eQMINASDayOfWeek_Thursday                                              = 3,
   eQMINASDayOfWeek_Friday                                                = 4,
   eQMINASDayOfWeek_Saturday                                              = 5,
   eQMINASDayOfWeek_Sunday                                                = 6,
};

// Enum to describe QMI NAS Daylight Savings Adjustment
enum eQMINASDaylightSavingsAdjustment:UINT8
{
   eQMINASDaylightSavingsAdjustment_NoAdjustment                          = 0,
   eQMINASDaylightSavingsAdjustment_1HourAdjustment                       = 1,
   eQMINASDaylightSavingsAdjustment_2HourAdjustment                       = 2,
};

// Enum to describe QMI NAS Dual Transfer Mode
enum eQMINASDualTransferMode:UINT8
{
   eQMINASDualTransferMode_DTMNotSupported                                = 0,
   eQMINASDualTransferMode_DTMSupported                                   = 1,
};

// Enum to describe QMI NAS E-UTRA Status
enum eQMINASEUTRAStatus:UINT8
{
   eQMINASEUTRAStatus_EUTRACellDetected                                   = 0,
   eQMINASEUTRAStatus_EUTRACellNotDetected                                = 1,
   eQMINASEUTRAStatus_EUTRADetectionUnknown                               = 2,
   eQMINASEUTRAStatus_EUTRADetectionUnsupported                           = 3,
};

// Enum to describe QMI NAS EGPRS Support
enum eQMINASEGPRSSupport:UINT8
{
   eQMINASEGPRSSupport_NotAvailable                                       = 0,
   eQMINASEGPRSSupport_Available                                          = 1,
};

// Enum to describe QMI NAS EV-DO Session Close Reasons
enum eQMINASEVDOSessionCloseReasons:UINT32
{
   eQMINASEVDOSessionCloseReasons_ReacquiredNewNetwork                    = 0,
   eQMINASEVDOSessionCloseReasons_UATIResponseTimeout                     = 1,
   eQMINASEVDOSessionCloseReasons_KeepAliveTimerExpired                   = 2,
   eQMINASEVDOSessionCloseReasons_InternalDeactivation                    = 3,
   eQMINASEVDOSessionCloseReasons_ReceivedSessionCloseFromAN              = 4,
   eQMINASEVDOSessionCloseReasons_ConnectionOpenFailure                   = 5,
   eQMINASEVDOSessionCloseReasons_ConfigurationRequestFailure             = 6,
   eQMINASEVDOSessionCloseReasons_ConfigurationResponseFailure            = 7,
   eQMINASEVDOSessionCloseReasons_ProtocolNegotiationFailure              = 8,
   eQMINASEVDOSessionCloseReasons_ANInitSetupTimerExpired                 = 9,
   eQMINASEVDOSessionCloseReasons_ANInitConnectionClosed                  = 10,
   eQMINASEVDOSessionCloseReasons_ConnectionDenyReceived                  = 11,
   eQMINASEVDOSessionCloseReasons_SilentDeactivation                      = 12,
   eQMINASEVDOSessionCloseReasons_NewESN                                  = 13,
   eQMINASEVDOSessionCloseReasons_ANGUAP                                  = 14,
   eQMINASEVDOSessionCloseReasons_InvalidPersonalityIndex                 = 15,
   eQMINASEVDOSessionCloseReasons_UATINotMaintained                       = 16,
   eQMINASEVDOSessionCloseReasons_NewNAI                                  = 17,
   eQMINASEVDOSessionCloseReasons_EHRPDCredentialsChanged                 = 18,
};

// Enum to describe QMI NAS Forbidden States
enum eQMINASForbiddenStates:UINT8
{
   eQMINASForbiddenStates_Unknown                                         = 0,
   eQMINASForbiddenStates_Forbidden                                       = 1,
   eQMINASForbiddenStates_NotForbidden                                    = 2,
};

// Enum to describe QMI NAS Force CDMA 1xEV-DO SCP
enum eQMINASForceCDMA1xEVDOSCP:UINT8
{
   eQMINASForceCDMA1xEVDOSCP_CDMA1xEVDORev0Only                           = 0,
   eQMINASForceCDMA1xEVDOSCP_CDMA1xEVDORevAWithMFPA                       = 1,
   eQMINASForceCDMA1xEVDOSCP_CDMA1xEVDORevAWithMFPAAndEMPA                = 2,
   eQMINASForceCDMA1xEVDOSCP_CDMA1xEVDORevBWithMMPA                       = 3,
   eQMINASForceCDMA1xEVDOSCP_CDMA1xEVDORevAWithEHRPD                      = 4,
   eQMINASForceCDMA1xEVDOSCP_CDMA1xEVDORevBWithEHRPD                      = 5,
};

// Enum to describe QMI NAS High Speed Call Status
enum eQMINASHighSpeedCallStatus:UINT8
{
   eQMINASHighSpeedCallStatus_HSDPAAndHSUPANotSupported                   = 0,
   eQMINASHighSpeedCallStatus_HSDPASupported                              = 1,
   eQMINASHighSpeedCallStatus_HSUPASupported                              = 2,
   eQMINASHighSpeedCallStatus_HSDPAAndHSUPASupported                      = 3,
   eQMINASHighSpeedCallStatus_HSDPAPlusSupported                          = 4,
   eQMINASHighSpeedCallStatus_HSDPAPlusAndHSUPASupported                  = 5,
   eQMINASHighSpeedCallStatus_DualCellHSDPAPlusSupported                  = 6,
   eQMINASHighSpeedCallStatus_DualCellHSDPAPlusAndHSUPASupported          = 7,
   eQMINASHighSpeedCallStatus_DualCellHSDPAPlusAnd64QAMAndHSUPASupported  = 8,
   eQMINASHighSpeedCallStatus_DualCellHSDPAPlusAnd64QAMSupported          = 9,
};

// Enum to describe QMI NAS In Use States
enum eQMINASInUseStates:UINT8
{
   eQMINASInUseStates_Unknown                                             = 0,
   eQMINASInUseStates_CurrentServing                                      = 1,
   eQMINASInUseStates_Available                                           = 2,
};

// Enum to describe QMI NAS LTE Signal Rates
enum eQMINASLTESignalRates:UINT8
{
   eQMINASLTESignalRates_Default                                          = 0,
   eQMINASLTESignalRates_EverySecond                                      = 1,
   eQMINASLTESignalRates_Every2Seconds                                    = 2,
   eQMINASLTESignalRates_Every3Seconds                                    = 3,
   eQMINASLTESignalRates_Every4Seconds                                    = 4,
   eQMINASLTESignalRates_Every5Seconds                                    = 5,
   eQMINASLTESignalRates_Every6Seconds                                    = 6,
   eQMINASLTESignalRates_Every7Seconds                                    = 7,
   eQMINASLTESignalRates_Every8Seconds                                    = 8,
   eQMINASLTESignalRates_Every9Seconds                                    = 9,
   eQMINASLTESignalRates_Every10Seconds                                   = 10,
};

// Enum to describe QMI NAS LTE Voice Domains
enum eQMINASLTEVoiceDomains:UINT32
{
   eQMINASLTEVoiceDomains_NoVoiceSupport                                  = 0,
   eQMINASLTEVoiceDomains_VoiceSupportedOverIMS                           = 1,
   eQMINASLTEVoiceDomains_VoiceSupportedOver1X                            = 2,
   eQMINASLTEVoiceDomains_VoiceSupportedOver3GPP                          = 3,
};

// Enum to describe QMI NAS Network Description Displays
enum eQMINASNetworkDescriptionDisplays:UINT8
{
   eQMINASNetworkDescriptionDisplays_DoNotDisplay                         = 0,
   eQMINASNetworkDescriptionDisplays_Display                              = 1,
   eQMINASNetworkDescriptionDisplays_Unknown                              = 255,
};

// Enum to describe QMI NAS Network Description Encodings
enum eQMINASNetworkDescriptionEncodings:UINT8
{
   eQMINASNetworkDescriptionEncodings_UnspecifiedOctet                    = 0,
   eQMINASNetworkDescriptionEncodings_ExtendedProtocolMessage             = 1,
   eQMINASNetworkDescriptionEncodings_7BitASCII                           = 2,
   eQMINASNetworkDescriptionEncodings_IA5                                 = 3,
   eQMINASNetworkDescriptionEncodings_UNICODE                             = 4,
   eQMINASNetworkDescriptionEncodings_ShiftJIS                            = 5,
   eQMINASNetworkDescriptionEncodings_Korean                              = 6,
   eQMINASNetworkDescriptionEncodings_LatinHebrew                         = 7,
   eQMINASNetworkDescriptionEncodings_Latin                               = 8,
   eQMINASNetworkDescriptionEncodings_GSM7Bit                             = 9,
   eQMINASNetworkDescriptionEncodings_GSMDCS                              = 10,
};

// Enum to describe QMI NAS Network Selection
enum eQMINASNetworkSelection:INT8
{
   eQMINASNetworkSelection_AutomaticRegistration                          = 0,
   eQMINASNetworkSelection_ManualRegistration                             = 1,
};

// Enum to describe QMI NAS PLMN Name Country Initials
enum eQMINASPLMNNameCountryInitials:UINT8
{
   eQMINASPLMNNameCountryInitials_DoNotAddCountryInitials                 = 0,
   eQMINASPLMNNameCountryInitials_AddCountryInitials                      = 1,
   eQMINASPLMNNameCountryInitials_Unspecified                             = 255,
};

// Enum to describe QMI NAS PLMN Name Encoding Schemes
enum eQMINASPLMNNameEncodingSchemes:UINT8
{
   eQMINASPLMNNameEncodingSchemes_ASCII                                   = 0,
   eQMINASPLMNNameEncodingSchemes_UCS2LE                                  = 1,
};

// Enum to describe QMI NAS PLMN Name Spare Bits
enum eQMINASPLMNNameSpareBits:UINT8
{
   eQMINASPLMNNameSpareBits_Unknown                                       = 0,
   eQMINASPLMNNameSpareBits_Bit8                                          = 1,
   eQMINASPLMNNameSpareBits_Bits78                                        = 2,
   eQMINASPLMNNameSpareBits_Bits68                                        = 3,
   eQMINASPLMNNameSpareBits_Bits58                                        = 4,
   eQMINASPLMNNameSpareBits_Bits48                                        = 5,
   eQMINASPLMNNameSpareBits_Bits38                                        = 6,
   eQMINASPLMNNameSpareBits_Bits28                                        = 7,
};

// Enum to describe QMI NAS PRL Indicator
enum eQMINASPRLIndicator:UINT8
{
   eQMINASPRLIndicator_SystemNotInPRL                                     = 0,
   eQMINASPRLIndicator_SystemIsInPRL                                      = 1,
};

// Enum to describe QMI NAS PRL Preferences
enum eQMINASPRLPreferences:UINT16
{
   eQMINASPRLPreferences_AcquireASideOnly                                 = 1,
   eQMINASPRLPreferences_AcquireBSideOnly                                 = 2,
   eQMINASPRLPreferences_AcquireAny                                       = 16383,
};

// Enum to describe QMI NAS PS Attach Actions
enum eQMINASPSAttachActions:UINT8
{
   eQMINASPSAttachActions_Attach                                          = 1,
   eQMINASPSAttachActions_Detach                                          = 2,
};

// Enum to describe QMI NAS Preferred Data Bath
enum eQMINASPreferredDataBath:UINT8
{
   eQMINASPreferredDataBath_NotPreferred                                  = 0,
   eQMINASPreferredDataBath_Preferred                                     = 1,
};

// Enum to describe QMI NAS Preferred States
enum eQMINASPreferredStates:UINT8
{
   eQMINASPreferredStates_Unknown                                         = 0,
   eQMINASPreferredStates_Preferred                                       = 1,
   eQMINASPreferredStates_NotPreferred                                    = 2,
};

// Enum to describe QMI NAS RTRE Configuration
enum eQMINASRTREConfiguration:UINT8
{
   eQMINASRTREConfiguration_RUIMOnly                                      = 1,
   eQMINASRTREConfiguration_InternalSettingsOnly                          = 2,
   eQMINASRTREConfiguration_UseRUIMIfAvailable                            = 3,
   eQMINASRTREConfiguration_GSMOn1X                                       = 4,
};

// Enum to describe QMI NAS RX Level
enum eQMINASRXLevel:UINT16
{
   eQMINASRXLevel_LessThan110dBm                                          = 0,
   eQMINASRXLevel_110dBmto109dBm                                          = 1,
   eQMINASRXLevel_109dBmto108dBm                                          = 2,
   eQMINASRXLevel_108dBmto107dBm                                          = 3,
   eQMINASRXLevel_107dBmto106dBm                                          = 4,
   eQMINASRXLevel_106dBmto105dBm                                          = 5,
   eQMINASRXLevel_105dBmto104dBm                                          = 6,
   eQMINASRXLevel_104dBmto103dBm                                          = 7,
   eQMINASRXLevel_103dBmto102dBm                                          = 8,
   eQMINASRXLevel_102dBmto101dBm                                          = 9,
   eQMINASRXLevel_101dBmto100dBm                                          = 10,
   eQMINASRXLevel_100dBmto99dBm                                           = 11,
   eQMINASRXLevel_99dBmto98dBm                                            = 12,
   eQMINASRXLevel_98dBmto97dBm                                            = 13,
   eQMINASRXLevel_97dBmto96dBm                                            = 14,
   eQMINASRXLevel_96dBmto95dBm                                            = 15,
   eQMINASRXLevel_95dBmto94dBm                                            = 16,
   eQMINASRXLevel_94dBmto93dBm                                            = 17,
   eQMINASRXLevel_93dBmto92dBm                                            = 18,
   eQMINASRXLevel_92dBmto91dBm                                            = 19,
   eQMINASRXLevel_91dBmto90dBm                                            = 20,
   eQMINASRXLevel_90dBmto89dBm                                            = 21,
   eQMINASRXLevel_89dBmto88dBm                                            = 22,
   eQMINASRXLevel_88dBmto87dBm                                            = 23,
   eQMINASRXLevel_87dBmto86dBm                                            = 24,
   eQMINASRXLevel_86dBmto85dBm                                            = 25,
   eQMINASRXLevel_85dBmto84dBm                                            = 26,
   eQMINASRXLevel_84dBmto83dBm                                            = 27,
   eQMINASRXLevel_83dBmto82dBm                                            = 28,
   eQMINASRXLevel_82dBmto81dBm                                            = 29,
   eQMINASRXLevel_81dBmto80dBm                                            = 30,
   eQMINASRXLevel_80dBmto79dBm                                            = 31,
   eQMINASRXLevel_79dBmto78dBm                                            = 32,
   eQMINASRXLevel_78dBmto77dBm                                            = 33,
   eQMINASRXLevel_77dBmto76dBm                                            = 34,
   eQMINASRXLevel_76dBmto75dBm                                            = 35,
   eQMINASRXLevel_75dBmto74dBm                                            = 36,
   eQMINASRXLevel_74dBmto73dBm                                            = 37,
   eQMINASRXLevel_73dBmto72dBm                                            = 38,
   eQMINASRXLevel_72dBmto71dBm                                            = 39,
   eQMINASRXLevel_71dBmto70dBm                                            = 40,
   eQMINASRXLevel_70dBmto69dBm                                            = 41,
   eQMINASRXLevel_69dBmto68dBm                                            = 42,
   eQMINASRXLevel_68dBmto67dBm                                            = 43,
   eQMINASRXLevel_67dBmto66dBm                                            = 44,
   eQMINASRXLevel_66dBmto65dBm                                            = 45,
   eQMINASRXLevel_65dBmto64dBm                                            = 46,
   eQMINASRXLevel_64dBmto63dBm                                            = 47,
   eQMINASRXLevel_63dBmto62dBm                                            = 48,
   eQMINASRXLevel_62dBmto61dBm                                            = 49,
   eQMINASRXLevel_61dBmto60dBm                                            = 50,
   eQMINASRXLevel_60dBmto59dBm                                            = 51,
   eQMINASRXLevel_59dBmto58dBm                                            = 52,
   eQMINASRXLevel_58dBmto57dBm                                            = 53,
   eQMINASRXLevel_57dBmto56dBm                                            = 54,
   eQMINASRXLevel_56dBmto55dBm                                            = 55,
   eQMINASRXLevel_55dBmto54dBm                                            = 56,
   eQMINASRXLevel_54dBmto53dBm                                            = 57,
   eQMINASRXLevel_53dBmto52dBm                                            = 58,
   eQMINASRXLevel_52dBmto51dBm                                            = 59,
   eQMINASRXLevel_51dBmto50dBm                                            = 60,
   eQMINASRXLevel_50dBmto49dBm                                            = 61,
   eQMINASRXLevel_49dBmto48dBm                                            = 62,
   eQMINASRXLevel_GreaterThan48dBm                                        = 63,
};

// Enum to describe QMI NAS Radio Access Technologies
enum eQMINASRadioAccessTechnologies:UINT8
{
   eQMINASRadioAccessTechnologies_GSM                                     = 4,
   eQMINASRadioAccessTechnologies_UMTS                                    = 5,
   eQMINASRadioAccessTechnologies_LTE                                     = 8,
   eQMINASRadioAccessTechnologies_TDSCDMA                                 = 9,
   eQMINASRadioAccessTechnologies_NoChange                                = 255,
};

// Enum to describe QMI NAS Radio Interfaces
enum eQMINASRadioInterfaces:UINT8
{
   eQMINASRadioInterfaces_NoneNoService                                   = 0,
   eQMINASRadioInterfaces_CDMA20001x                                      = 1,
   eQMINASRadioInterfaces_CDMA2000HRPD                                    = 2,
   eQMINASRadioInterfaces_AMPS                                            = 3,
   eQMINASRadioInterfaces_GSM                                             = 4,
   eQMINASRadioInterfaces_UMTS                                            = 5,
   eQMINASRadioInterfaces_LTE                                             = 8,
   eQMINASRadioInterfaces_TDSCDMA                                         = 9,
};

// Enum to describe QMI NAS Radio System Modes
enum eQMINASRadioSystemModes:UINT32
{
   eQMINASRadioSystemModes_NoService                                      = 0,
   eQMINASRadioSystemModes_Acquiring                                      = 1,
   eQMINASRadioSystemModes_InService                                      = 2,
};

// Enum to describe QMI NAS Register Actions
enum eQMINASRegisterActions:UINT8
{
   eQMINASRegisterActions_Automatic                                       = 1,
   eQMINASRegisterActions_Manual                                          = 2,
};

// Enum to describe QMI NAS Registered Networks
enum eQMINASRegisteredNetworks:UINT8
{
   eQMINASRegisteredNetworks_Unknown                                      = 0,
   eQMINASRegisteredNetworks_3GPP2                                        = 1,
   eQMINASRegisteredNetworks_3GPP                                         = 2,
};

// Enum to describe QMI NAS Registration States
enum eQMINASRegistrationStates:UINT8
{
   eQMINASRegistrationStates_NASNotRegistered                             = 0,
   eQMINASRegistrationStates_NASRegistered                                = 1,
   eQMINASRegistrationStates_NASNotRegisteredSearching                    = 2,
   eQMINASRegistrationStates_NASRegistrationDenied                        = 3,
   eQMINASRegistrationStates_RegistrationStateUnknown                     = 4,
};

// Enum to describe QMI NAS Revision
enum eQMINASRevision:UINT8
{
   eQMINASRevision_JSTD088                                                = 1,
   eQMINASRevision_IS95RevA                                               = 3,
   eQMINASRevision_IS95RevB                                               = 4,
   eQMINASRevision_IS2000                                                 = 6,
   eQMINASRevision_IS2000RelA                                             = 7,
   eQMINASRevision_IS2000RelB                                             = 8,
   eQMINASRevision_IS2000RelC                                             = 9,
   eQMINASRevision_IS2000RelCMI                                           = 10,
   eQMINASRevision_IS2000RelD                                             = 11,
};

// Enum to describe QMI NAS Roam Status
enum eQMINASRoamStatus:UINT8
{
   eQMINASRoamStatus_Off                                                  = 0,
   eQMINASRoamStatus_On                                                   = 1,
   eQMINASRoamStatus_Blinking                                             = 2,
   eQMINASRoamStatus_OutOfNeighborhood                                    = 3,
   eQMINASRoamStatus_OutOfBuilding                                        = 4,
   eQMINASRoamStatus_PreferredSystem                                      = 5,
   eQMINASRoamStatus_AvailableSystem                                      = 6,
   eQMINASRoamStatus_AlliancePartner                                      = 7,
   eQMINASRoamStatus_PremiumPartner                                       = 8,
   eQMINASRoamStatus_FullService                                          = 9,
   eQMINASRoamStatus_PartialService                                       = 10,
   eQMINASRoamStatus_BannerIsOn                                           = 11,
   eQMINASRoamStatus_BannerIsOff                                          = 12,
};

// Enum to describe QMI NAS Roaming Indicators
enum eQMINASRoamingIndicators:UINT8
{
   eQMINASRoamingIndicators_Roaming                                       = 0,
   eQMINASRoamingIndicators_Home                                          = 1,
   eQMINASRoamingIndicators_RoamingPartner                                = 2,
};

// Enum to describe QMI NAS Roaming Preferences
enum eQMINASRoamingPreferences:UINT8
{
   eQMINASRoamingPreferences_Automatic                                    = 0,
   eQMINASRoamingPreferences_HomeOnly                                     = 1,
   eQMINASRoamingPreferences_RoamingOnly                                  = 2,
   eQMINASRoamingPreferences_HomeRoaming                                  = 3,
};

// Enum to describe QMI NAS Roaming Preferences 2
enum eQMINASRoamingPreferences2:UINT16
{
   eQMINASRoamingPreferences2_AcquireWhenRoamingIndicatorOff              = 1,
   eQMINASRoamingPreferences2_AcquireWhenRoamingIndicatorNotOff           = 2,
   eQMINASRoamingPreferences2_AcquireWhenRoamingIndicatorNotFlashing      = 3,
   eQMINASRoamingPreferences2_AcquireAny                                  = 255,
};

// Enum to describe QMI NAS Roaming States
enum eQMINASRoamingStates:UINT8
{
   eQMINASRoamingStates_Unknown                                           = 0,
   eQMINASRoamingStates_Home                                              = 1,
   eQMINASRoamingStates_Roam                                              = 2,
};

// Enum to describe QMI NAS SIM Reject States
enum eQMINASSIMRejectStates:UINT32
{
   eQMINASSIMRejectStates_NotAvailable                                    = 0,
   eQMINASSIMRejectStates_Available                                       = 1,
   eQMINASSIMRejectStates_CSInvalid                                       = 2,
   eQMINASSIMRejectStates_PSInvalid                                       = 3,
   eQMINASSIMRejectStates_CSAndPSInvalid                                  = 4,
};

// Enum to describe QMI NAS SINR Levels
enum eQMINASSINRLevels:UINT8
{
   eQMINASSINRLevels_Negative9dB                                          = 0,
   eQMINASSINRLevels_Negative6dB                                          = 1,
   eQMINASSINRLevels_Negative45dB                                         = 2,
   eQMINASSINRLevels_Negative3dB                                          = 3,
   eQMINASSINRLevels_Negative2dB                                          = 4,
   eQMINASSINRLevels_1dB                                                  = 5,
   eQMINASSINRLevels_3dB                                                  = 6,
   eQMINASSINRLevels_6dB                                                  = 7,
   eQMINASSINRLevels_9dB                                                  = 8,
};

// Enum to describe QMI NAS Service Domain Prefs
enum eQMINASServiceDomainPrefs:UINT32
{
   eQMINASServiceDomainPrefs_CircuitSwitched                              = 0,
   eQMINASServiceDomainPrefs_PacketSwitched                               = 1,
   eQMINASServiceDomainPrefs_CircuitPacketSwitched                        = 2,
   eQMINASServiceDomainPrefs_PacketSwitchedAttach                         = 3,
   eQMINASServiceDomainPrefs_PacketSwitchedDetach                         = 4,
};

// Enum to describe QMI NAS Service Domains
enum eQMINASServiceDomains:UINT8
{
   eQMINASServiceDomains_NoService                                        = 0,
   eQMINASServiceDomains_CircuitSwitched                                  = 1,
};

// Enum to describe QMI NAS Service Option Actions
enum eQMINASServiceOptionActions:UINT8
{
   eQMINASServiceOptionActions_Add                                        = 0,
   eQMINASServiceOptionActions_Replace                                    = 1,
   eQMINASServiceOptionActions_Delete                                     = 2,
   eQMINASServiceOptionActions_NoChange                                   = 3,
};

// Enum to describe QMI NAS Service Status
enum eQMINASServiceStatus:UINT8
{
   eQMINASServiceStatus_NoService                                         = 0,
   eQMINASServiceStatus_LimitedService                                    = 1,
   eQMINASServiceStatus_ServiceAvailable                                  = 2,
   eQMINASServiceStatus_LimitedRegionalService                            = 3,
   eQMINASServiceStatus_PowerSaveOrDeepSleep                              = 4,
};

// Enum to describe QMI NAS Standby Preference
enum eQMINASStandbyPreference:UINT8
{
   eQMINASStandbyPreference_SingleStandby                                 = 1,
   eQMINASStandbyPreference_DualStandbyWithTuneAway                       = 2,
   eQMINASStandbyPreference_DualStandbyWithoutTuneAway                    = 4,
   eQMINASStandbyPreference_AutomaticModeWithTuneAway                     = 5,
   eQMINASStandbyPreference_AutomaticModeWithoutTuneAway                  = 6,
};

// Enum to describe QMI NAS Subscription Type
enum eQMINASSubscriptionType:UINT8
{
   eQMINASSubscriptionType_PrimarySubscription                            = 0,
   eQMINASSubscriptionType_SecondarySubscription                          = 1,
};

// Enum to describe QMI NAS System Forbidden
enum eQMINASSystemForbidden:UINT8
{
   eQMINASSystemForbidden_SystemIsNotForbidden                            = 0,
   eQMINASSystemForbidden_SystemIsForbidden                               = 1,
};

// Enum to describe QMI NAS System Preferences
enum eQMINASSystemPreferences:UINT8
{
   eQMINASSystemPreferences_Automatic                                     = 0,
   eQMINASSystemPreferences_AutomaticA                                    = 1,
   eQMINASSystemPreferences_AutomaticB                                    = 2,
};

// Enum to describe QMI NAS System Service Capabilities
enum eQMINASSystemServiceCapabilities:UINT8
{
   eQMINASSystemServiceCapabilities_NoService                             = 0,
   eQMINASSystemServiceCapabilities_CircuitSwitchedOnly                   = 1,
   eQMINASSystemServiceCapabilities_PacketSwitchedOnly                    = 2,
   eQMINASSystemServiceCapabilities_CircuitSwitchedAndPacketSwitched      = 3,
   eQMINASSystemServiceCapabilities_Camped                                = 4,
};

// Enum to describe QMI NAS Tech Pref Durations
enum eQMINASTechPrefDurations:UINT8
{
   eQMINASTechPrefDurations_Permanent                                     = 0,
   eQMINASTechPrefDurations_PowerCycle                                    = 1,
};

// Enum to describe QMI NAS Tech Prefs
enum eQMINASTechPrefs:UINT8
{
   eQMINASTechPrefs_Automatic                                             = 0,
   eQMINASTechPrefs_3GPP2                                                 = 1,
   eQMINASTechPrefs_3GPP                                                  = 2,
   eQMINASTechPrefs_Invalid                                               = 3,
};

// Enum to describe QMI OMA HFA Done States
enum eQMIOMAHFADoneStates:UINT8
{
   eQMIOMAHFADoneStates_None                                              = 0,
   eQMIOMAHFADoneStates_Succeeded                                         = 1,
   eQMIOMAHFADoneStates_Failed                                            = 2,
};

// Enum to describe QMI OMA Selections
enum eQMIOMASelections:UINT8
{
   eQMIOMASelections_Reject                                               = 0,
   eQMIOMASelections_Accept                                               = 1,
};

// Enum to describe QMI OMA Session Failure Reasons
enum eQMIOMASessionFailureReasons:UINT8
{
   eQMIOMASessionFailureReasons_Unknown                                   = 0,
   eQMIOMASessionFailureReasons_NetworkUnavailable                        = 1,
   eQMIOMASessionFailureReasons_ServerUnavailable                         = 2,
   eQMIOMASessionFailureReasons_AuthenticationFailed                      = 3,
   eQMIOMASessionFailureReasons_MaxRetryExceeded                          = 4,
   eQMIOMASessionFailureReasons_SessionCancelled                          = 5,
};

// Enum to describe QMI OMA Session States
enum eQMIOMASessionStates:UINT8
{
   eQMIOMASessionStates_CompleteInfoUpdated                               = 0,
   eQMIOMASessionStates_CompleteInfoUnavailable                           = 1,
   eQMIOMASessionStates_Failed                                            = 2,
   eQMIOMASessionStates_Retrying                                          = 3,
   eQMIOMASessionStates_Connecting                                        = 4,
   eQMIOMASessionStates_Connected                                         = 5,
   eQMIOMASessionStates_Authenticated                                     = 6,
   eQMIOMASessionStates_MDNDownloaded                                     = 7,
   eQMIOMASessionStates_MSIDDownloaded                                    = 8,
   eQMIOMASessionStates_PRLDownloaded                                     = 9,
   eQMIOMASessionStates_MIPProfileDownloaded                              = 10,
};

// Enum to describe QMI OMA Session Types
enum eQMIOMASessionTypes:UINT8
{
   eQMIOMASessionTypes_ClientInitiatedDeviceConfigure                     = 0,
   eQMIOMASessionTypes_ClientInitiatedPRLUpdate                           = 1,
   eQMIOMASessionTypes_ClientInitiatedHandsFreeActivation                 = 2,
   eQMIOMASessionTypes_DeviceInitiatedHandsFreeActivation                 = 3,
   eQMIOMASessionTypes_NetworkInitiatedPRLUpdate                          = 4,
   eQMIOMASessionTypes_NetworkInitiatedDeviceConfigure                    = 5,
};

// Enum to describe QMI PBM AAS Operations
enum eQMIPBMAASOperations:UINT8
{
   eQMIPBMAASOperations_Add                                               = 0,
   eQMIPBMAASOperations_Modify                                            = 1,
   eQMIPBMAASOperations_Delete                                            = 2,
};

// Enum to describe QMI PBM Emergency Categories
enum eQMIPBMEmergencyCategories
{
   eQMIPBMEmergencyCategories_Police                                      = 1,
   eQMIPBMEmergencyCategories_Ambulance                                   = 2,
   eQMIPBMEmergencyCategories_FireBrigade                                 = 4,
   eQMIPBMEmergencyCategories_MarineGuard                                 = 8,
   eQMIPBMEmergencyCategories_MountainRescue                              = 16,
   eQMIPBMEmergencyCategories_ManualECall                                 = 32,
   eQMIPBMEmergencyCategories_AutomaticECall                              = 64,
   eQMIPBMEmergencyCategories_Spare                                       = 128,
};

// Enum to describe QMI PBM Number Plans
enum eQMIPBMNumberPlans:UINT8
{
   eQMIPBMNumberPlans_Unknown                                             = 0,
   eQMIPBMNumberPlans_ISDN                                                = 1,
   eQMIPBMNumberPlans_Data                                                = 2,
   eQMIPBMNumberPlans_Telex                                               = 3,
   eQMIPBMNumberPlans_National                                            = 4,
   eQMIPBMNumberPlans_Private                                             = 5,
};

// Enum to describe QMI PBM Number Types
enum eQMIPBMNumberTypes:UINT8
{
   eQMIPBMNumberTypes_Unknown                                             = 0,
   eQMIPBMNumberTypes_International                                       = 1,
   eQMIPBMNumberTypes_National                                            = 2,
   eQMIPBMNumberTypes_NetworkSpecific                                     = 3,
   eQMIPBMNumberTypes_DedicatedAccess                                     = 4,
};

// Enum to describe QMI PBM Operations
enum eQMIPBMOperations:UINT8
{
   eQMIPBMOperations_Add                                                  = 1,
   eQMIPBMOperations_Modify                                               = 2,
   eQMIPBMOperations_Delete                                               = 3,
};

// Enum to describe QMI PBM Phonebook Types
enum eQMIPBMPhonebookTypes:UINT16
{
   eQMIPBMPhonebookTypes_AbbreviatedDialingNumber                         = 1,
   eQMIPBMPhonebookTypes_FixedDialingNumber                               = 2,
   eQMIPBMPhonebookTypes_MobileSubscriberIntegratedServicesDigitalNetwork = 4,
   eQMIPBMPhonebookTypes_MailBoxDialingNumber                             = 8,
   eQMIPBMPhonebookTypes_ServiceDialingNumber                             = 16,
   eQMIPBMPhonebookTypes_BarredDialingNumber                              = 32,
   eQMIPBMPhonebookTypes_LastNumberDialed                                 = 64,
   eQMIPBMPhonebookTypes_MailBoxNumber                                    = 128,
};

// Enum to describe QMI PBM Protection Methods
enum eQMIPBMProtectionMethods:UINT32
{
   eQMIPBMProtectionMethods_AlwaysAllowed                                 = 0,
   eQMIPBMProtectionMethods_NeverAllowed                                  = 1,
   eQMIPBMProtectionMethods_AllowedOnAllPINsVerified                      = 2,
   eQMIPBMProtectionMethods_AllowedOnAnyPINVerified                       = 3,
   eQMIPBMProtectionMethods_AllowedOnOnePINVerified                       = 4,
};

// Enum to describe QMI PBM Refresh Status
enum eQMIPBMRefreshStatus:UINT8
{
   eQMIPBMRefreshStatus_RefreshStart                                      = 1,
   eQMIPBMRefreshStatus_RefreshEnd                                        = 2,
};

// Enum to describe QMI PBM Session Types
enum eQMIPBMSessionTypes:UINT8
{
   eQMIPBMSessionTypes_GWPrimary                                          = 0,
   eQMIPBMSessionTypes_1xPrimary                                          = 1,
   eQMIPBMSessionTypes_GWSecondary                                        = 2,
   eQMIPBMSessionTypes_1xSecondary                                        = 3,
   eQMIPBMSessionTypes_NonProvisioningOnSlot1                             = 4,
   eQMIPBMSessionTypes_NonProvisioningOnSlot2                             = 5,
   eQMIPBMSessionTypes_GlobalPhonebookOnSlot1                             = 6,
   eQMIPBMSessionTypes_GlobalPhonebookOnSlot2                             = 7,
};

// Enum to describe QMI PBM States
enum eQMIPBMStates:UINT8
{
   eQMIPBMStates_Ready                                                    = 0,
   eQMIPBMStates_NotReady                                                 = 1,
   eQMIPBMStates_NotAvailable                                             = 2,
   eQMIPBMStates_PINRestriction                                           = 3,
   eQMIPBMStates_PUKRestriction                                           = 4,
   eQMIPBMStates_Invalidated                                              = 5,
   eQMIPBMStates_Sync                                                     = 6,
};

// Enum to describe QMI PBM Subscription Types
enum eQMIPBMSubscriptionTypes:UINT8
{
   eQMIPBMSubscriptionTypes_Primary                                       = 0,
   eQMIPBMSubscriptionTypes_Secondary                                     = 1,
};

// Enum to describe QMI PDP Types
enum eQMIPDPTypes:UINT8
{
   eQMIPDPTypes_PDPIPv4                                                   = 0,
   eQMIPDPTypes_PDPPPP                                                    = 1,
   eQMIPDPTypes_PDPIPv6                                                   = 2,
   eQMIPDPTypes_PDPIPv4OrIPv6                                             = 3,
};

// Enum to describe QMI PDS Altitude Source
enum eQMIPDSAltitudeSource:UINT8
{
   eQMIPDSAltitudeSource_Unknown                                          = 0,
   eQMIPDSAltitudeSource_GPS                                              = 1,
   eQMIPDSAltitudeSource_CellID                                           = 2,
   eQMIPDSAltitudeSource_EnhancedCellID                                   = 3,
   eQMIPDSAltitudeSource_WiFi                                             = 4,
   eQMIPDSAltitudeSource_Terrestrial                                      = 5,
   eQMIPDSAltitudeSource_TerrestrialHybrid                                = 6,
   eQMIPDSAltitudeSource_AltitudeDatabase                                 = 7,
   eQMIPDSAltitudeSource_BarometricAltimeter                              = 8,
   eQMIPDSAltitudeSource_Other                                            = 9,
};

// Enum to describe QMI PDS Blanking Enable
enum eQMIPDSBlankingEnable:UINT8
{
   eQMIPDSBlankingEnable_DisableBlanking                                  = 0,
   eQMIPDSBlankingEnable_EnableBlankingUnconditionally                    = 1,
   eQMIPDSBlankingEnable_EnableBlankingConditionally                      = 2,
   eQMIPDSBlankingEnable_SimulateIMDJamming                               = 3,
};

// Enum to describe QMI PDS Calendar Days
enum eQMIPDSCalendarDays:UINT8
{
   eQMIPDSCalendarDays_Sunday                                             = 0,
   eQMIPDSCalendarDays_Monday                                             = 1,
   eQMIPDSCalendarDays_Tuesday                                            = 2,
   eQMIPDSCalendarDays_Wednesday                                          = 3,
   eQMIPDSCalendarDays_Thursday                                           = 4,
   eQMIPDSCalendarDays_Friday                                             = 5,
   eQMIPDSCalendarDays_Saturday                                           = 6,
};

// Enum to describe QMI PDS Calendar Months
enum eQMIPDSCalendarMonths:UINT8
{
   eQMIPDSCalendarMonths_January                                          = 0,
   eQMIPDSCalendarMonths_February                                         = 1,
   eQMIPDSCalendarMonths_March                                            = 2,
   eQMIPDSCalendarMonths_April                                            = 3,
   eQMIPDSCalendarMonths_May                                              = 4,
   eQMIPDSCalendarMonths_June                                             = 5,
   eQMIPDSCalendarMonths_July                                             = 6,
   eQMIPDSCalendarMonths_August                                           = 7,
   eQMIPDSCalendarMonths_September                                        = 8,
   eQMIPDSCalendarMonths_October                                          = 9,
   eQMIPDSCalendarMonths_November                                         = 10,
   eQMIPDSCalendarMonths_December                                         = 11,
};

// Enum to describe QMI PDS Comm Event Protocols
enum eQMIPDSCommEventProtocols:UINT8
{
   eQMIPDSCommEventProtocols_UMTSUserPlaneSUPL                            = 0,
   eQMIPDSCommEventProtocols_1X                                           = 1,
   eQMIPDSCommEventProtocols_UMTSControlPlaneWCDMA                        = 2,
   eQMIPDSCommEventProtocols_UMTSControlPlaneGSM                          = 3,
   eQMIPDSCommEventProtocols_V1V2                                         = 4,
   eQMIPDSCommEventProtocols_KDDI                                         = 5,
   eQMIPDSCommEventProtocols_XTRADataDownload                             = 6,
   eQMIPDSCommEventProtocols_SNTPTimeDownload                             = 7,
   eQMIPDSCommEventProtocols_1XControlPlane                               = 8,
   eQMIPDSCommEventProtocols_Unknown                                      = 255,
};

// Enum to describe QMI PDS Comm Event Types
enum eQMIPDSCommEventTypes:UINT8
{
   eQMIPDSCommEventTypes_Begin                                            = 0,
   eQMIPDSCommEventTypes_Connected                                        = 1,
   eQMIPDSCommEventTypes_Failure                                          = 2,
   eQMIPDSCommEventTypes_Done                                             = 3,
   eQMIPDSCommEventTypes_OtherFailure                                     = 4,
};

// Enum to describe QMI PDS Config
enum eQMIPDSConfig:UINT8
{
   eQMIPDSConfig_PersistentDisabled                                       = 0,
   eQMIPDSConfig_PersistentEnabled                                        = 1,
   eQMIPDSConfig_NotPersistentDisabled                                    = 240,
   eQMIPDSConfig_NotPersistentEnabled                                     = 241,
};

// Enum to describe QMI PDS Cradle Mount State
enum eQMIPDSCradleMountState:UINT8
{
   eQMIPDSCradleMountState_NotMounted                                     = 0,
   eQMIPDSCradleMountState_Mounted                                        = 1,
   eQMIPDSCradleMountState_Unknown                                        = 2,
};

// Enum to describe QMI PDS EFS File Operations
enum eQMIPDSEFSFileOperations:UINT8
{
   eQMIPDSEFSFileOperations_Write                                         = 0,
   eQMIPDSEFSFileOperations_Delete                                        = 1,
};

// Enum to describe QMI PDS Encryption Algorithm
enum eQMIPDSEncryptionAlgorithm:UINT8
{
   eQMIPDSEncryptionAlgorithm_PDSMPDHashAlgorithmSHA1                     = 0,
   eQMIPDSEncryptionAlgorithm_PDSMPDHashAlgorithmMax                      = 1,
   eQMIPDSEncryptionAlgorithm_PDSMPDHashAlgorithmNone                     = 255,
};

// Enum to describe QMI PDS External Power State
enum eQMIPDSExternalPowerState:UINT8
{
   eQMIPDSExternalPowerState_NotConnected                                 = 0,
   eQMIPDSExternalPowerState_Connected                                    = 1,
   eQMIPDSExternalPowerState_Unknown                                      = 2,
};

// Enum to describe QMI PDS Force Receiver Off
enum eQMIPDSForceReceiverOff:UINT8
{
   eQMIPDSForceReceiverOff_Disable                                        = 0,
   eQMIPDSForceReceiverOff_Enable                                         = 1,
};

// Enum to describe QMI PDS IMD Jamming Bands
enum eQMIPDSIMDJammingBands:UINT32
{
   eQMIPDSIMDJammingBands_GPS                                             = 0,
   eQMIPDSIMDJammingBands_GLONASS                                         = 1,
};

// Enum to describe QMI PDS IMD Jamming States
enum eQMIPDSIMDJammingStates:UINT8
{
   eQMIPDSIMDJammingStates_Terminate                                      = 0,
   eQMIPDSIMDJammingStates_Initiate                                       = 1,
};

// Enum to describe QMI PDS Injected Position Sources
enum eQMIPDSInjectedPositionSources:UINT8
{
   eQMIPDSInjectedPositionSources_Unknown                                 = 0,
   eQMIPDSInjectedPositionSources_GPS                                     = 1,
   eQMIPDSInjectedPositionSources_CellID                                  = 2,
   eQMIPDSInjectedPositionSources_EnhancedCellID                          = 3,
   eQMIPDSInjectedPositionSources_WiFi                                    = 4,
   eQMIPDSInjectedPositionSources_Terrestial                              = 5,
   eQMIPDSInjectedPositionSources_TerrestialHybrid                        = 6,
   eQMIPDSInjectedPositionSources_Other                                   = 7,
};

// Enum to describe QMI PDS Mediums
enum eQMIPDSMediums:UINT8
{
   eQMIPDSMediums_WWAN                                                    = 0,
};

// Enum to describe QMI PDS Method States
enum eQMIPDSMethodStates:UINT8
{
   eQMIPDSMethodStates_Disabled                                           = 0,
   eQMIPDSMethodStates_Enabled                                            = 1,
   eQMIPDSMethodStates_NotSupported                                       = 255,
};

// Enum to describe QMI PDS Motion Modes
enum eQMIPDSMotionModes:UINT8
{
   eQMIPDSMotionModes_Unknown                                             = 0,
   eQMIPDSMotionModes_Pedestrian                                          = 1,
   eQMIPDSMotionModes_Vehicle                                             = 2,
};

// Enum to describe QMI PDS Motion States
enum eQMIPDSMotionStates:UINT8
{
   eQMIPDSMotionStates_Unknown                                            = 0,
   eQMIPDSMotionStates_Stationary                                         = 1,
   eQMIPDSMotionStates_InMotion                                           = 2,
};

// Enum to describe QMI PDS Motion Submodes
enum eQMIPDSMotionSubmodes:UINT8
{
   eQMIPDSMotionSubmodes_Unknown                                          = 0,
   eQMIPDSMotionSubmodes_Walking                                          = 1,
   eQMIPDSMotionSubmodes_Running                                          = 2,
};

// Enum to describe QMI PDS NMEA Reporting Options
enum eQMIPDSNMEAReportingOptions:UINT8
{
   eQMIPDSNMEAReportingOptions_1HzFromTimeRequestedUntilFinalPositionDetermination = 0,
   eQMIPDSNMEAReportingOptions_FinalPositionDeterminationOnly             = 1,
};

// Enum to describe QMI PDS NMEA Sentence Operating Modes
enum eQMIPDSNMEASentenceOperatingModes:UINT8
{
   eQMIPDSNMEASentenceOperatingModes_Standalone                           = 0,
   eQMIPDSNMEASentenceOperatingModes_MSBased                              = 1,
   eQMIPDSNMEASentenceOperatingModes_MSAssisted                           = 2,
   eQMIPDSNMEASentenceOperatingModes_Unknown                              = 255,
};

// Enum to describe QMI PDS Network Mode
enum eQMIPDSNetworkMode:UINT8
{
   eQMIPDSNetworkMode_UMTS                                                = 0,
   eQMIPDSNetworkMode_CDMA                                                = 1,
};

// Enum to describe QMI PDS ODP States
enum eQMIPDSODPStates:UINT8
{
   eQMIPDSODPStates_Disables                                              = 0,
   eQMIPDSODPStates_EnabledLowPowerMode                                   = 1,
   eQMIPDSODPStates_EnabledReadyMode                                      = 2,
};

// Enum to describe QMI PDS Operation Types
enum eQMIPDSOperationTypes:UINT8
{
   eQMIPDSOperationTypes_Standalone                                       = 0,
   eQMIPDSOperationTypes_MSBased                                          = 1,
   eQMIPDSOperationTypes_MSAssisted                                       = 2,
};

// Enum to describe QMI PDS Output Devices
enum eQMIPDSOutputDevices:UINT8
{
   eQMIPDSOutputDevices_NoneDisabled                                      = 0,
   eQMIPDSOutputDevices_USB                                               = 1,
   eQMIPDSOutputDevices_UART1                                             = 2,
   eQMIPDSOutputDevices_UART2                                             = 3,
   eQMIPDSOutputDevices_SharedMemory                                      = 4,
};

// Enum to describe QMI PDS Privacy Modes
enum eQMIPDSPrivacyModes:UINT8
{
   eQMIPDSPrivacyModes_NoNotifyVerify                                     = 0,
   eQMIPDSPrivacyModes_Notify                                             = 1,
   eQMIPDSPrivacyModes_NotifyVerifyAllowNoResponse                        = 2,
   eQMIPDSPrivacyModes_NotifyVerifyRequireResponse                        = 3,
   eQMIPDSPrivacyModes_PrivacyOverride                                    = 4,
};

// Enum to describe QMI PDS Reliability Indicator
enum eQMIPDSReliabilityIndicator:UINT8
{
   eQMIPDSReliabilityIndicator_NotSet                                     = 0,
   eQMIPDSReliabilityIndicator_VeryLow                                    = 1,
   eQMIPDSReliabilityIndicator_Low                                        = 2,
   eQMIPDSReliabilityIndicator_Medium                                     = 3,
   eQMIPDSReliabilityIndicator_High                                       = 4,
};

// Enum to describe QMI PDS Report Security Challenge
enum eQMIPDSReportSecurityChallenge:UINT8
{
   eQMIPDSReportSecurityChallenge_Disable                                 = 0,
   eQMIPDSReportSecurityChallenge_Enable                                  = 1,
};

// Enum to describe QMI PDS Reporting State
enum eQMIPDSReportingState:UINT8
{
   eQMIPDSReportingState_StopReporting                                    = 0,
   eQMIPDSReportingState_StartReporting                                   = 1,
};

// Enum to describe QMI PDS Reset Reasons
enum eQMIPDSResetReasons:UINT32
{
   eQMIPDSResetReasons_PositionEngine                                     = 0,
   eQMIPDSResetReasons_GNSSBackgroundSCan                                 = 1,
   eQMIPDSResetReasons_InjectClockInconsistency                           = 2,
   eQMIPDSResetReasons_GPSSubframeMisalignment                            = 3,
   eQMIPDSResetReasons_DecodedTimeInconsistency                           = 4,
   eQMIPDSResetReasons_CodeConsistencyError                               = 5,
   eQMIPDSResetReasons_SoftResetFromINTMSError                            = 6,
   eQMIPDSResetReasons_SoftResetFromRFFailure                             = 7,
};

// Enum to describe QMI PDS Reset States
enum eQMIPDSResetStates:UINT32
{
   eQMIPDSResetStates_InProgress                                          = 0,
   eQMIPDSResetStates_Completed                                           = 1,
   eQMIPDSResetStates_UnableToInitialize                                  = 2,
   eQMIPDSResetStates_E911CallInProgress                                  = 3,
};

// Enum to describe QMI PDS SBAS States
enum eQMIPDSSBASStates:UINT8
{
   eQMIPDSSBASStates_Disabled                                             = 0,
   eQMIPDSSBASStates_Enabled                                              = 1,
   eQMIPDSSBASStates_Unknown                                              = 255,
};

// Enum to describe QMI PDS SPI State
enum eQMIPDSSPIState:UINT8
{
   eQMIPDSSPIState_DeviceIsNonstationary                                  = 0,
   eQMIPDSSPIState_DeviceIsStationary                                     = 1,
};

// Enum to describe QMI PDS SUPL Data Coding Schemes
enum eQMIPDSSUPLDataCodingSchemes:UINT8
{
   eQMIPDSSUPLDataCodingSchemes_UTF8                                      = 0,
   eQMIPDSSUPLDataCodingSchemes_UCS2                                      = 1,
   eQMIPDSSUPLDataCodingSchemes_GSM                                       = 2,
   eQMIPDSSUPLDataCodingSchemes_Unknown                                   = 255,
};

// Enum to describe QMI PDS SUPL ID/Name Data Coding Schemes
enum eQMIPDSSUPLIDNameDataCodingSchemes:UINT8
{
   eQMIPDSSUPLIDNameDataCodingSchemes_LogicalName                         = 0,
   eQMIPDSSUPLIDNameDataCodingSchemes_EmailAddress                        = 1,
   eQMIPDSSUPLIDNameDataCodingSchemes_MSISDN                              = 2,
   eQMIPDSSUPLIDNameDataCodingSchemes_URL                                 = 3,
   eQMIPDSSUPLIDNameDataCodingSchemes_SIPURL                              = 4,
   eQMIPDSSUPLIDNameDataCodingSchemes_MIN                                 = 5,
   eQMIPDSSUPLIDNameDataCodingSchemes_MDN                                 = 6,
   eQMIPDSSUPLIDNameDataCodingSchemes_Unknown                             = 255,
};

// Enum to describe QMI PDS SUPL Modes
enum eQMIPDSSUPLModes:UINT8
{
   eQMIPDSSUPLModes_MSAssisted                                            = 0,
   eQMIPDSSUPLModes_MSBased                                               = 1,
   eQMIPDSSUPLModes_MSAssistedPreferred                                   = 2,
   eQMIPDSSUPLModes_MSBasedPreferred                                      = 3,
   eQMIPDSSUPLModes_Standalone                                            = 4,
   eQMIPDSSUPLModes_AFLT                                                  = 5,
   eQMIPDSSUPLModes_ECID                                                  = 6,
   eQMIPDSSUPLModes_EOTD                                                  = 7,
   eQMIPDSSUPLModes_OTDOA                                                 = 8,
   eQMIPDSSUPLModes_NoPosition                                            = 9,
};

// Enum to describe QMI PDS SV Almanac Status
enum eQMIPDSSVAlmanacStatus:UINT8
{
   eQMIPDSSVAlmanacStatus_Unavailable                                     = 0,
   eQMIPDSSVAlmanacStatus_Available                                       = 1,
};

// Enum to describe QMI PDS SV Ephemeris Status
enum eQMIPDSSVEphemerisStatus:UINT8
{
   eQMIPDSSVEphemerisStatus_Unavailable                                   = 0,
   eQMIPDSSVEphemerisStatus_Available                                     = 1,
};

// Enum to describe QMI PDS SV Health Status
enum eQMIPDSSVHealthStatus:UINT8
{
   eQMIPDSSVHealthStatus_Unhealthy                                        = 0,
   eQMIPDSSVHealthStatus_Healthy                                          = 1,
};

// Enum to describe QMI PDS SV Processing Status
enum eQMIPDSSVProcessingStatus:UINT8
{
   eQMIPDSSVProcessingStatus_Idle                                         = 1,
   eQMIPDSSVProcessingStatus_Search                                       = 2,
   eQMIPDSSVProcessingStatus_SearchVerify                                 = 3,
   eQMIPDSSVProcessingStatus_BitEdge                                      = 4,
   eQMIPDSSVProcessingStatus_Track                                        = 5,
};

// Enum to describe QMI PDS SV Systems
enum eQMIPDSSVSystems:UINT8
{
   eQMIPDSSVSystems_GPS                                                   = 1,
   eQMIPDSSVSystems_Galileo                                               = 2,
   eQMIPDSSVSystems_SBAS                                                  = 3,
   eQMIPDSSVSystems_Compass                                               = 4,
   eQMIPDSSVSystems_Glonass                                               = 5,
};

// Enum to describe QMI PDS Server Options
enum eQMIPDSServerOptions:UINT8
{
   eQMIPDSServerOptions_Default                                           = 0,
};

// Enum to describe QMI PDS Session Control Types
enum eQMIPDSSessionControlTypes:UINT8
{
   eQMIPDSSessionControlTypes_Automatic                                   = 0,
};

// Enum to describe QMI PDS Session Status
enum eQMIPDSSessionStatus:UINT8
{
   eQMIPDSSessionStatus_Success                                           = 0,
   eQMIPDSSessionStatus_InProgress                                        = 1,
   eQMIPDSSessionStatus_GeneralFailure                                    = 2,
   eQMIPDSSessionStatus_Timeout                                           = 3,
   eQMIPDSSessionStatus_UserEnded                                         = 4,
   eQMIPDSSessionStatus_BadParameter                                      = 5,
   eQMIPDSSessionStatus_PhoneOffline                                      = 6,
   eQMIPDSSessionStatus_EngineLocked                                      = 7,
   eQMIPDSSessionStatus_E911SessionInProgress                             = 8,
};

// Enum to describe QMI PDS Session Types
enum eQMIPDSSessionTypes:UINT8
{
   eQMIPDSSessionTypes_New                                                = 0,
};

// Enum to describe QMI PDS Source Linkage
enum eQMIPDSSourceLinkage:UINT8
{
   eQMIPDSSourceLinkage_NotSpecified                                      = 0,
   eQMIPDSSourceLinkage_FullyInterDependent                               = 1,
   eQMIPDSSourceLinkage_AltitudeDependsOnLatitudeAndLongitude             = 2,
   eQMIPDSSourceLinkage_FullyIndependent                                  = 3,
};

// Enum to describe QMI PDS Stop Reason
enum eQMIPDSStopReason:UINT8
{
   eQMIPDSStopReason_UserTerminated                                       = 0,
   eQMIPDSStopReason_Other                                                = 1,
};

// Enum to describe QMI PDS Streaming Status
enum eQMIPDSStreamingStatus:UINT8
{
   eQMIPDSStreamingStatus_NotReadyForStreaming                            = 0,
   eQMIPDSStreamingStatus_ReadyForStreaming                               = 1,
};

// Enum to describe QMI PDS Suspend Reason
enum eQMIPDSSuspendReason:UINT8
{
   eQMIPDSSuspendReason_OoS                                               = 0,
   eQMIPDSSuspendReason_LPM                                               = 1,
   eQMIPDSSuspendReason_Other                                             = 2,
};

// Enum to describe QMI PDS Time Bases
enum eQMIPDSTimeBases:UINT8
{
   eQMIPDSTimeBases_GPS                                                   = 0,
   eQMIPDSTimeBases_UTC                                                   = 1,
};

// Enum to describe QMI PDS Time Source
enum eQMIPDSTimeSource:UINT8
{
   eQMIPDSTimeSource_Invalid                                              = 0,
   eQMIPDSTimeSource_NetworkTimeTransfer                                  = 1,
   eQMIPDSTimeSource_NetworkTimeTagging                                   = 2,
   eQMIPDSTimeSource_ExternalInput                                        = 3,
   eQMIPDSTimeSource_TOWDecode                                            = 4,
   eQMIPDSTimeSource_TOWConfirmed                                         = 5,
   eQMIPDSTimeSource_TOWAndWeekConfirmed                                  = 6,
   eQMIPDSTimeSource_TimeAlignment                                        = 7,
   eQMIPDSTimeSource_NavSolution                                          = 8,
   eQMIPDSTimeSource_SolveForTime                                         = 9,
};

// Enum to describe QMI PDS Time Type
enum eQMIPDSTimeType:UINT8
{
   eQMIPDSTimeType_UTCTime                                                = 0,
   eQMIPDSTimeType_GPSTime                                                = 1,
   eQMIPDSTimeType_Age                                                    = 2,
};

// Enum to describe QMI PDS Tracking Session States
enum eQMIPDSTrackingSessionStates:UINT8
{
   eQMIPDSTrackingSessionStates_Unknown                                   = 0,
   eQMIPDSTrackingSessionStates_Inactive                                  = 1,
   eQMIPDSTrackingSessionStates_Active                                    = 2,
};

// Enum to describe QMI PDS UMTS CP Data Coding Schemes
enum eQMIPDSUMTSCPDataCodingSchemes:UINT8
{
   eQMIPDSUMTSCPDataCodingSchemes_German                                  = 0,
   eQMIPDSUMTSCPDataCodingSchemes_English                                 = 1,
   eQMIPDSUMTSCPDataCodingSchemes_Italian                                 = 2,
   eQMIPDSUMTSCPDataCodingSchemes_French                                  = 3,
   eQMIPDSUMTSCPDataCodingSchemes_Spanish                                 = 4,
   eQMIPDSUMTSCPDataCodingSchemes_Dutch                                   = 5,
   eQMIPDSUMTSCPDataCodingSchemes_Swedish                                 = 6,
   eQMIPDSUMTSCPDataCodingSchemes_Danish                                  = 7,
   eQMIPDSUMTSCPDataCodingSchemes_Portuguese                              = 8,
   eQMIPDSUMTSCPDataCodingSchemes_Finnish                                 = 9,
   eQMIPDSUMTSCPDataCodingSchemes_Norwegian                               = 10,
   eQMIPDSUMTSCPDataCodingSchemes_Greek                                   = 11,
   eQMIPDSUMTSCPDataCodingSchemes_Turkish                                 = 12,
   eQMIPDSUMTSCPDataCodingSchemes_Hungarian                               = 13,
   eQMIPDSUMTSCPDataCodingSchemes_Polish                                  = 14,
   eQMIPDSUMTSCPDataCodingSchemes_Unknown                                 = 255,
};

// Enum to describe QMI PDS UMTS CP Location Types
enum eQMIPDSUMTSCPLocationTypes:UINT8
{
   eQMIPDSUMTSCPLocationTypes_Current                                     = 0,
   eQMIPDSUMTSCPLocationTypes_CurrentOrLastKnown                          = 1,
   eQMIPDSUMTSCPLocationTypes_Initial                                     = 2,
};

// Enum to describe QMI PDS Uncertainty Coverage
enum eQMIPDSUncertaintyCoverage:UINT8
{
   eQMIPDSUncertaintyCoverage_NotSpecified                                = 0,
   eQMIPDSUncertaintyCoverage_PointUncertainty                            = 1,
   eQMIPDSUncertaintyCoverage_FullyUncertainty                            = 2,
};

// Enum to describe QMI PDS VX Data Coding Schemes
enum eQMIPDSVXDataCodingSchemes:UINT8
{
   eQMIPDSVXDataCodingSchemes_Octet                                       = 0,
   eQMIPDSVXDataCodingSchemes_EXNProtocolMessage                          = 1,
   eQMIPDSVXDataCodingSchemes_ASCII                                       = 2,
   eQMIPDSVXDataCodingSchemes_IA5                                         = 3,
   eQMIPDSVXDataCodingSchemes_Unicode                                     = 4,
   eQMIPDSVXDataCodingSchemes_ShiftJIS                                    = 5,
   eQMIPDSVXDataCodingSchemes_Korean                                      = 6,
   eQMIPDSVXDataCodingSchemes_LatinHebrew                                 = 7,
   eQMIPDSVXDataCodingSchemes_Latin                                       = 8,
   eQMIPDSVXDataCodingSchemes_GSM                                         = 9,
};

// Enum to describe QMI PDS VX Modes
enum eQMIPDSVXModes:UINT8
{
   eQMIPDSVXModes_MSAssisted                                              = 0,
   eQMIPDSVXModes_MSBased                                                 = 1,
   eQMIPDSVXModes_MSAssistedPreferred                                     = 2,
   eQMIPDSVXModes_MSBasedPreferred                                        = 3,
};

// Enum to describe QMI PDS WWAN Network Preferences
enum eQMIPDSWWANNetworkPreferences:UINT8
{
   eQMIPDSWWANNetworkPreferences_AnyAvailable                             = 0,
   eQMIPDSWWANNetworkPreferences_HomeOnly                                 = 1,
   eQMIPDSWWANNetworkPreferences_RoamOnly                                 = 2,
};

// Enum to describe QMI PDS Wi-Fi Request Types
enum eQMIPDSWiFiRequestTypes:UINT8
{
   eQMIPDSWiFiRequestTypes_StartPeriodicFixesHighFrequency                = 0,
   eQMIPDSWiFiRequestTypes_StartPeriodicFixesKeepWarm                     = 1,
   eQMIPDSWiFiRequestTypes_StopPeriodicFixes                              = 2,
   eQMIPDSWiFiRequestTypes_Suspend                                        = 4,
};

// Enum to describe QMI Profile Types
enum eQMIProfileTypes:UINT8
{
   eQMIProfileTypes_3GPP                                                  = 0,
   eQMIProfileTypes_3GPP2                                                 = 1,
};

// Enum to describe QMI QoS Delivery Orders
enum eQMIQoSDeliveryOrders:UINT8
{
   eQMIQoSDeliveryOrders_Subscribe                                        = 0,
   eQMIQoSDeliveryOrders_DeliveryOrderOn                                  = 1,
   eQMIQoSDeliveryOrders_DeliveryOrderOff                                 = 2,
};

// Enum to describe QMI Results
enum eQMIResults:UINT16
{
   eQMIResults_Success                                                    = 0,
   eQMIResults_Failure                                                    = 1,
};

// Enum to describe QMI SAR RF States
enum eQMISARRFStates
{
   eQMISARRFStates_DefaultState                                           = 0,
   eQMISARRFStates_State1                                                 = 1,
   eQMISARRFStates_State2                                                 = 2,
   eQMISARRFStates_State3                                                 = 3,
   eQMISARRFStates_State4                                                 = 4,
   eQMISARRFStates_State5                                                 = 5,
   eQMISARRFStates_State6                                                 = 6,
   eQMISARRFStates_State7                                                 = 7,
   eQMISARRFStates_State8                                                 = 8,
};

// Enum to describe QMI SDU Error Ratios
enum eQMISDUErrorRatios:UINT8
{
   eQMISDUErrorRatios_Subscribe                                           = 0,
   eQMISDUErrorRatios_1X102                                               = 1,
   eQMISDUErrorRatios_7X103                                               = 2,
   eQMISDUErrorRatios_1X103                                               = 3,
   eQMISDUErrorRatios_1X104                                               = 4,
   eQMISDUErrorRatios_1X105                                               = 5,
   eQMISDUErrorRatios_1X106                                               = 6,
   eQMISDUErrorRatios_1X101                                               = 7,
};

// Enum to describe QMI SDU Residual Bit Error Ratios
enum eQMISDUResidualBitErrorRatios:UINT8
{
   eQMISDUResidualBitErrorRatios_Subscribe                                = 0,
   eQMISDUResidualBitErrorRatios_5X102                                    = 1,
   eQMISDUResidualBitErrorRatios_1X102                                    = 2,
   eQMISDUResidualBitErrorRatios_5X103                                    = 3,
   eQMISDUResidualBitErrorRatios_4X103                                    = 4,
   eQMISDUResidualBitErrorRatios_1X103                                    = 5,
   eQMISDUResidualBitErrorRatios_1X104                                    = 6,
   eQMISDUResidualBitErrorRatios_1X105                                    = 7,
   eQMISDUResidualBitErrorRatios_1X106                                    = 8,
   eQMISDUResidualBitErrorRatios_6X108                                    = 9,
};

// Enum to describe QMI Traffic Classes
enum eQMITrafficClasses:UINT8
{
   eQMITrafficClasses_Subscribed                                          = 0,
   eQMITrafficClasses_Conversational                                      = 1,
   eQMITrafficClasses_Streaming                                           = 2,
   eQMITrafficClasses_Interactive                                         = 3,
   eQMITrafficClasses_Background                                          = 4,
};

// Enum to describe QMI UIM APDU Response Status
enum eQMIUIMAPDUResponseStatus:UINT8
{
   eQMIUIMAPDUResponseStatus_ReturnIntermediateProcedureBytes             = 0,
   eQMIUIMAPDUResponseStatus_ReturnFinalResultAndStatusWords              = 1,
};

// Enum to describe QMI UIM Application States
enum eQMIUIMApplicationStates:UINT8
{
   eQMIUIMApplicationStates_Unknown                                       = 0,
   eQMIUIMApplicationStates_Detected                                      = 1,
   eQMIUIMApplicationStates_PIN1OrUPINIsRequired                          = 2,
   eQMIUIMApplicationStates_PUK1OrPUKForUPINIsRequired                    = 3,
   eQMIUIMApplicationStates_PersonalizationStateMustBeChecked             = 4,
   eQMIUIMApplicationStates_PIN1IsBlocked                                 = 5,
   eQMIUIMApplicationStates_Illegal                                       = 6,
   eQMIUIMApplicationStates_Ready                                         = 7,
};

// Enum to describe QMI UIM Application Types
enum eQMIUIMApplicationTypes:UINT8
{
   eQMIUIMApplicationTypes_Unknown                                        = 0,
   eQMIUIMApplicationTypes_SIMCard                                        = 1,
   eQMIUIMApplicationTypes_USIMApplication                                = 2,
   eQMIUIMApplicationTypes_RUIMCard                                       = 3,
   eQMIUIMApplicationTypes_CSIMApplication                                = 4,
   eQMIUIMApplicationTypes_ISIMApplication                                = 5,
};

// Enum to describe QMI UIM Authentication Contexts
enum eQMIUIMAuthenticationContexts
{
   eQMIUIMAuthenticationContexts_GSMAlgorithm                             = 0,
   eQMIUIMAuthenticationContexts_CAVEAlgorithm                            = 1,
   eQMIUIMAuthenticationContexts_GSMSecurity                              = 2,
   eQMIUIMAuthenticationContexts_3GSecurity                               = 3,
   eQMIUIMAuthenticationContexts_VGCSVBSSecurity                          = 4,
   eQMIUIMAuthenticationContexts_GBASecurityBootstrappingMode             = 5,
   eQMIUIMAuthenticationContexts_GBASecurityNAFDerivationMode             = 6,
   eQMIUIMAuthenticationContexts_MBMSSecurityMSKUpdateMode                = 7,
   eQMIUIMAuthenticationContexts_MBMSSecurityMTKGenerationMode            = 8,
   eQMIUIMAuthenticationContexts_MBMSSecurityMSKDeletionMode              = 9,
   eQMIUIMAuthenticationContexts_MBMSSecurityMUKDeletionMode              = 10,
   eQMIUIMAuthenticationContexts_IMSAKASecurity                           = 11,
   eQMIUIMAuthenticationContexts_HTTPDigestSecurity                       = 12,
   eQMIUIMAuthenticationContexts_ComputeIPCHAP                            = 13,
   eQMIUIMAuthenticationContexts_ComputeIPMNHA                            = 14,
   eQMIUIMAuthenticationContexts_ComputeIPMIPRRQ                          = 15,
   eQMIUIMAuthenticationContexts_ComputeIPMNAAA                           = 16,
   eQMIUIMAuthenticationContexts_ComputeIPHRPD                            = 17,
};

// Enum to describe QMI UIM CK/Session Operations
enum eQMIUIMCKSessionOperations:UINT8
{
   eQMIUIMCKSessionOperations_Deactivate                                  = 0,
   eQMIUIMCKSessionOperations_Activate                                    = 1,
};

// Enum to describe QMI UIM Card Error Codes
enum eQMIUIMCardErrorCodes:UINT8
{
   eQMIUIMCardErrorCodes_Unknown                                          = 0,
   eQMIUIMCardErrorCodes_PowerDown                                        = 1,
   eQMIUIMCardErrorCodes_PollError                                        = 2,
   eQMIUIMCardErrorCodes_NoATRReceived                                    = 3,
   eQMIUIMCardErrorCodes_VoltMismatch                                     = 4,
   eQMIUIMCardErrorCodes_ParityError                                      = 5,
   eQMIUIMCardErrorCodes_UnknownPossiblyRemoved                           = 6,
   eQMIUIMCardErrorCodes_TechnicalProblems                                = 7,
};

// Enum to describe QMI UIM Card States
enum eQMIUIMCardStates:UINT8
{
   eQMIUIMCardStates_Absent                                               = 0,
   eQMIUIMCardStates_Present                                              = 1,
   eQMIUIMCardStates_Error                                                = 2,
};

// Enum to describe QMI UIM Connect Operations
enum eQMIUIMConnectOperations:UINT8
{
   eQMIUIMConnectOperations_Disconnect                                    = 0,
   eQMIUIMConnectOperations_Connect                                       = 1,
   eQMIUIMConnectOperations_CheckStatus                                   = 2,
};

// Enum to describe QMI UIM Disonnect Modes
enum eQMIUIMDisonnectModes:UINT8
{
   eQMIUIMDisonnectModes_ImmediateDisconnect                              = 0,
   eQMIUIMDisonnectModes_GracefulShutdown                                 = 1,
};

// Enum to describe QMI UIM FDN Status Values
enum eQMIUIMFDNStatusValues:UINT8
{
   eQMIUIMFDNStatusValues_NotAvailable                                    = 0,
   eQMIUIMFDNStatusValues_AvailableButDisabled                            = 1,
   eQMIUIMFDNStatusValues_AvailableAndEnabled                             = 2,
};

// Enum to describe QMI UIM File Control Information
enum eQMIUIMFileControlInformation:UINT8
{
   eQMIUIMFileControlInformation_NoData                                   = 0,
   eQMIUIMFileControlInformation_FCP                                      = 1,
   eQMIUIMFileControlInformation_FCI                                      = 2,
   eQMIUIMFileControlInformation_FCIWithInterfaces                        = 3,
   eQMIUIMFileControlInformation_FMD                                      = 4,
};

// Enum to describe QMI UIM File Types
enum eQMIUIMFileTypes:UINT8
{
   eQMIUIMFileTypes_Transparent                                           = 0,
   eQMIUIMFileTypes_Cyclic                                                = 1,
   eQMIUIMFileTypes_LinearFixed                                           = 2,
   eQMIUIMFileTypes_DedicatedFile                                         = 3,
   eQMIUIMFileTypes_MasterFile                                            = 4,
};

// Enum to describe QMI UIM Hidden Key Status Values
enum eQMIUIMHiddenKeyStatusValues:UINT8
{
   eQMIUIMHiddenKeyStatusValues_NotSupported                              = 0,
   eQMIUIMHiddenKeyStatusValues_EnabledAndNotVerified                     = 1,
   eQMIUIMHiddenKeyStatusValues_EnabledAndVerified                        = 2,
   eQMIUIMHiddenKeyStatusValues_Disabled                                  = 3,
};

// Enum to describe QMI UIM Hot-Swap
enum eQMIUIMHotSwap:UINT8
{
   eQMIUIMHotSwap_HotSwapNotSupported                                     = 0,
   eQMIUIMHotSwap_HotSwapIsSupportedButStatusOfSwitchNotSupported         = 1,
   eQMIUIMHotSwap_SwitchIndicatesThatCardIsPresent                        = 2,
   eQMIUIMHotSwap_SwichIndicatesThatCardIsNotPresent                      = 3,
};

// Enum to describe QMI UIM Key Reference ID
enum eQMIUIMKeyReferenceID:UINT8
{
   eQMIUIMKeyReferenceID_PINApplication1                                  = 1,
   eQMIUIMKeyReferenceID_PINApplication2                                  = 2,
   eQMIUIMKeyReferenceID_PINApplication3                                  = 3,
   eQMIUIMKeyReferenceID_PINApplication4                                  = 4,
   eQMIUIMKeyReferenceID_PINApplication5                                  = 5,
   eQMIUIMKeyReferenceID_PINApplication6                                  = 6,
   eQMIUIMKeyReferenceID_PINApplication7                                  = 7,
   eQMIUIMKeyReferenceID_PINApplication8                                  = 8,
};

// Enum to describe QMI UIM PIN IDs
enum eQMIUIMPINIDs
{
   eQMIUIMPINIDs_PIN1                                                     = 1,
   eQMIUIMPINIDs_PIN2                                                     = 2,
   eQMIUIMPINIDs_UniversalPIN                                             = 3,
   eQMIUIMPINIDs_HiddenKey                                                = 4,
};

// Enum to describe QMI UIM PIN Operations
enum eQMIUIMPINOperations
{
   eQMIUIMPINOperations_Disable                                           = 0,
   eQMIUIMPINOperations_Enable                                            = 1,
};

// Enum to describe QMI UIM PIN States
enum eQMIUIMPINStates:UINT8
{
   eQMIUIMPINStates_Unknown                                               = 0,
   eQMIUIMPINStates_EnabledAndNotVerified                                 = 1,
   eQMIUIMPINStates_EnabledAndVerified                                    = 2,
   eQMIUIMPINStates_Disabled                                              = 3,
   eQMIUIMPINStates_Blocked                                               = 4,
   eQMIUIMPINStates_PermanentlyBlocked                                    = 5,
};

// Enum to describe QMI UIM Personalization Features
enum eQMIUIMPersonalizationFeatures:UINT8
{
   eQMIUIMPersonalizationFeatures_GWNetwork                               = 0,
   eQMIUIMPersonalizationFeatures_GWNetworkSubset                         = 1,
   eQMIUIMPersonalizationFeatures_GWServiceProvider                       = 2,
   eQMIUIMPersonalizationFeatures_GWCorporate                             = 3,
   eQMIUIMPersonalizationFeatures_GWUIM                                   = 4,
   eQMIUIMPersonalizationFeatures_1XNetworkType1                          = 5,
   eQMIUIMPersonalizationFeatures_1XNetworkType2                          = 6,
   eQMIUIMPersonalizationFeatures_1XHRPD                                  = 7,
   eQMIUIMPersonalizationFeatures_1XServiceProvider                       = 8,
   eQMIUIMPersonalizationFeatures_1XCorporate                             = 9,
   eQMIUIMPersonalizationFeatures_1XRUIM                                  = 10,
   eQMIUIMPersonalizationFeatures_Unknown                                 = 11,
};

// Enum to describe QMI UIM Personalization States
enum eQMIUIMPersonalizationStates:UINT8
{
   eQMIUIMPersonalizationStates_Unknown                                   = 0,
   eQMIUIMPersonalizationStates_PersonalizationOperationIsInProgress      = 1,
   eQMIUIMPersonalizationStates_Ready                                     = 2,
   eQMIUIMPersonalizationStates_PersonalizationCodeIsRequired             = 3,
   eQMIUIMPersonalizationStates_PUKForPersonalizationCodeIsRequired       = 4,
   eQMIUIMPersonalizationStates_PermanentlyBlocked                        = 5,
};

// Enum to describe QMI UIM Refresh Modes
enum eQMIUIMRefreshModes:UINT8
{
   eQMIUIMRefreshModes_Reset                                              = 0,
   eQMIUIMRefreshModes_Init                                               = 1,
   eQMIUIMRefreshModes_InitAndFCN                                         = 2,
   eQMIUIMRefreshModes_FCN                                                = 3,
   eQMIUIMRefreshModes_InitAndFullFCN                                     = 4,
   eQMIUIMRefreshModes_ApplicationReset                                   = 5,
   eQMIUIMRefreshModes_3GSessionReset                                     = 6,
};

// Enum to describe QMI UIM Refresh Stages
enum eQMIUIMRefreshStages:UINT8
{
   eQMIUIMRefreshStages_WaitingForOK                                      = 0,
   eQMIUIMRefreshStages_Start                                             = 1,
   eQMIUIMRefreshStages_EndWithSuccess                                    = 2,
   eQMIUIMRefreshStages_EndWithFailure                                    = 3,
};

// Enum to describe QMI UIM Register Flags
enum eQMIUIMRegisterFlags
{
   eQMIUIMRegisterFlags_Deregister                                        = 0,
   eQMIUIMRegisterFlags_Register                                          = 1,
};

// Enum to describe QMI UIM SAP Requests
enum eQMIUIMSAPRequests:UINT8
{
   eQMIUIMSAPRequests_RetrieveATR                                         = 0,
   eQMIUIMSAPRequests_SendAPDU                                            = 1,
   eQMIUIMSAPRequests_PowerOffSIM                                         = 2,
   eQMIUIMSAPRequests_PowerOnSIM                                          = 3,
   eQMIUIMSAPRequests_ResetSIM                                            = 4,
   eQMIUIMSAPRequests_RetrieveCardReaderStatus                            = 5,
};

// Enum to describe QMI UIM SAP States
enum eQMIUIMSAPStates:UINT8
{
   eQMIUIMSAPStates_NotEnabled                                            = 0,
   eQMIUIMSAPStates_Connecting                                            = 1,
   eQMIUIMSAPStates_ConnectedSuccessfully                                 = 2,
   eQMIUIMSAPStates_ConnectionError                                       = 3,
   eQMIUIMSAPStates_Disconnecting                                         = 4,
   eQMIUIMSAPStates_DisconnectedSuccessfully                              = 5,
};

// Enum to describe QMI UIM Security Attributes
enum eQMIUIMSecurityAttributes:UINT8
{
   eQMIUIMSecurityAttributes_Always                                       = 0,
   eQMIUIMSecurityAttributes_Never                                        = 1,
   eQMIUIMSecurityAttributes_ANDCondition                                 = 2,
   eQMIUIMSecurityAttributes_ORCondition                                  = 3,
   eQMIUIMSecurityAttributes_SingleCondition                              = 4,
};

// Enum to describe QMI UIM Session Types
enum eQMIUIMSessionTypes:UINT8
{
   eQMIUIMSessionTypes_PrimaryGWProvisioning                              = 0,
   eQMIUIMSessionTypes_Primary1XProvisioning                              = 1,
   eQMIUIMSessionTypes_SecondaryGWProvisioning                            = 2,
   eQMIUIMSessionTypes_Secondary1XProvisioning                            = 3,
   eQMIUIMSessionTypes_NonprovisioningOnSlot1                             = 4,
   eQMIUIMSessionTypes_NonprovisioningOnSlot2                             = 5,
   eQMIUIMSessionTypes_CardOnSlot1                                        = 6,
   eQMIUIMSessionTypes_CardOnSlot2                                        = 7,
   eQMIUIMSessionTypes_LogicalChannelOnSlot1                              = 8,
   eQMIUIMSessionTypes_LogicalChannelOnSlot2                              = 9,
};

// Enum to describe QMI UIM Slots
enum eQMIUIMSlots:UINT8
{
   eQMIUIMSlots_Slot1                                                     = 1,
   eQMIUIMSlots_Slot2                                                     = 2,
};

// Enum to describe QMI Voice ALS Line Indicators
enum eQMIVoiceALSLineIndicators:UINT8
{
   eQMIVoiceALSLineIndicators_Line1                                       = 0,
   eQMIVoiceALSLineIndicators_Line2                                       = 1,
};

// Enum to describe QMI Voice ALS Lines
enum eQMIVoiceALSLines:UINT8
{
   eQMIVoiceALSLines_Line1                                                = 0,
   eQMIVoiceALSLines_Line2                                                = 1,
};

// Enum to describe QMI Voice Alerting Patterns
enum eQMIVoiceAlertingPatterns:UINT32
{
   eQMIVoiceAlertingPatterns_Pattern1                                     = 0,
   eQMIVoiceAlertingPatterns_Pattern2                                     = 1,
   eQMIVoiceAlertingPatterns_Pattern3                                     = 2,
   eQMIVoiceAlertingPatterns_Pattern4                                     = 3,
   eQMIVoiceAlertingPatterns_Pattern5                                     = 4,
   eQMIVoiceAlertingPatterns_Pattern6                                     = 5,
   eQMIVoiceAlertingPatterns_Pattern7                                     = 6,
   eQMIVoiceAlertingPatterns_Pattern8                                     = 7,
   eQMIVoiceAlertingPatterns_Pattern9                                     = 8,
};

// Enum to describe QMI Voice Alerting Types
enum eQMIVoiceAlertingTypes:UINT8
{
   eQMIVoiceAlertingTypes_Local                                           = 0,
   eQMIVoiceAlertingTypes_Remote                                          = 1,
};

// Enum to describe QMI Voice CLIR Causes
enum eQMIVoiceCLIRCauses:UINT8
{
   eQMIVoiceCLIRCauses_None                                               = 0,
   eQMIVoiceCLIRCauses_RejectedByUser                                     = 1,
   eQMIVoiceCLIRCauses_InteractionWithOtherServices                       = 2,
   eQMIVoiceCLIRCauses_CoinLine                                           = 3,
   eQMIVoiceCLIRCauses_ServiceUnavailable                                 = 4,
   eQMIVoiceCLIRCauses_Reserved                                           = 5,
};

// Enum to describe QMI Voice CLIR Types
enum eQMIVoiceCLIRTypes:UINT8
{
   eQMIVoiceCLIRTypes_Supression                                          = 1,
   eQMIVoiceCLIRTypes_Invocation                                          = 2,
};

// Enum to describe QMI Voice Call Control Result Types
enum eQMIVoiceCallControlResultTypes:UINT8
{
   eQMIVoiceCallControlResultTypes_Voice                                  = 0,
   eQMIVoiceCallControlResultTypes_SupplementaryService                   = 1,
   eQMIVoiceCallControlResultTypes_USSD                                   = 2,
};

// Enum to describe QMI Voice Call Directions
enum eQMIVoiceCallDirections:UINT8
{
   eQMIVoiceCallDirections_MobileOriginated                               = 1,
   eQMIVoiceCallDirections_MobileTerminated                               = 2,
};

// Enum to describe QMI Voice Call Modes
enum eQMIVoiceCallModes:UINT8
{
   eQMIVoiceCallModes_CDMA                                                = 1,
   eQMIVoiceCallModes_GSM                                                 = 2,
   eQMIVoiceCallModes_UMTS                                                = 3,
   eQMIVoiceCallModes_LTE                                                 = 4,
   eQMIVoiceCallModes_TDSCDMA                                             = 5,
};

// Enum to describe QMI Voice Call States
enum eQMIVoiceCallStates:UINT8
{
   eQMIVoiceCallStates_Origination                                        = 1,
   eQMIVoiceCallStates_Incoming                                           = 2,
   eQMIVoiceCallStates_Conversation                                       = 3,
   eQMIVoiceCallStates_InProgress                                         = 4,
   eQMIVoiceCallStates_Alerting                                           = 5,
   eQMIVoiceCallStates_Hold                                               = 6,
   eQMIVoiceCallStates_Waiting                                            = 7,
   eQMIVoiceCallStates_Disconnecting                                      = 8,
   eQMIVoiceCallStates_End                                                = 9,
   eQMIVoiceCallStates_Setup                                              = 10,
};

// Enum to describe QMI Voice Call Types
enum eQMIVoiceCallTypes:UINT8
{
   eQMIVoiceCallTypes_VoiceAutomaticSelection                             = 0,
   eQMIVoiceCallTypes_Forced                                              = 1,
   eQMIVoiceCallTypes_VoiceOverIP                                         = 2,
   eQMIVoiceCallTypes_OTAPA                                               = 6,
   eQMIVoiceCallTypes_StandardOTASP                                       = 7,
   eQMIVoiceCallTypes_NonStandardOTASP                                    = 8,
   eQMIVoiceCallTypes_Emergency                                           = 9,
   eQMIVoiceCallTypes_SupplementaryService                                = 10,
};

// Enum to describe QMI Voice DTMF Events
enum eQMIVoiceDTMFEvents:UINT8
{
   eQMIVoiceDTMFEvents_SendDTMFBurst                                      = 0,
   eQMIVoiceDTMFEvents_StartSendingContinuousDTMFTone                     = 1,
   eQMIVoiceDTMFEvents_StopSendingContinuousDTMFTone                      = 3,
   eQMIVoiceDTMFEvents_ReceiveDTMFBurst                                   = 4,
   eQMIVoiceDTMFEvents_StartReceivingContinuousDTMFTone                   = 6,
   eQMIVoiceDTMFEvents_StopReceivingContinuousDTMFTone                    = 7,
};

// Enum to describe QMI Voice DTMF Privacy Levels
enum eQMIVoiceDTMFPrivacyLevels:UINT8
{
   eQMIVoiceDTMFPrivacyLevels_Standard                                    = 0,
   eQMIVoiceDTMFPrivacyLevels_Enhanced                                    = 1,
};

// Enum to describe QMI Voice Domains
enum eQMIVoiceDomains:UINT8
{
   eQMIVoiceDomains_CSOnly                                                = 0,
   eQMIVoiceDomains_PSOnly                                                = 1,
   eQMIVoiceDomains_CSThenPS                                              = 2,
   eQMIVoiceDomains_PSThenCS                                              = 3,
};

// Enum to describe QMI Voice ECT Call States
enum eQMIVoiceECTCallStates:UINT8
{
   eQMIVoiceECTCallStates_None                                            = 0,
   eQMIVoiceECTCallStates_Alerting                                        = 1,
   eQMIVoiceECTCallStates_Active                                          = 2,
};

// Enum to describe QMI Voice Even Odd Indicators
enum eQMIVoiceEvenOddIndicators:UINT8
{
   eQMIVoiceEvenOddIndicators_EvenNumber                                  = 0,
   eQMIVoiceEvenOddIndicators_OddNumber                                   = 1,
};

// Enum to describe QMI Voice Flash Types
enum eQMIVoiceFlashTypes:UINT8
{
   eQMIVoiceFlashTypes_Simple                                             = 0,
   eQMIVoiceFlashTypes_ActivateAnswerHold                                 = 1,
   eQMIVoiceFlashTypes_DeactivateAnswerHold                               = 2,
};

// Enum to describe QMI Voice Interdigit Intervals
enum eQMIVoiceInterdigitIntervals:UINT8
{
   eQMIVoiceInterdigitIntervals_60ms                                      = 0,
   eQMIVoiceInterdigitIntervals_100ms                                     = 1,
   eQMIVoiceInterdigitIntervals_150ms                                     = 2,
   eQMIVoiceInterdigitIntervals_200ms                                     = 3,
};

// Enum to describe QMI Voice NSS Releases
enum eQMIVoiceNSSReleases:UINT8
{
   eQMIVoiceNSSReleases_Finished                                          = 1,
};

// Enum to describe QMI Voice Number Plans
enum eQMIVoiceNumberPlans:UINT8
{
   eQMIVoiceNumberPlans_Unknown                                           = 0,
   eQMIVoiceNumberPlans_ISDN                                              = 1,
   eQMIVoiceNumberPlans_Data                                              = 3,
   eQMIVoiceNumberPlans_Telex                                             = 4,
   eQMIVoiceNumberPlans_National                                          = 8,
   eQMIVoiceNumberPlans_Private                                           = 9,
   eQMIVoiceNumberPlans_ReservedCTS                                       = 11,
   eQMIVoiceNumberPlans_ReservedExtension                                 = 15,
};

// Enum to describe QMI Voice Number Types
enum eQMIVoiceNumberTypes:UINT8
{
   eQMIVoiceNumberTypes_Unknown                                           = 0,
   eQMIVoiceNumberTypes_International                                     = 1,
   eQMIVoiceNumberTypes_National                                          = 2,
   eQMIVoiceNumberTypes_NetworkSpecific                                   = 3,
   eQMIVoiceNumberTypes_Subscriber                                        = 4,
   eQMIVoiceNumberTypes_Reserved                                          = 5,
   eQMIVoiceNumberTypes_Abbreviated                                       = 6,
   eQMIVoiceNumberTypes_ReservedExtension                                 = 7,
};

// Enum to describe QMI Voice OTASP Stati
enum eQMIVoiceOTASPStati:UINT8
{
   eQMIVoiceOTASPStati_Unlocked                                           = 0,
   eQMIVoiceOTASPStati_RetriesExceeded                                    = 1,
   eQMIVoiceOTASPStati_AKeyExchanged                                      = 2,
   eQMIVoiceOTASPStati_SSDUpdated                                         = 3,
   eQMIVoiceOTASPStati_NAMDownloaded                                      = 4,
   eQMIVoiceOTASPStati_MDNDownloaded                                      = 5,
   eQMIVoiceOTASPStati_IMSIDownloaded                                     = 6,
   eQMIVoiceOTASPStati_PRLDownloaded                                      = 7,
   eQMIVoiceOTASPStati_Committed                                          = 8,
   eQMIVoiceOTASPStati_OTAPAStarted                                       = 9,
   eQMIVoiceOTASPStati_OTAPAStopped                                       = 10,
   eQMIVoiceOTASPStati_OTAPAAborted                                       = 11,
   eQMIVoiceOTASPStati_OTAPACommitted                                     = 12,
};

// Enum to describe QMI Voice Presentation Indicators
enum eQMIVoicePresentationIndicators:UINT8
{
   eQMIVoicePresentationIndicators_Allowed                                = 0,
   eQMIVoicePresentationIndicators_Restricted                             = 1,
   eQMIVoicePresentationIndicators_Unavailable                            = 2,
   eQMIVoicePresentationIndicators_NameRestricted                         = 3,
   eQMIVoicePresentationIndicators_PayPhone                               = 4,
};

// Enum to describe QMI Voice Privacy Levels
enum eQMIVoicePrivacyLevels:UINT8
{
   eQMIVoicePrivacyLevels_Standard                                        = 0,
   eQMIVoicePrivacyLevels_Enhanced                                        = 1,
};

// Enum to describe QMI Voice Provisioning States
enum eQMIVoiceProvisioningStates:UINT8
{
   eQMIVoiceProvisioningStates_NotProvisioned                             = 0,
   eQMIVoiceProvisioningStates_ProvisionedPermanent                       = 1,
   eQMIVoiceProvisioningStates_PresentationRestricted                     = 2,
   eQMIVoiceProvisioningStates_PresentationAllowed                        = 3,
};

// Enum to describe QMI Voice Pulse Widths
enum eQMIVoicePulseWidths:UINT8
{
   eQMIVoicePulseWidths_95ms                                              = 0,
   eQMIVoicePulseWidths_150ms                                             = 1,
   eQMIVoicePulseWidths_200ms                                             = 2,
   eQMIVoicePulseWidths_250ms                                             = 3,
   eQMIVoicePulseWidths_300ms                                             = 4,
   eQMIVoicePulseWidths_350ms                                             = 5,
   eQMIVoicePulseWidths_SMSTXSpecial                                      = 6,
};

// Enum to describe QMI Voice Screening Indicators
enum eQMIVoiceScreeningIndicators:UINT8
{
   eQMIVoiceScreeningIndicators_UserNotScreened                           = 0,
   eQMIVoiceScreeningIndicators_UserPassedVerification                    = 1,
   eQMIVoiceScreeningIndicators_UserFailedVerification                    = 2,
   eQMIVoiceScreeningIndicators_ProvidedNetwork                           = 3,
};

// Enum to describe QMI Voice Service Options
enum eQMIVoiceServiceOptions:UINT16
{
   eQMIVoiceServiceOptions_Any                                            = 0,
   eQMIVoiceServiceOptions_IS96A                                          = 1,
   eQMIVoiceServiceOptions_EVRC                                           = 3,
   eQMIVoiceServiceOptions_IS73313K                                       = 17,
   eQMIVoiceServiceOptions_SelectableModeVocoder                          = 56,
   eQMIVoiceServiceOptions_4GVNarrowBand                                  = 68,
   eQMIVoiceServiceOptions_4GVWideBand                                    = 70,
   eQMIVoiceServiceOptions_13K                                            = 32768,
   eQMIVoiceServiceOptions_IS96                                           = 32769,
   eQMIVoiceServiceOptions_WVRC                                           = 32803,
};

// Enum to describe QMI Voice Service Types
enum eQMIVoiceServiceTypes:UINT32
{
   eQMIVoiceServiceTypes_Automatic                                        = 1,
   eQMIVoiceServiceTypes_GSM                                              = 2,
   eQMIVoiceServiceTypes_WCDMA                                            = 3,
   eQMIVoiceServiceTypes_CDMAAutomatic                                    = 4,
   eQMIVoiceServiceTypes_GSMOrWCDMA                                       = 5,
   eQMIVoiceServiceTypes_LTE                                              = 6,
};

// Enum to describe QMI Voice Subaddress Types
enum eQMIVoiceSubaddressTypes:UINT8
{
   eQMIVoiceSubaddressTypes_NSAP                                          = 0,
   eQMIVoiceSubaddressTypes_User                                          = 1,
};

// Enum to describe QMI Voice Subscription Types
enum eQMIVoiceSubscriptionTypes:UINT8
{
   eQMIVoiceSubscriptionTypes_Primary                                     = 0,
   eQMIVoiceSubscriptionTypes_Secondary                                   = 1,
};

// Enum to describe QMI Voice Supplementary Notification Types
enum eQMIVoiceSupplementaryNotificationTypes:UINT8
{
   eQMIVoiceSupplementaryNotificationTypes_OutgoingCallIsForwarded        = 1,
   eQMIVoiceSupplementaryNotificationTypes_OutgoingCallIsWaiting          = 2,
   eQMIVoiceSupplementaryNotificationTypes_OutgoingCUGCall                = 3,
   eQMIVoiceSupplementaryNotificationTypes_OutgoingCallsBarred            = 4,
   eQMIVoiceSupplementaryNotificationTypes_OutgoingCallIsDeflected        = 5,
   eQMIVoiceSupplementaryNotificationTypes_IncomingCUGCall                = 6,
   eQMIVoiceSupplementaryNotificationTypes_IncomingCallsBarred            = 7,
   eQMIVoiceSupplementaryNotificationTypes_IncomingForwardedCall          = 8,
   eQMIVoiceSupplementaryNotificationTypes_IncomingDeflectedCall          = 9,
   eQMIVoiceSupplementaryNotificationTypes_IncomingCallIsForwarded        = 10,
   eQMIVoiceSupplementaryNotificationTypes_UnconditionalCallForwardingActive = 11,
   eQMIVoiceSupplementaryNotificationTypes_ConditionalCallForwardingActive = 12,
   eQMIVoiceSupplementaryNotificationTypes_CLIRSuppressionRejected        = 13,
   eQMIVoiceSupplementaryNotificationTypes_CallIsOnHold                   = 14,
   eQMIVoiceSupplementaryNotificationTypes_CallIsRetrieved                = 15,
   eQMIVoiceSupplementaryNotificationTypes_CallIsInConference             = 16,
   eQMIVoiceSupplementaryNotificationTypes_CallIsECTWhileAnotherCallIsAlerting = 17,
   eQMIVoiceSupplementaryNotificationTypes_CallIsECTWhileAnotherCallIsActive = 18,
};

// Enum to describe QMI Voice Supplementary Service Call Types
enum eQMIVoiceSupplementaryServiceCallTypes:UINT8
{
   eQMIVoiceSupplementaryServiceCallTypes_ReleaseHeldOrWaiting            = 1,
   eQMIVoiceSupplementaryServiceCallTypes_ReleaseActiveAcceptHeldOrWaiting = 2,
   eQMIVoiceSupplementaryServiceCallTypes_HoldActiveAcceptHeldOrWaiting   = 3,
   eQMIVoiceSupplementaryServiceCallTypes_HoldAllExceptSpecifiedCall      = 4,
   eQMIVoiceSupplementaryServiceCallTypes_MakeConferenceCall              = 5,
   eQMIVoiceSupplementaryServiceCallTypes_ExplicitCallTransfer            = 6,
   eQMIVoiceSupplementaryServiceCallTypes_CCBSActivation                  = 7,
   eQMIVoiceSupplementaryServiceCallTypes_EndAllCalls                     = 8,
   eQMIVoiceSupplementaryServiceCallTypes_ReleaseSpecifiedCall            = 9,
};

// Enum to describe QMI Voice Supplementary Service Reasons
enum eQMIVoiceSupplementaryServiceReasons:UINT8
{
   eQMIVoiceSupplementaryServiceReasons_ForwardUnconditional              = 1,
   eQMIVoiceSupplementaryServiceReasons_ForwardMobileBusy                 = 2,
   eQMIVoiceSupplementaryServiceReasons_ForwardNoReply                    = 3,
   eQMIVoiceSupplementaryServiceReasons_ForwardUnreachable                = 4,
   eQMIVoiceSupplementaryServiceReasons_ForwardAllForwarding              = 5,
   eQMIVoiceSupplementaryServiceReasons_ForwardAllConditional             = 6,
   eQMIVoiceSupplementaryServiceReasons_BarrAllOutgoing                   = 7,
   eQMIVoiceSupplementaryServiceReasons_BarrOutgoingInt                   = 8,
   eQMIVoiceSupplementaryServiceReasons_BarrOutgoingIntExtToHome          = 9,
   eQMIVoiceSupplementaryServiceReasons_BarrAllIncoming                   = 10,
   eQMIVoiceSupplementaryServiceReasons_BarrIncomingRoaming               = 11,
   eQMIVoiceSupplementaryServiceReasons_BarrAllBarring                    = 12,
   eQMIVoiceSupplementaryServiceReasons_BarrAllOutgoingBarring            = 13,
   eQMIVoiceSupplementaryServiceReasons_BarrAllIncomingBarring            = 14,
   eQMIVoiceSupplementaryServiceReasons_CallWaiting                       = 15,
   eQMIVoiceSupplementaryServiceReasons_CLIR                              = 16,
   eQMIVoiceSupplementaryServiceReasons_CLIP                              = 17,
};

// Enum to describe QMI Voice Supplementary Service Requests
enum eQMIVoiceSupplementaryServiceRequests:UINT8
{
   eQMIVoiceSupplementaryServiceRequests_Activate                         = 1,
   eQMIVoiceSupplementaryServiceRequests_Deactivate                       = 2,
   eQMIVoiceSupplementaryServiceRequests_Register                         = 3,
   eQMIVoiceSupplementaryServiceRequests_Erase                            = 4,
   eQMIVoiceSupplementaryServiceRequests_Interrogate                      = 5,
   eQMIVoiceSupplementaryServiceRequests_RegisterPassword                 = 6,
   eQMIVoiceSupplementaryServiceRequests_USSD                             = 7,
};

// Enum to describe QMI Voice Supplementary Service Types
enum eQMIVoiceSupplementaryServiceTypes:UINT8
{
   eQMIVoiceSupplementaryServiceTypes_Activate                            = 0,
   eQMIVoiceSupplementaryServiceTypes_Deactivate                          = 1,
   eQMIVoiceSupplementaryServiceTypes_Register                            = 2,
   eQMIVoiceSupplementaryServiceTypes_Erase                               = 3,
};

// Enum to describe QMI Voice TTY Modes
enum eQMIVoiceTTYModes:UINT8
{
   eQMIVoiceTTYModes_Full                                                 = 0,
   eQMIVoiceTTYModes_VoiceCarryOver                                       = 1,
   eQMIVoiceTTYModes_HearingCarryOver                                     = 2,
   eQMIVoiceTTYModes_Off                                                  = 3,
};

// Enum to describe QMI Voice USSD Alpha Coding Schemes
enum eQMIVoiceUSSDAlphaCodingSchemes:UINT8
{
   eQMIVoiceUSSDAlphaCodingSchemes_GSM                                    = 1,
   eQMIVoiceUSSDAlphaCodingSchemes_UCS2                                   = 2,
};

// Enum to describe QMI Voice USSD Data Coding Schemes
enum eQMIVoiceUSSDDataCodingSchemes:UINT8
{
   eQMIVoiceUSSDDataCodingSchemes_ASCII                                   = 1,
   eQMIVoiceUSSDDataCodingSchemes_8Bit                                    = 2,
   eQMIVoiceUSSDDataCodingSchemes_UCS2                                    = 3,
};

// Enum to describe QMI Voice USSD Notifcation Types
enum eQMIVoiceUSSDNotifcationTypes:UINT8
{
   eQMIVoiceUSSDNotifcationTypes_NoActionRequired                         = 1,
   eQMIVoiceUSSDNotifcationTypes_ActionIsRequired                         = 2,
};

// Enum to describe QMI Voice UUS Data Coding Schemes
enum eQMIVoiceUUSDataCodingSchemes:UINT8
{
   eQMIVoiceUUSDataCodingSchemes_USP                                      = 1,
   eQMIVoiceUUSDataCodingSchemes_OHLP                                     = 2,
   eQMIVoiceUUSDataCodingSchemes_X244                                     = 3,
   eQMIVoiceUUSDataCodingSchemes_SMCF                                     = 4,
   eQMIVoiceUUSDataCodingSchemes_IA5                                      = 5,
   eQMIVoiceUUSDataCodingSchemes_RV12RD                                   = 6,
   eQMIVoiceUUSDataCodingSchemes_Q931UNCCM                                = 7,
};

// Enum to describe QMI Voice UUS Types
enum eQMIVoiceUUSTypes:UINT8
{
   eQMIVoiceUUSTypes_Data                                                 = 0,
   eQMIVoiceUUSTypes_Type1Implicit                                        = 1,
   eQMIVoiceUUSTypes_Type1Required                                        = 2,
   eQMIVoiceUUSTypes_Type1NotRequired                                     = 3,
   eQMIVoiceUUSTypes_Type2Required                                        = 4,
   eQMIVoiceUUSTypes_Type2NotRequired                                     = 5,
   eQMIVoiceUUSTypes_Type3Required                                        = 6,
   eQMIVoiceUUSTypes_Type3NotRequired                                     = 7,
};

// Enum to describe QMI Voice VoIP SUPS Call Types
enum eQMIVoiceVoIPSUPSCallTypes:UINT8
{
   eQMIVoiceVoIPSUPSCallTypes_ReleaseHeldOrWaiting                        = 1,
   eQMIVoiceVoIPSUPSCallTypes_ReleaseActiveAcceptHeldOrWaiting            = 2,
   eQMIVoiceVoIPSUPSCallTypes_HoldActiveAcceptHeldOrWaiting               = 3,
   eQMIVoiceVoIPSUPSCallTypes_MakeConferenceCall                          = 4,
   eQMIVoiceVoIPSUPSCallTypes_EndAllExistingCalls                         = 5,
};

// Enum to describe QMI WDS 3GPP Call End Reasons
enum eQMIWDS3GPPCallEndReasons:UINT16
{
   eQMIWDS3GPPCallEndReasons_OperatorDeterminedBarring                    = 8,
   eQMIWDS3GPPCallEndReasons_LLCSNDCPFailure                              = 25,
   eQMIWDS3GPPCallEndReasons_InsufficientResources                        = 26,
   eQMIWDS3GPPCallEndReasons_UnknownAPN                                   = 27,
   eQMIWDS3GPPCallEndReasons_UnknownPDP                                   = 28,
   eQMIWDS3GPPCallEndReasons_AuthenticationFailed                         = 29,
   eQMIWDS3GPPCallEndReasons_GGSNReject                                   = 30,
   eQMIWDS3GPPCallEndReasons_ActivationReject                             = 31,
   eQMIWDS3GPPCallEndReasons_OptionNotSupported                           = 32,
   eQMIWDS3GPPCallEndReasons_OptionUnsubscribed                           = 33,
   eQMIWDS3GPPCallEndReasons_OptionTemporarilyOOO                         = 34,
   eQMIWDS3GPPCallEndReasons_NSAPIAlreadyUsed                             = 35,
   eQMIWDS3GPPCallEndReasons_RegularDeactivation                          = 36,
   eQMIWDS3GPPCallEndReasons_QoSNotAccepted                               = 37,
   eQMIWDS3GPPCallEndReasons_NetworkFailure                               = 38,
   eQMIWDS3GPPCallEndReasons_UMTSReactivationRequest                      = 39,
   eQMIWDS3GPPCallEndReasons_FeatureNotSupported                          = 40,
   eQMIWDS3GPPCallEndReasons_TFTSemanticError                             = 41,
   eQMIWDS3GPPCallEndReasons_TFTSyntaxError                               = 42,
   eQMIWDS3GPPCallEndReasons_UnknownPDPContext                            = 43,
   eQMIWDS3GPPCallEndReasons_FilterSemanticError                          = 44,
   eQMIWDS3GPPCallEndReasons_FilterSyntaxError                            = 45,
   eQMIWDS3GPPCallEndReasons_PDPWithoutActiveTFT                          = 46,
   eQMIWDS3GPPCallEndReasons_IPv4OnlyAllowed                              = 50,
   eQMIWDS3GPPCallEndReasons_IPv6OnlyAllowed                              = 51,
   eQMIWDS3GPPCallEndReasons_SingleAddressBearerOnly                      = 52,
   eQMIWDS3GPPCallEndReasons_ESMInfoNotReceived                           = 53,
   eQMIWDS3GPPCallEndReasons_NoPDNConnection                              = 54,
   eQMIWDS3GPPCallEndReasons_MultipleConnectionsNotAllowed                = 55,
   eQMIWDS3GPPCallEndReasons_InvalidTransactionID                         = 81,
   eQMIWDS3GPPCallEndReasons_MessageIncorrectSemantic                     = 95,
   eQMIWDS3GPPCallEndReasons_InvalidMandatoryID                           = 96,
   eQMIWDS3GPPCallEndReasons_MessageTypeUnsupported                       = 97,
   eQMIWDS3GPPCallEndReasons_MessageTypeNoncompatibleState                = 98,
   eQMIWDS3GPPCallEndReasons_UnknownInfoElement                           = 99,
   eQMIWDS3GPPCallEndReasons_ConditionalInfoElementError                  = 100,
   eQMIWDS3GPPCallEndReasons_MessageAndProtocolStateUncompatible          = 101,
   eQMIWDS3GPPCallEndReasons_ProtocolError                                = 111,
   eQMIWDS3GPPCallEndReasons_APNTypeConflict                              = 112,
};

// Enum to describe QMI WDS 3GPP2 RAT Types
enum eQMIWDS3GPP2RATTypes:UINT8
{
   eQMIWDS3GPP2RATTypes_HRPD                                              = 1,
   eQMIWDS3GPP2RATTypes_EHRPD                                             = 2,
   eQMIWDS3GPP2RATTypes_HRPDEHRPD                                         = 3,
};

// Enum to describe QMI WDS Address Allocation Preference
enum eQMIWDSAddressAllocationPreference:UINT8
{
   eQMIWDSAddressAllocationPreference_NASSignaling                        = 0,
   eQMIWDSAddressAllocationPreference_DHCP                                = 1,
};

// Enum to describe QMI WDS Application Type
enum eQMIWDSApplicationType:UINT32
{
   eQMIWDSApplicationType_DefaultApplicationType                          = 0,
   eQMIWDSApplicationType_LBSApplicationType                              = 32,
   eQMIWDSApplicationType_TetheredApplicationType                         = 64,
};

// Enum to describe QMI WDS Authentication Protocol
enum eQMIWDSAuthenticationProtocol:UINT8
{
   eQMIWDSAuthenticationProtocol_PAP                                      = 1,
   eQMIWDSAuthenticationProtocol_CHAP                                     = 2,
   eQMIWDSAuthenticationProtocol_PAPOrCHAP                                = 3,
};

// Enum to describe QMI WDS Autoconnect Roam Settings
enum eQMIWDSAutoconnectRoamSettings:UINT8
{
   eQMIWDSAutoconnectRoamSettings_Always                                  = 0,
   eQMIWDSAutoconnectRoamSettings_HomeOnly                                = 1,
};

// Enum to describe QMI WDS Autoconnect Settings
enum eQMIWDSAutoconnectSettings:UINT8
{
   eQMIWDSAutoconnectSettings_Disabled                                    = 0,
   eQMIWDSAutoconnectSettings_Enabled                                     = 1,
   eQMIWDSAutoconnectSettings_Paused                                      = 2,
};

// Enum to describe QMI WDS CDMA Networks
enum eQMIWDSCDMANetworks:UINT8
{
   eQMIWDSCDMANetworks_NoService                                          = 0,
   eQMIWDSCDMANetworks_CDMA                                               = 2,
   eQMIWDSCDMANetworks_CDMA1xEVDO                                         = 4,
};

// Enum to describe QMI WDS CDMA Service Options
enum eQMIWDSCDMAServiceOptions:UINT16
{
   eQMIWDSCDMAServiceOptions_IS657                                        = 7,
   eQMIWDSCDMAServiceOptions_IS657OverRateSet2                            = 15,
   eQMIWDSCDMAServiceOptions_IS707AWithRateSet1                           = 22,
   eQMIWDSCDMAServiceOptions_IS707AWithRateSet2                           = 25,
   eQMIWDSCDMAServiceOptions_CDMA2000PacketService                        = 33,
   eQMIWDSCDMAServiceOptions_IS707                                        = 4103,
   eQMIWDSCDMAServiceOptions_QCProprietaryRateSet2                        = 32800,
   eQMIWDSCDMAServiceOptions_NullServiceOption                            = 65535,
};

// Enum to describe QMI WDS Call End Reason Types
enum eQMIWDSCallEndReasonTypes:UINT16
{
   eQMIWDSCallEndReasonTypes_Unspecified                                  = 0,
   eQMIWDSCallEndReasonTypes_MobileIP                                     = 1,
   eQMIWDSCallEndReasonTypes_Internal                                     = 2,
   eQMIWDSCallEndReasonTypes_CallManagerDefined                           = 3,
   eQMIWDSCallEndReasonTypes_3GPPSpecificationDefined                     = 6,
   eQMIWDSCallEndReasonTypes_PPP                                          = 7,
   eQMIWDSCallEndReasonTypes_EHRPD                                        = 8,
   eQMIWDSCallEndReasonTypes_IPv6                                         = 9,
};

// Enum to describe QMI WDS Call Manager Call End Reasons
enum eQMIWDSCallManagerCallEndReasons:UINT16
{
   eQMIWDSCallManagerCallEndReasons_CDMALock                              = 500,
   eQMIWDSCallManagerCallEndReasons_Intercept                             = 501,
   eQMIWDSCallManagerCallEndReasons_Reorder                               = 502,
   eQMIWDSCallManagerCallEndReasons_ReleaseServiceOptionReject            = 503,
   eQMIWDSCallManagerCallEndReasons_IncomingCall                          = 504,
   eQMIWDSCallManagerCallEndReasons_AlertStop                             = 505,
   eQMIWDSCallManagerCallEndReasons_Activation                            = 506,
   eQMIWDSCallManagerCallEndReasons_MaxAccessProbe                        = 507,
   eQMIWDSCallManagerCallEndReasons_CCSNotSupportedByBS                   = 508,
   eQMIWDSCallManagerCallEndReasons_NoResponseFromBS                      = 509,
   eQMIWDSCallManagerCallEndReasons_RejectedByBS                          = 510,
   eQMIWDSCallManagerCallEndReasons_Incompatible                          = 511,
   eQMIWDSCallManagerCallEndReasons_AlreadyInTC                           = 512,
   eQMIWDSCallManagerCallEndReasons_UserCallOrigDuringGPS                 = 513,
   eQMIWDSCallManagerCallEndReasons_UserCallOrigDuringSMS                 = 514,
   eQMIWDSCallManagerCallEndReasons_NoCDMAService                         = 515,
   eQMIWDSCallManagerCallEndReasons_RetryOrder                            = 519,
   eQMIWDSCallManagerCallEndReasons_AccessBlock                           = 520,
   eQMIWDSCallManagerCallEndReasons_AccessBlockAll                        = 521,
   eQMIWDSCallManagerCallEndReasons_IS707BMaxAccess                       = 522,
   eQMIWDSCallManagerCallEndReasons_ThermalEmergency                      = 523,
   eQMIWDSCallManagerCallEndReasons_CallOriginationThrottled              = 524,
   eQMIWDSCallManagerCallEndReasons_ConfFailed                            = 1000,
   eQMIWDSCallManagerCallEndReasons_IncomingRejected                      = 1001,
   eQMIWDSCallManagerCallEndReasons_NoGWService                           = 1002,
   eQMIWDSCallManagerCallEndReasons_NoGPRSContext                         = 1003,
   eQMIWDSCallManagerCallEndReasons_IllegalMS                             = 1004,
   eQMIWDSCallManagerCallEndReasons_IllegalME                             = 1005,
   eQMIWDSCallManagerCallEndReasons_GPRSServicesAndNonGPRSServiceNotAllowed = 1006,
   eQMIWDSCallManagerCallEndReasons_GPRSServicesNotAllowed                = 1007,
   eQMIWDSCallManagerCallEndReasons_MSIdentityCannotBeDerivedByTheNetwork = 1008,
   eQMIWDSCallManagerCallEndReasons_ImplicitlyDetached                    = 1009,
   eQMIWDSCallManagerCallEndReasons_PLMNNotAllowed                        = 1010,
   eQMIWDSCallManagerCallEndReasons_LANotAllowed                          = 1011,
   eQMIWDSCallManagerCallEndReasons_GPRSServicesNotAllowedInThisPLMN      = 1012,
   eQMIWDSCallManagerCallEndReasons_PDPDuplicate                          = 1013,
   eQMIWDSCallManagerCallEndReasons_UERATChange                           = 1014,
   eQMIWDSCallManagerCallEndReasons_Congestion                            = 1015,
   eQMIWDSCallManagerCallEndReasons_NoPDPContextActivated                 = 1016,
   eQMIWDSCallManagerCallEndReasons_AccessClassDSACRejection              = 1017,
   eQMIWDSCallManagerCallEndReasons_CDGenOrBusy                           = 1500,
   eQMIWDSCallManagerCallEndReasons_CDBillOrAuth                          = 1501,
   eQMIWDSCallManagerCallEndReasons_ChangeHDR                             = 1502,
   eQMIWDSCallManagerCallEndReasons_ExitHDR                               = 1503,
   eQMIWDSCallManagerCallEndReasons_HDRNoSession                          = 1504,
   eQMIWDSCallManagerCallEndReasons_HDROrigDuringGPSFix                   = 1505,
   eQMIWDSCallManagerCallEndReasons_HDRCSTimeout                          = 1506,
   eQMIWDSCallManagerCallEndReasons_HDRReleasedByCM                       = 1507,
   eQMIWDSCallManagerCallEndReasons_NoHybridHDRService                    = 1510,
   eQMIWDSCallManagerCallEndReasons_ClientEnd                             = 2000,
   eQMIWDSCallManagerCallEndReasons_NoService                             = 2001,
   eQMIWDSCallManagerCallEndReasons_Fade                                  = 2002,
   eQMIWDSCallManagerCallEndReasons_NormalRelease                         = 2003,
   eQMIWDSCallManagerCallEndReasons_AccessInProgress                      = 2004,
   eQMIWDSCallManagerCallEndReasons_AccessFail                            = 2005,
   eQMIWDSCallManagerCallEndReasons_RedirectOrHandoff                     = 2006,
   eQMIWDSCallManagerCallEndReasons_Offline                               = 2500,
   eQMIWDSCallManagerCallEndReasons_EmergencyMode                         = 2501,
   eQMIWDSCallManagerCallEndReasons_PhoneInUse                            = 2502,
   eQMIWDSCallManagerCallEndReasons_InvalidMode                           = 2503,
   eQMIWDSCallManagerCallEndReasons_InvalidSIMState                       = 2504,
   eQMIWDSCallManagerCallEndReasons_NoCollocHDR                           = 2505,
   eQMIWDSCallManagerCallEndReasons_CallControlRejected                   = 2506,
};

// Enum to describe QMI WDS Call Types
enum eQMIWDSCallTypes:UINT8
{
   eQMIWDSCallTypes_Laptop                                                = 0,
   eQMIWDSCallTypes_Embedded                                              = 1,
};

// Enum to describe QMI WDS DUN Control Events
enum eQMIWDSDUNControlEvents:UINT8
{
   eQMIWDSDUNControlEvents_DUNCall                                        = 1,
   eQMIWDSDUNControlEvents_Entitlement                                    = 2,
   eQMIWDSDUNControlEvents_SilentRedial                                   = 3,
};

// Enum to describe QMI WDS DUN Control Preferences
enum eQMIWDSDUNControlPreferences:UINT8
{
   eQMIWDSDUNControlPreferences_RelinquishDUNControl                      = 0,
   eQMIWDSDUNControlPreferences_ExerciseDUNConrol                         = 1,
};

// Enum to describe QMI WDS Data Call Status
enum eQMIWDSDataCallStatus:UINT8
{
   eQMIWDSDataCallStatus_Unknown                                          = 0,
   eQMIWDSDataCallStatus_Activated                                        = 1,
   eQMIWDSDataCallStatus_Terminated                                       = 2,
};

// Enum to describe QMI WDS Data Call Types
enum eQMIWDSDataCallTypes:UINT8
{
   eQMIWDSDataCallTypes_Unknown                                           = 0,
   eQMIWDSDataCallTypes_Embedded                                          = 1,
   eQMIWDSDataCallTypes_Tethered                                          = 2,
   eQMIWDSDataCallTypes_ModemEmbedded                                     = 3,
};

// Enum to describe QMI WDS Data Mode
enum eQMIWDSDataMode:UINT8
{
   eQMIWDSDataMode_CDMAOrHDR                                              = 0,
   eQMIWDSDataMode_CDMAOnly                                               = 1,
   eQMIWDSDataMode_HDROnly                                                = 2,
};

// Enum to describe QMI WDS Data Rate
enum eQMIWDSDataRate:UINT8
{
   eQMIWDSDataRate_LowSO15Only                                            = 0,
   eQMIWDSDataRate_MediumSO33PlusLowRSCH                                  = 1,
   eQMIWDSDataRate_HighSO33PlusHighRSCH                                   = 2,
};

// Enum to describe QMI WDS Data System Network Types
enum eQMIWDSDataSystemNetworkTypes:UINT8
{
   eQMIWDSDataSystemNetworkTypes_3GPP                                     = 0,
   eQMIWDSDataSystemNetworkTypes_3GPP2                                    = 1,
};

// Enum to describe QMI WDS Data Systems
enum eQMIWDSDataSystems:UINT32
{
   eQMIWDSDataSystems_Unknown                                             = 0,
   eQMIWDSDataSystems_CDMA1x                                              = 1,
   eQMIWDSDataSystems_CDMA1xEVDO                                          = 2,
   eQMIWDSDataSystems_GPRS                                                = 3,
   eQMIWDSDataSystems_WCDMA                                               = 4,
   eQMIWDSDataSystems_LTE                                                 = 5,
   eQMIWDSDataSystems_TDSCDMA                                             = 6,
};

// Enum to describe QMI WDS EHRPD Call End Reason
enum eQMIWDSEHRPDCallEndReason:UINT16
{
   eQMIWDSEHRPDCallEndReason_SubsLimitedToV4                              = 1,
   eQMIWDSEHRPDCallEndReason_SubsLimitedToV6                              = 2,
   eQMIWDSEHRPDCallEndReason_VSNCPTimeout                                 = 4,
   eQMIWDSEHRPDCallEndReason_VSNCPFailure                                 = 5,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IGeneralError                      = 6,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IUnauthAPN                         = 7,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IPDNLimit                          = 8,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2INoPDNGW                           = 9,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IPDNGWUnreach                      = 10,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IPDNGWRejected                     = 11,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IInsufficientParam                 = 12,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IResourceUnavailable               = 13,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IAdminProhibited                   = 14,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IPDNIDInUse                        = 15,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2ISubscriberLimitation              = 16,
   eQMIWDSEHRPDCallEndReason_VSNCP3GPP2IPDNExistsForAPN                   = 17,
};

// Enum to describe QMI WDS EMBMS Error Codes
enum eQMIWDSEMBMSErrorCodes:UINT16
{
   eQMIWDSEMBMSErrorCodes_NotSupported                                    = 108,
   eQMIWDSEMBMSErrorCodes_ActivationInProgress                            = 111,
   eQMIWDSEMBMSErrorCodes_Invalid                                         = 124,
   eQMIWDSEMBMSErrorCodes_DeactivationInProgress                          = 203,
};

// Enum to describe QMI WDS EMBMS List Types
enum eQMIWDSEMBMSListTypes:UINT8
{
   eQMIWDSEMBMSListTypes_Active                                           = 0,
   eQMIWDSEMBMSListTypes_Available                                        = 1,
   eQMIWDSEMBMSListTypes_OOSWarning                                       = 2,
};

// Enum to describe QMI WDS EMBMS Operation Status
enum eQMIWDSEMBMSOperationStatus:UINT32
{
   eQMIWDSEMBMSOperationStatus_Success                                    = 0,
   eQMIWDSEMBMSOperationStatus_RadioConfigFailure                         = 65536,
   eQMIWDSEMBMSOperationStatus_ChannelUnavailable                         = 65537,
   eQMIWDSEMBMSOperationStatus_EMBMBSNotEnabled                           = 65538,
   eQMIWDSEMBMSOperationStatus_OutOfCoverage                              = 65539,
};

// Enum to describe QMI WDS Extended Error Code
enum eQMIWDSExtendedErrorCode:UINT16
{
   eQMIWDSExtendedErrorCode_Failure                                       = 1,
   eQMIWDSExtendedErrorCode_InvalidHandle                                 = 2,
   eQMIWDSExtendedErrorCode_InvalidOperation                              = 3,
   eQMIWDSExtendedErrorCode_InvalidProfileType                            = 4,
   eQMIWDSExtendedErrorCode_InvalidProfileNumber                          = 5,
   eQMIWDSExtendedErrorCode_InvalidIdentifier                             = 6,
   eQMIWDSExtendedErrorCode_InvalidArgument                               = 7,
   eQMIWDSExtendedErrorCode_NotInitialized                                = 8,
   eQMIWDSExtendedErrorCode_InvalidLength                                 = 9,
   eQMIWDSExtendedErrorCode_ListEnd                                       = 10,
   eQMIWDSExtendedErrorCode_InvalidSubscriptionID                         = 11,
   eQMIWDSExtendedErrorCode_InvalidProfileFamily                          = 12,
   eQMIWDSExtendedErrorCode_3GPPInvalidProfileFamily                      = 4097,
   eQMIWDSExtendedErrorCode_3GPPAccessError                               = 4098,
   eQMIWDSExtendedErrorCode_3GPPContextNotDefined                         = 4099,
   eQMIWDSExtendedErrorCode_3GPPValidFlagNotSet                           = 4100,
   eQMIWDSExtendedErrorCode_3GPPReadOnlyFlagSet                           = 4101,
   eQMIWDSExtendedErrorCode_3GPPErrorMaxProfileNumber                     = 4102,
   eQMIWDSExtendedErrorCode_3GPP2ErrorInvalidIdentifierForProfile         = 4353,
   eQMIWDSExtendedErrorCode_3GPP2ErrorProfileLimitReached                 = 4354,
};

// Enum to describe QMI WDS Extended Tech Prefs
enum eQMIWDSExtendedTechPrefs:UINT16
{
   eQMIWDSExtendedTechPrefs_CDMA                                          = 32769,
   eQMIWDSExtendedTechPrefs_UMTS                                          = 32772,
   eQMIWDSExtendedTechPrefs_EPC                                           = 34944,
   eQMIWDSExtendedTechPrefs_EMBMS                                         = 34946,
   eQMIWDSExtendedTechPrefs_ModemLinkLocal                                = 34952,
};

// Enum to describe QMI WDS IP Families
enum eQMIWDSIPFamilies:UINT8
{
   eQMIWDSIPFamilies_IPv4                                                 = 4,
   eQMIWDSIPFamilies_IPv6                                                 = 6,
   eQMIWDSIPFamilies_Unspecified                                          = 8,
};

// Enum to describe QMI WDS IP Version
enum eQMIWDSIPVersion:UINT8
{
   eQMIWDSIPVersion_IPv4                                                  = 4,
   eQMIWDSIPVersion_IPv6                                                  = 6,
};

// Enum to describe QMI WDS IPv6 Call End Reason
enum eQMIWDSIPv6CallEndReason:UINT16
{
   eQMIWDSIPv6CallEndReason_PrefixUnavailable                             = 1,
   eQMIWDSIPv6CallEndReason_IPv6HRPDDisabled                              = 2,
};

// Enum to describe QMI WDS Internal Call End Reasons
enum eQMIWDSInternalCallEndReasons:UINT16
{
   eQMIWDSInternalCallEndReasons_Internal                                 = 201,
   eQMIWDSInternalCallEndReasons_CallEnded                                = 202,
   eQMIWDSInternalCallEndReasons_InternalUnknownCauseCode                 = 203,
   eQMIWDSInternalCallEndReasons_UnknownCauseCode                         = 204,
   eQMIWDSInternalCallEndReasons_CloseInProgress                          = 205,
   eQMIWDSInternalCallEndReasons_NWInitiatedTermination                   = 206,
   eQMIWDSInternalCallEndReasons_AppPreempted                             = 207,
   eQMIWDSInternalCallEndReasons_PDNIPv4CallDisallowed                    = 208,
   eQMIWDSInternalCallEndReasons_PDNIPv4CallThrottled                     = 209,
   eQMIWDSInternalCallEndReasons_PDNIPv6CallDisallowed                    = 210,
   eQMIWDSInternalCallEndReasons_ModemRestart                             = 212,
   eQMIWDSInternalCallEndReasons_PDPPPPNotSupported                       = 213,
   eQMIWDSInternalCallEndReasons_UnpreferredRAT                           = 214,
   eQMIWDSInternalCallEndReasons_PhysicalLinkCloseInProgress              = 215,
   eQMIWDSInternalCallEndReasons_APNPendingHandover                       = 216,
   eQMIWDSInternalCallEndReasons_ProfileBearerIncompatible                = 217,
   eQMIWDSInternalCallEndReasons_MMGDSICardEvent                          = 218,
   eQMIWDSInternalCallEndReasons_LPMOrPowerDown                           = 219,
   eQMIWDSInternalCallEndReasons_APNDisabled                              = 220,
   eQMIWDSInternalCallEndReasons_MPITExpired                              = 221,
   eQMIWDSInternalCallEndReasons_IPv6AddressTransferFailed                = 222,
   eQMIWDSInternalCallEndReasons_TRATSwapFailed                           = 223,
};

// Enum to describe QMI WDS LTE IP Types
enum eQMIWDSLTEIPTypes:UINT8
{
   eQMIWDSLTEIPTypes_IPv4                                                 = 0,
   eQMIWDSLTEIPTypes_IPv6                                                 = 1,
   eQMIWDSLTEIPTypes_IPv4OrIPv6                                           = 2,
};

// Enum to describe QMI WDS Mobile IP Call End Reasons
enum eQMIWDSMobileIPCallEndReasons:UINT16
{
   eQMIWDSMobileIPCallEndReasons_FAUnspecified                            = 64,
   eQMIWDSMobileIPCallEndReasons_FAAdministrativelyProhibited             = 65,
   eQMIWDSMobileIPCallEndReasons_FAInsufficientResources                  = 66,
   eQMIWDSMobileIPCallEndReasons_FAMobileNodeAuthenticationFailure        = 67,
   eQMIWDSMobileIPCallEndReasons_FAHAAuthenticationFailure                = 68,
   eQMIWDSMobileIPCallEndReasons_FARequestedLifetimeTooLong               = 69,
   eQMIWDSMobileIPCallEndReasons_FAMalformedRequest                       = 70,
   eQMIWDSMobileIPCallEndReasons_FAMalformedReply                         = 71,
   eQMIWDSMobileIPCallEndReasons_FAEncapsulationUnavailable               = 72,
   eQMIWDSMobileIPCallEndReasons_FAVJHCUnavailable                        = 73,
   eQMIWDSMobileIPCallEndReasons_FAReverseTunnelUnavailable               = 74,
   eQMIWDSMobileIPCallEndReasons_FAReverseTunnelIsMandatoryAndTBitIsNotSet = 75,
   eQMIWDSMobileIPCallEndReasons_FADeliveryStyleNotSupported              = 79,
   eQMIWDSMobileIPCallEndReasons_FAMissingNAI                             = 97,
   eQMIWDSMobileIPCallEndReasons_FAMissingHA                              = 98,
   eQMIWDSMobileIPCallEndReasons_FAMissingHomeAddress                     = 99,
   eQMIWDSMobileIPCallEndReasons_FAUnknownChallenge                       = 104,
   eQMIWDSMobileIPCallEndReasons_FAMissingChallenge                       = 105,
   eQMIWDSMobileIPCallEndReasons_FAStaleChallenge                         = 106,
   eQMIWDSMobileIPCallEndReasons_HAReasonUnspecified                      = 128,
   eQMIWDSMobileIPCallEndReasons_HAAdministrativelyProhibited             = 129,
   eQMIWDSMobileIPCallEndReasons_HAInsufficientResources                  = 130,
   eQMIWDSMobileIPCallEndReasons_HAMobileNodeAuthenticationFailure        = 131,
   eQMIWDSMobileIPCallEndReasons_HAFAAuthenticationFailure                = 132,
   eQMIWDSMobileIPCallEndReasons_HARegistrationIDMismatch                 = 133,
   eQMIWDSMobileIPCallEndReasons_HAMalformedRequest                       = 134,
   eQMIWDSMobileIPCallEndReasons_HAUnknownHAAddress                       = 136,
   eQMIWDSMobileIPCallEndReasons_HAReverseTunnelUnavailable               = 137,
   eQMIWDSMobileIPCallEndReasons_HAReverseTunnelIsMandatoryAndTBitIsNotSet = 138,
   eQMIWDSMobileIPCallEndReasons_HAEncapsulationUnavailable               = 139,
   eQMIWDSMobileIPCallEndReasons_Unknown                                  = 65535,
};

// Enum to describe QMI WDS Network Types
enum eQMIWDSNetworkTypes:UINT8
{
   eQMIWDSNetworkTypes_Unknown                                            = 0,
   eQMIWDSNetworkTypes_CDMA                                               = 1,
   eQMIWDSNetworkTypes_UMTS                                               = 2,
};

// Enum to describe QMI WDS OOS Warning Reasons
enum eQMIWDSOOSWarningReasons:UINT32
{
   eQMIWDSOOSWarningReasons_UnicastOOS                                    = 0,
   eQMIWDSOOSWarningReasons_MulticastOOS                                  = 1,
   eQMIWDSOOSWarningReasons_Cleared                                       = 2,
};

// Enum to describe QMI WDS PDN Type
enum eQMIWDSPDNType:UINT8
{
   eQMIWDSPDNType_IPv4PDNType                                             = 0,
   eQMIWDSPDNType_IPv6PDNType                                             = 1,
   eQMIWDSPDNType_IPv4orIPv6PDNType                                       = 2,
   eQMIWDSPDNType_UnspecifiedPDNType                                      = 3,
};

// Enum to describe QMI WDS PDP Access Control Flag
enum eQMIWDSPDPAccessControlFlag:UINT8
{
   eQMIWDSPDPAccessControlFlag_PDPAccessControlNone                       = 0,
   eQMIWDSPDPAccessControlFlag_PDPAccessControlReject                     = 1,
   eQMIWDSPDPAccessControlFlag_PDPAccessControlPermission                 = 2,
};

// Enum to describe QMI WDS PDP Data Compression Type
enum eQMIWDSPDPDataCompressionType:UINT8
{
   eQMIWDSPDPDataCompressionType_Off                                      = 0,
   eQMIWDSPDPDataCompressionType_ManufacturerPreferred                    = 1,
   eQMIWDSPDPDataCompressionType_V42BIS                                   = 2,
   eQMIWDSPDPDataCompressionType_V44                                      = 3,
};

// Enum to describe QMI WDS PDP Header Compression Type
enum eQMIWDSPDPHeaderCompressionType:UINT8
{
   eQMIWDSPDPHeaderCompressionType_Off                                    = 0,
   eQMIWDSPDPHeaderCompressionType_ManufacturerPreferred                  = 1,
   eQMIWDSPDPHeaderCompressionType_RFC1144                                = 2,
   eQMIWDSPDPHeaderCompressionType_RFC2507                                = 3,
   eQMIWDSPDPHeaderCompressionType_RFC3095                                = 4,
};

// Enum to describe QMI WDS PPP Call End Reason
enum eQMIWDSPPPCallEndReason:UINT16
{
   eQMIWDSPPPCallEndReason_Timeout                                        = 1,
   eQMIWDSPPPCallEndReason_AuthenticationFailed                           = 2,
   eQMIWDSPPPCallEndReason_OptionMismatch                                 = 3,
   eQMIWDSPPPCallEndReason_PAPFailure                                     = 31,
   eQMIWDSPPPCallEndReason_CHAPFailure                                    = 32,
   eQMIWDSPPPCallEndReason_Unknown                                        = 65535,
};

// Enum to describe QMI WDS Profile Family
enum eQMIWDSProfileFamily:UINT8
{
   eQMIWDSProfileFamily_Embedded                                          = 0,
   eQMIWDSProfileFamily_TetheredSocketsFamily                             = 1,
};

// Enum to describe QMI WDS Profile Param ID
enum eQMIWDSProfileParamID:UINT32
{
   eQMIWDSProfileParamID_UMTSRequestedQoS                                 = 23,
   eQMIWDSProfileParamID_UMTSMinimumQoS                                   = 24,
   eQMIWDSProfileParamID_GPRSRequestedQoS                                 = 25,
   eQMIWDSProfileParamID_GPRSMinimumQoS                                   = 26,
   eQMIWDSProfileParamID_TFTFilterID1                                     = 50,
   eQMIWDSProfileParamID_TFTFilterID2                                     = 51,
};

// Enum to describe QMI WDS QoS Class Identifier
enum eQMIWDSQoSClassIdentifier:UINT8
{
   eQMIWDSQoSClassIdentifier_NetworkAssignQCI                             = 0,
   eQMIWDSQoSClassIdentifier_GuaranteedBitrate1                           = 1,
   eQMIWDSQoSClassIdentifier_GuaranteedBitrate2                           = 2,
   eQMIWDSQoSClassIdentifier_GuaranteedBitrate3                           = 3,
   eQMIWDSQoSClassIdentifier_GuaranteedBitrate4                           = 4,
   eQMIWDSQoSClassIdentifier_NonGuaranteedBitrate5                        = 5,
   eQMIWDSQoSClassIdentifier_NonGuaranteedBitrate6                        = 6,
   eQMIWDSQoSClassIdentifier_NonGuaranteedBitrate7                        = 7,
   eQMIWDSQoSClassIdentifier_NonGuaranteedBitrate8                        = 8,
};

// Enum to describe QMI WDS SIP/MIP Call Types
enum eQMIWDSSIPMIPCallTypes:UINT8
{
   eQMIWDSSIPMIPCallTypes_NotUp                                           = 0,
   eQMIWDSSIPMIPCallTypes_SIPUp                                           = 1,
   eQMIWDSSIPMIPCallTypes_MIPUp                                           = 2,
};

// Enum to describe QMI WDS Slot Cycle Set Results
enum eQMIWDSSlotCycleSetResults:UINT8
{
   eQMIWDSSlotCycleSetResults_Succcess                                    = 0,
   eQMIWDSSlotCycleSetResults_FailureRequestRejected                      = 1,
   eQMIWDSSlotCycleSetResults_FailureRequestFailedTX                      = 2,
   eQMIWDSSlotCycleSetResults_FailureNotSupported                         = 3,
   eQMIWDSSlotCycleSetResults_FailureNoNetwork                            = 4,
};

// Enum to describe QMI WDS Tethered Call Types
enum eQMIWDSTetheredCallTypes:UINT8
{
   eQMIWDSTetheredCallTypes_NonTethered                                   = 0,
   eQMIWDSTetheredCallTypes_RmNet                                         = 1,
   eQMIWDSTetheredCallTypes_DUN                                           = 2,
};

// Enum to describe QMI WMS ACK Failure Cause
enum eQMIWMSACKFailureCause:UINT8
{
   eQMIWMSACKFailureCause_NoNetworkResponse                               = 0,
   eQMIWMSACKFailureCause_NetworkReleasedLink                             = 1,
   eQMIWMSACKFailureCause_NotSent                                         = 2,
};

// Enum to describe QMI WMS CDMA Service Options
enum eQMIWMSCDMAServiceOptions:UINT8
{
   eQMIWMSCDMAServiceOptions_Automatic                                    = 0,
   eQMIWMSCDMAServiceOptions_SO6                                          = 6,
   eQMIWMSCDMAServiceOptions_SO14                                         = 14,
};

// Enum to describe QMI WMS Cause Codes
enum eQMIWMSCauseCodes
{
   eQMIWMSCauseCodes_AddressVacant                                        = 0,
   eQMIWMSCauseCodes_AddressTranslation                                   = 1,
   eQMIWMSCauseCodes_NetworkResourceShortage                              = 2,
   eQMIWMSCauseCodes_NetworkFailure                                       = 3,
   eQMIWMSCauseCodes_InvalidTeleserviceID                                 = 4,
   eQMIWMSCauseCodes_NetworkOther                                         = 5,
   eQMIWMSCauseCodes_NoPageResponse                                       = 32,
   eQMIWMSCauseCodes_DestinationBusy                                      = 33,
   eQMIWMSCauseCodes_DestinationNoACK                                     = 34,
   eQMIWMSCauseCodes_DestinationResourceShortage                          = 35,
   eQMIWMSCauseCodes_DeliveryPostponed                                    = 36,
   eQMIWMSCauseCodes_DestinationOutOfService                              = 37,
   eQMIWMSCauseCodes_DestinationNotAtAddress                              = 38,
   eQMIWMSCauseCodes_DestinationOther                                     = 39,
   eQMIWMSCauseCodes_RadioResourceShortage                                = 64,
   eQMIWMSCauseCodes_RadioIncompatibility                                 = 65,
   eQMIWMSCauseCodes_RadioOther                                           = 66,
   eQMIWMSCauseCodes_Encoding                                             = 96,
   eQMIWMSCauseCodes_SMSOriginationDenied                                 = 97,
   eQMIWMSCauseCodes_SMSDestinationDenied                                 = 98,
   eQMIWMSCauseCodes_SupplementarySErviceNotSupported                     = 99,
   eQMIWMSCauseCodes_SMSNotSupported                                      = 100,
   eQMIWMSCauseCodes_MissingExpectedParameter                             = 101,
   eQMIWMSCauseCodes_MissingMandatoryParameter                            = 102,
   eQMIWMSCauseCodes_UnrecognizedParameterValue                           = 103,
   eQMIWMSCauseCodes_UnexpectedParameterValue                             = 104,
   eQMIWMSCauseCodes_UserDataSizeError                                    = 105,
   eQMIWMSCauseCodes_GeneralOther                                         = 106,
};

// Enum to describe QMI WMS Delivery Failures
enum eQMIWMSDeliveryFailures:UINT8
{
   eQMIWMSDeliveryFailures_BlockedByCallControl                           = 0,
};

// Enum to describe QMI WMS Error Classes
enum eQMIWMSErrorClasses:UINT8
{
   eQMIWMSErrorClasses_Temporary                                          = 0,
   eQMIWMSErrorClasses_Permanent                                          = 1,
};

// Enum to describe QMI WMS Error Classes 2
enum eQMIWMSErrorClasses2:UINT8
{
   eQMIWMSErrorClasses2_Temporary                                         = 2,
   eQMIWMSErrorClasses2_Permanent                                         = 3,
};

// Enum to describe QMI WMS GSM/WCDMA Domains
enum eQMIWMSGSMWCDMADomains:UINT8
{
   eQMIWMSGSMWCDMADomains_CSPreferred                                     = 0,
   eQMIWMSGSMWCDMADomains_PSPreferred                                     = 1,
   eQMIWMSGSMWCDMADomains_CSOnly                                          = 2,
   eQMIWMSGSMWCDMADomains_PSOnly                                          = 3,
};

// Enum to describe QMI WMS LTE Domains
enum eQMIWMSLTEDomains:UINT8
{
   eQMIWMSLTEDomains_None                                                 = 0,
   eQMIWMSLTEDomains_IMS                                                  = 1,
};

// Enum to describe QMI WMS Language
enum eQMIWMSLanguage:UINT16
{
   eQMIWMSLanguage_Unknown                                                = 0,
   eQMIWMSLanguage_English                                                = 1,
   eQMIWMSLanguage_French                                                 = 2,
   eQMIWMSLanguage_Spanish                                                = 3,
   eQMIWMSLanguage_Japanese                                               = 4,
   eQMIWMSLanguage_Korean                                                 = 5,
   eQMIWMSLanguage_Chinese                                                = 6,
   eQMIWMSLanguage_Hebrew                                                 = 7,
};

// Enum to describe QMI WMS Message Classes
enum eQMIWMSMessageClasses:UINT8
{
   eQMIWMSMessageClasses_Class0                                           = 0,
   eQMIWMSMessageClasses_Class1                                           = 1,
   eQMIWMSMessageClasses_Class2                                           = 2,
   eQMIWMSMessageClasses_Class3                                           = 3,
   eQMIWMSMessageClasses_ClassNone                                        = 4,
   eQMIWMSMessageClasses_ClassCDMA                                        = 5,
};

// Enum to describe QMI WMS Message Delivery Failure Type
enum eQMIWMSMessageDeliveryFailureType:UINT8
{
   eQMIWMSMessageDeliveryFailureType_Temporary                            = 0,
   eQMIWMSMessageDeliveryFailureType_Permanent                            = 1,
};

// Enum to describe QMI WMS Message Formats
enum eQMIWMSMessageFormats:UINT8
{
   eQMIWMSMessageFormats_CDMA                                             = 0,
   eQMIWMSMessageFormats_AnalogCLIUnsupported                             = 1,
   eQMIWMSMessageFormats_AnalogVoiceMailUnsupported                       = 2,
   eQMIWMSMessageFormats_AnalogWMSUnsupported                             = 3,
   eQMIWMSMessageFormats_AnalogAWIWMSUnsupported                          = 4,
   eQMIWMSMessageFormats_MWIUnsupported                                   = 5,
   eQMIWMSMessageFormats_GSMWCDMAPP                                       = 6,
   eQMIWMSMessageFormats_GSMWCDMABC                                       = 7,
   eQMIWMSMessageFormats_MWI                                              = 8,
};

// Enum to describe QMI WMS Message Protocols
enum eQMIWMSMessageProtocols:UINT8
{
   eQMIWMSMessageProtocols_CDMA                                           = 0,
   eQMIWMSMessageProtocols_GSMWCDMAUnsupported                            = 1,
};

// Enum to describe QMI WMS Message Tags
enum eQMIWMSMessageTags:UINT8
{
   eQMIWMSMessageTags_MTRead                                              = 0,
   eQMIWMSMessageTags_MTNotRead                                           = 1,
   eQMIWMSMessageTags_MOSend                                              = 2,
   eQMIWMSMessageTags_MONotSent                                           = 3,
};

// Enum to describe QMI WMS Message Types
enum eQMIWMSMessageTypes:UINT8
{
   eQMIWMSMessageTypes_PointToPoint                                       = 0,
   eQMIWMSMessageTypes_Broadcast                                          = 1,
};

// Enum to describe QMI WMS Network Registration Status
enum eQMIWMSNetworkRegistrationStatus:UINT8
{
   eQMIWMSNetworkRegistrationStatus_NoService                             = 0,
   eQMIWMSNetworkRegistrationStatus_InProgress                            = 1,
   eQMIWMSNetworkRegistrationStatus_Failed                                = 2,
   eQMIWMSNetworkRegistrationStatus_LimitedService                        = 3,
   eQMIWMSNetworkRegistrationStatus_FullService                           = 4,
};

// Enum to describe QMI WMS Notification Type
enum eQMIWMSNotificationType:UINT8
{
   eQMIWMSNotificationType_Primary                                        = 0,
   eQMIWMSNotificationType_SecondaryGSM                                   = 1,
   eQMIWMSNotificationType_SecondaryUMTS                                  = 2,
};

// Enum to describe QMI WMS Protocol Identifier Data
enum eQMIWMSProtocolIdentifierData:UINT8
{
   eQMIWMSProtocolIdentifierData_Default                                  = 0,
   eQMIWMSProtocolIdentifierData_Implicit                                 = 32,
   eQMIWMSProtocolIdentifierData_Telex                                    = 33,
   eQMIWMSProtocolIdentifierData_G3Fax                                    = 34,
   eQMIWMSProtocolIdentifierData_G4Fax                                    = 35,
   eQMIWMSProtocolIdentifierData_VoicePhone                               = 36,
   eQMIWMSProtocolIdentifierData_Ermes                                    = 37,
   eQMIWMSProtocolIdentifierData_NATPaging                                = 38,
   eQMIWMSProtocolIdentifierData_Videotex                                 = 39,
   eQMIWMSProtocolIdentifierData_TeltexUnspecified                        = 40,
   eQMIWMSProtocolIdentifierData_TeltexPSPDN                              = 41,
   eQMIWMSProtocolIdentifierData_TeltexCSPDN                              = 42,
   eQMIWMSProtocolIdentifierData_TeltexPSTN                               = 43,
   eQMIWMSProtocolIdentifierData_TeltexISDN                               = 44,
   eQMIWMSProtocolIdentifierData_UCI                                      = 45,
   eQMIWMSProtocolIdentifierData_MessageHandling                          = 48,
   eQMIWMSProtocolIdentifierData_X400                                     = 49,
   eQMIWMSProtocolIdentifierData_InternetEMail                            = 50,
   eQMIWMSProtocolIdentifierData_SCSpecific1                              = 56,
   eQMIWMSProtocolIdentifierData_SCSpecific2                              = 57,
   eQMIWMSProtocolIdentifierData_SCSpecific3                              = 58,
   eQMIWMSProtocolIdentifierData_SCSpecific4                              = 59,
   eQMIWMSProtocolIdentifierData_SCSpecific5                              = 60,
   eQMIWMSProtocolIdentifierData_SCSpecific6                              = 61,
   eQMIWMSProtocolIdentifierData_SCSpecific7                              = 62,
   eQMIWMSProtocolIdentifierData_GSMUMTS                                  = 63,
   eQMIWMSProtocolIdentifierData_SMType0                                  = 64,
   eQMIWMSProtocolIdentifierData_ReplaceSM1                               = 65,
   eQMIWMSProtocolIdentifierData_ReplaceSM2                               = 66,
   eQMIWMSProtocolIdentifierData_ReplaceSM3                               = 67,
   eQMIWMSProtocolIdentifierData_ReplaceSM4                               = 68,
   eQMIWMSProtocolIdentifierData_ReplaceSM5                               = 69,
   eQMIWMSProtocolIdentifierData_ReplaceSM6                               = 70,
   eQMIWMSProtocolIdentifierData_ReplaceSM7                               = 71,
   eQMIWMSProtocolIdentifierData_ReturnCall                               = 95,
   eQMIWMSProtocolIdentifierData_ANSI136RData                             = 124,
   eQMIWMSProtocolIdentifierData_MEDataDownload                           = 125,
   eQMIWMSProtocolIdentifierData_MEDepersonalizationShortMessage          = 126,
   eQMIWMSProtocolIdentifierData_SIMDataDownload                          = 127,
};

// Enum to describe QMI WMS RP Cause Codes
enum eQMIWMSRPCauseCodes
{
   eQMIWMSRPCauseCodes_UnassignedNumber                                   = 1,
   eQMIWMSRPCauseCodes_OperatorDeterminedBarring                          = 8,
   eQMIWMSRPCauseCodes_CallBarred                                         = 10,
   eQMIWMSRPCauseCodes_Reserved                                           = 11,
   eQMIWMSRPCauseCodes_ShortMessageTransferRejected                       = 21,
   eQMIWMSRPCauseCodes_MemoryCapacityExceeded                             = 22,
   eQMIWMSRPCauseCodes_DestinationOutOfOrder                              = 27,
   eQMIWMSRPCauseCodes_UnidentifiedSubscriber                             = 28,
   eQMIWMSRPCauseCodes_FacilityRejected                                   = 29,
   eQMIWMSRPCauseCodes_UnknownSubscriber                                  = 30,
   eQMIWMSRPCauseCodes_NetworkOutOfOrder                                  = 38,
   eQMIWMSRPCauseCodes_TemporaryFailure                                   = 41,
   eQMIWMSRPCauseCodes_Congestion                                         = 42,
   eQMIWMSRPCauseCodes_UnspecifiedResourcesUnavailable                    = 47,
   eQMIWMSRPCauseCodes_RequestedFacilityNotSubscribed                     = 50,
   eQMIWMSRPCauseCodes_RequestedFacilityNotImplemented                    = 69,
   eQMIWMSRPCauseCodes_InvalidShortMessageTransferValue                   = 81,
   eQMIWMSRPCauseCodes_SemanticallyIncorrectMessage                       = 95,
   eQMIWMSRPCauseCodes_InvalidManadatoryInfo                              = 96,
   eQMIWMSRPCauseCodes_MessageTypeNotImplemented                          = 97,
   eQMIWMSRPCauseCodes_MessageNotCompatibleWithSMS                        = 98,
   eQMIWMSRPCauseCodes_InfoElementNotImplemented                          = 99,
   eQMIWMSRPCauseCodes_UnspecifiedProtocolError                           = 111,
   eQMIWMSRPCauseCodes_UnspecifiedInterworking                            = 127,
};

// Enum to describe QMI WMS Receipt Actions
enum eQMIWMSReceiptActions:UINT8
{
   eQMIWMSReceiptActions_Discard                                          = 0,
   eQMIWMSReceiptActions_StoreAndNotify                                   = 1,
   eQMIWMSReceiptActions_TransferOnly                                     = 2,
   eQMIWMSReceiptActions_TransfterAndAcknowledge                          = 3,
};

// Enum to describe QMI WMS Route Values
enum eQMIWMSRouteValues:UINT8
{
   eQMIWMSRouteValues_Discard                                             = 0,
   eQMIWMSRouteValues_StoreAndNotify                                      = 1,
   eQMIWMSRouteValues_TransferOnly                                        = 2,
   eQMIWMSRouteValues_TransferAndAcknowledge                              = 3,
   eQMIWMSRouteValues_Unknown                                             = 255,
};

// Enum to describe QMI WMS SMS Call Status
enum eQMIWMSSMSCallStatus:UINT8
{
   eQMIWMSSMSCallStatus_Incoming                                          = 0,
   eQMIWMSSMSCallStatus_Connected                                         = 1,
   eQMIWMSSMSCallStatus_Aborted                                           = 2,
   eQMIWMSSMSCallStatus_Disconnected                                      = 3,
   eQMIWMSSMSCallStatus_Connecting                                        = 4,
};

// Enum to describe QMI WMS SMS Message Mode
enum eQMIWMSSMSMessageMode:UINT8
{
   eQMIWMSSMSMessageMode_GSMWCDMA                                         = 1,
};

// Enum to describe QMI WMS Service Categories
enum eQMIWMSServiceCategories
{
   eQMIWMSServiceCategories_Unknown                                       = 0,
   eQMIWMSServiceCategories_EmergencyBroadcast                            = 1,
   eQMIWMSServiceCategories_Administrative                                = 2,
   eQMIWMSServiceCategories_Maintenance                                   = 3,
   eQMIWMSServiceCategories_GeneralNewsLocal                              = 4,
   eQMIWMSServiceCategories_GeneralNewsRegional                           = 5,
   eQMIWMSServiceCategories_GeneralNewsNational                           = 6,
   eQMIWMSServiceCategories_GeneralNewsInternational                      = 7,
   eQMIWMSServiceCategories_BusinessNewsLocal                             = 8,
   eQMIWMSServiceCategories_BusinessNewsRegional                          = 9,
   eQMIWMSServiceCategories_BusinessNewsNational                          = 10,
   eQMIWMSServiceCategories_BusinessNewsInternational                     = 11,
   eQMIWMSServiceCategories_SportsNewsLocal                               = 12,
   eQMIWMSServiceCategories_SportsNewsRegional                            = 13,
   eQMIWMSServiceCategories_SportsNewsNational                            = 14,
   eQMIWMSServiceCategories_SportsNewsInternational                       = 15,
   eQMIWMSServiceCategories_EntertainmentNewsLocal                        = 16,
   eQMIWMSServiceCategories_EntertainmentNewsRegional                     = 17,
   eQMIWMSServiceCategories_EntertainmentNewsNational                     = 18,
   eQMIWMSServiceCategories_EntertainmentNewsInternational                = 19,
   eQMIWMSServiceCategories_LocalWeather                                  = 20,
   eQMIWMSServiceCategories_AreaTrafficReports                            = 21,
   eQMIWMSServiceCategories_LocalAirplaneFlightSchedules                  = 22,
   eQMIWMSServiceCategories_Restaurants                                   = 23,
   eQMIWMSServiceCategories_Lodgings                                      = 24,
   eQMIWMSServiceCategories_RetailDirectory                               = 25,
   eQMIWMSServiceCategories_Advertisements                                = 26,
   eQMIWMSServiceCategories_StockQuotes                                   = 27,
   eQMIWMSServiceCategories_EmploymentOpportunities                       = 28,
   eQMIWMSServiceCategories_MedicalHealthHospitals                        = 29,
   eQMIWMSServiceCategories_TechnologyNews                                = 30,
   eQMIWMSServiceCategories_Multicategory                                 = 31,
   eQMIWMSServiceCategories_CardApplicationToolkitProtocolTeleservice     = 32,
   eQMIWMSServiceCategories_PresidentialLevelAlert                        = 4096,
   eQMIWMSServiceCategories_ExtremeThreattoLifeandProperty                = 4097,
   eQMIWMSServiceCategories_SevereThreattoLifeandProperty                 = 4098,
   eQMIWMSServiceCategories_AMBERChildAbductionEmergency                  = 4099,
   eQMIWMSServiceCategories_CMASTestMessage                               = 4100,
};

// Enum to describe QMI WMS Service Ready Status
enum eQMIWMSServiceReadyStatus:UINT32
{
   eQMIWMSServiceReadyStatus_SMSServiceNotReady                           = 0,
   eQMIWMSServiceReadyStatus_3GPPSMSServiceReady                          = 1,
   eQMIWMSServiceReadyStatus_3GPP2SMSServiceReady                         = 2,
   eQMIWMSServiceReadyStatus_3GPPAnd3GPP2SMSServicesReady                 = 3,
};

// Enum to describe QMI WMS Storage Types
enum eQMIWMSStorageTypes:UINT8
{
   eQMIWMSStorageTypes_UIM                                                = 0,
   eQMIWMSStorageTypes_NV                                                 = 1,
   eQMIWMSStorageTypes_Unknown                                            = 255,
};

// Enum to describe QMI WMS Subscription Type
enum eQMIWMSSubscriptionType:UINT8
{
   eQMIWMSSubscriptionType_PrimarySubscription                            = 0,
   eQMIWMSSubscriptionType_SecondarySubscription                          = 1,
};

// Enum to describe QMI WMS TP Cause Codes
enum eQMIWMSTPCauseCodes
{
   eQMIWMSTPCauseCodes_TelematicInterworkingNotSupported                  = 128,
   eQMIWMSTPCauseCodes_ShortMessageType0NotSupported                      = 129,
   eQMIWMSTPCauseCodes_CannotReplaceShortMessage                          = 130,
   eQMIWMSTPCauseCodes_UnspecifiedPIDError                                = 143,
   eQMIWMSTPCauseCodes_DataCodingSchemeNotSupported                       = 144,
   eQMIWMSTPCauseCodes_MessageClassNotSupported                           = 145,
   eQMIWMSTPCauseCodes_UnspecifiedDCSError                                = 159,
   eQMIWMSTPCauseCodes_CommandCannotBeActioned                            = 160,
   eQMIWMSTPCauseCodes_CommandUnsupported                                 = 161,
   eQMIWMSTPCauseCodes_UnspecifiedCommandError                            = 175,
   eQMIWMSTPCauseCodes_TPDUNotSupported                                   = 176,
   eQMIWMSTPCauseCodes_SCBusy                                             = 192,
   eQMIWMSTPCauseCodes_NoSCSubscription                                   = 193,
   eQMIWMSTPCauseCodes_SCSystemFailure                                    = 194,
   eQMIWMSTPCauseCodes_InvalidSMEAddress                                  = 195,
   eQMIWMSTPCauseCodes_DestinationSMEBarred                               = 196,
   eQMIWMSTPCauseCodes_SMRejectedOrDuplicate                              = 197,
   eQMIWMSTPCauseCodes_VPFNotSupported                                    = 198,
   eQMIWMSTPCauseCodes_VPNotSupported                                     = 199,
   eQMIWMSTPCauseCodes_SIMSMSStorageFull                                  = 208,
   eQMIWMSTPCauseCodes_NoSIMSMSStorageCapability                          = 209,
   eQMIWMSTPCauseCodes_ErrorInMS                                          = 210,
   eQMIWMSTPCauseCodes_MemoryCapacityExceeded                             = 211,
   eQMIWMSTPCauseCodes_SIMApplicationToolkitBusy                          = 212,
   eQMIWMSTPCauseCodes_SIMDataDownloadError                               = 213,
   eQMIWMSTPCauseCodes_UnspecifiedError                                   = 255,
};

// Enum to describe QMI WMS Transport Capability
enum eQMIWMSTransportCapability:UINT8
{
   eQMIWMSTransportCapability_CDMA                                        = 0,
   eQMIWMSTransportCapability_GW                                          = 1,
};

// Enum to describe QMI WMS Transport Type
enum eQMIWMSTransportType:UINT8
{
   eQMIWMSTransportType_IMS                                               = 0,
};

// Enum to describe QMI WMS Waiting Message Type
enum eQMIWMSWaitingMessageType:UINT8
{
   eQMIWMSWaitingMessageType_Voicemail                                    = 0,
   eQMIWMSWaitingMessageType_Fax                                          = 1,
   eQMIWMSWaitingMessageType_Email                                        = 2,
   eQMIWMSWaitingMessageType_Other                                        = 3,
   eQMIWMSWaitingMessageType_Videomail                                    = 4,
};

