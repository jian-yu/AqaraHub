#include "znp/znp.h"

namespace znp {
std::ostream& operator<<(std::ostream& stream, const ZnpSubsystem& subsys) {
  switch (subsys) {
    case ZnpSubsystem::RPC_Error:
      return stream << "RPC_Error";
    case ZnpSubsystem::SYS:
      return stream << "SYS";
    case ZnpSubsystem::MAC:
      return stream << "MAC";
    case ZnpSubsystem::NWK:
      return stream << "NWK";
    case ZnpSubsystem::AF:
      return stream << "AF";
    case ZnpSubsystem::ZDO:
      return stream << "ZDO";
    case ZnpSubsystem::SAPI:
      return stream << "SAPI";
    case ZnpSubsystem::UTIL:
      return stream << "UTIL";
    case ZnpSubsystem::DEBUG:
      return stream << "DEBUG";
    case ZnpSubsystem::APP:
      return stream << "APP";
    default:
      return stream << "UNK(" << (int)subsys << ")";
  }
}

std::ostream& operator<<(std::ostream& stream, const ZnpCommandType& type) {
  switch (type) {
    case ZnpCommandType::POLL:
      return stream << "POLL";
    case ZnpCommandType::SREQ:
      return stream << "SREQ";
    case ZnpCommandType::AREQ:
      return stream << "AREQ";
    case ZnpCommandType::SRSP:
      return stream << "SRSP";
    default:
      return stream << "UNK(" << (int)type << ")";
  }
}

std::ostream& operator<<(std::ostream& stream, AfCommand command) {
  switch (command) {
    case AfCommand::REGISTER:
      return stream << "REGISTER";
    case AfCommand::DATA_REQUEST:
      return stream << "DATA_REQUEST";
    case AfCommand::DATA_REQUEST_EXT:
      return stream << "DATA_REQUEST_EXT";
    case AfCommand::DATA_REQUEST_SRC_RTG:
      return stream << "DATA_REQUEST_SRC_RTG";
    case AfCommand::INTER_PAN_CTL:
      return stream << "INTER_PAN_CTL";
    case AfCommand::DATA_STORE:
      return stream << "DATA_STORE";
    case AfCommand::DATA_RETRIEVE:
      return stream << "DATA_RETRIEVE";
    case AfCommand::APSF_CONFIG_SET:
      return stream << "APSF_CONFIG_SET";
    case AfCommand::DATA_CONFIRM:
      return stream << "DATA_CONFIRM";
    case AfCommand::REFLECT_ERROR:
      return stream << "REFLECT_ERROR";
    case AfCommand::INCOMING_MSG:
      return stream << "INCOMING_MSG";
    case AfCommand::INCOMING_MSG_EXT:
      return stream << "INCOMING_MSG_EXT";
    default:
      return stream << "AfCommand(" << (unsigned int)command << ")";
  }
}

std::ostream& operator<<(std::ostream& stream, ZdoCommand command) {
  switch (command) {
    case ZdoCommand::NWK_ADDR_REQ:
      return stream << "NWK_ADDR_REQ";
    case ZdoCommand::IEEE_ADDR_REQ:
      return stream << "IEEE_ADDR_REQ";
    case ZdoCommand::NODE_DESC_REQ:
      return stream << "NODE_DESC_REQ";
    case ZdoCommand::POWER_DESC_REQ:
      return stream << "POWER_DESC_REQ";
    case ZdoCommand::SIMPLE_DESC_REQ:
      return stream << "SIMPLE_DESC_REQ";
    case ZdoCommand::ACTIVE_EP_REQ:
      return stream << "ACTIVE_EP_REQ";
    case ZdoCommand::MATCH_DESC_REQ:
      return stream << "MATCH_DESC_REQ";
    case ZdoCommand::COMPLEX_DESC_REQ:
      return stream << "COMPLEX_DESC_REQ";
    case ZdoCommand::USER_DESC_REQ:
      return stream << "USER_DESC_REQ";
    case ZdoCommand::DEVICE_ANNCE:
      return stream << "DEVICE_ANNCE";
    case ZdoCommand::USER_DESC_SET:
      return stream << "USER_DESC_SET";
    case ZdoCommand::SERVER_DISC_REQ:
      return stream << "SERVER_DISC_REQ";
    case ZdoCommand::END_DEVICE_BIND_REQ:
      return stream << "END_DEVICE_BIND_REQ";
    case ZdoCommand::BIND_REQ:
      return stream << "BIND_REQ";
    case ZdoCommand::UNBIND_REQ:
      return stream << "UNBIND_REQ";
    case ZdoCommand::SET_LINK_KEY:
      return stream << "SET_LINK_KEY";
    case ZdoCommand::REMOVE_LINK_KEY:
      return stream << "REMOVE_LINK_KEY";
    case ZdoCommand::GET_LINK_KEY:
      return stream << "GET_LINK_KEY";
    case ZdoCommand::MGMT_NWK_DISC_REQ:
      return stream << "MGMT_NWK_DISC_REQ";
    case ZdoCommand::MGMT_LQI_REQ:
      return stream << "MGMT_LQI_REQ";
    case ZdoCommand::MGMT_RTQ_REQ:
      return stream << "MGMT_RTQ_REQ";
    case ZdoCommand::MGMT_BIND_REQ:
      return stream << "MGMT_BIND_REQ";
    case ZdoCommand::MGMT_LEAVE_REQ:
      return stream << "MGMT_LEAVE_REQ";
    case ZdoCommand::MGMT_DIRECT_JOIN_REQ:
      return stream << "MGMT_DIRECT_JOIN_REQ";
    case ZdoCommand::MGMT_PERMIT_JOIN_REQ:
      return stream << "MGMT_PERMIT_JOIN_REQ";
    case ZdoCommand::MGMT_NWK_UPDATE_REQ:
      return stream << "MGMT_NWK_UPDATE_REQ";
    case ZdoCommand::MSG_CB_REGISTER:
      return stream << "MSG_CB_REGISTER";
    case ZdoCommand::MGS_CB_REMOVE:
      return stream << "MGS_CB_REMOVE";
    case ZdoCommand::STARTUP_FROM_APP:
      return stream << "STARTUP_FROM_APP";
    case ZdoCommand::AUTO_FIND_DESTINATION:
      return stream << "AUTO_FIND_DESTINATION";
    case ZdoCommand::NWK_ADDR_RSP:
      return stream << "NWK_ADDR_RSP";
    case ZdoCommand::IEEE_ADDR_RSP:
      return stream << "IEEE_ADDR_RSP";
    case ZdoCommand::NODE_DESC_RSP:
      return stream << "NODE_DESC_RSP";
    case ZdoCommand::POWER_DESC_RSP:
      return stream << "POWER_DESC_RSP";
    case ZdoCommand::SIMPLE_DESC_RSP:
      return stream << "SIMPLE_DESC_RSP";
    case ZdoCommand::ACTIVE_EP_RSP:
      return stream << "ACTIVE_EP_RSP";
    case ZdoCommand::MATCH_DESC_RSP:
      return stream << "MATCH_DESC_RSP";
    case ZdoCommand::COMPLEX_DESC_RSP:
      return stream << "COMPLEX_DESC_RSP";
    case ZdoCommand::USER_DESC_RSP:
      return stream << "USER_DESC_RSP";
    case ZdoCommand::USER_DESC_CONF:
      return stream << "USER_DESC_CONF";
    case ZdoCommand::SERVER_DISC_RSP:
      return stream << "SERVER_DISC_RSP";
    case ZdoCommand::END_DEVICE_BIND_RSP:
      return stream << "END_DEVICE_BIND_RSP";
    case ZdoCommand::BIND_RSP:
      return stream << "BIND_RSP";
    case ZdoCommand::UNBIND_RSP:
      return stream << "UNBIND_RSP";
    case ZdoCommand::MGMT_NWK_DISC_RSP:
      return stream << "MGMT_NWK_DISC_RSP";
    case ZdoCommand::MGMT_LQI_RSP:
      return stream << "MGMT_LQI_RSP";
    case ZdoCommand::MGMT_RTG_RSP:
      return stream << "MGMT_RTG_RSP";
    case ZdoCommand::MGMT_BIND_RSP:
      return stream << "MGMT_BIND_RSP";
    case ZdoCommand::MGMT_LEAVE_RSP:
      return stream << "MGMT_LEAVE_RSP";
    case ZdoCommand::MGMT_DIRECT_JOIN_RSP:
      return stream << "MGMT_DIRECT_JOIN_RSP";
    case ZdoCommand::MGMT_PERMIT_JOIN_RSP:
      return stream << "MGMT_PERMIT_JOIN_RSP";
    case ZdoCommand::STATE_CHANGE_IND:
      return stream << "STATE_CHANGE_IND";
    case ZdoCommand::END_DEVICE_ANNCE_IND:
      return stream << "END_DEVICE_ANNCE_IND";
    case ZdoCommand::MATCH_DESC_RSP_SENT:
      return stream << "MATCH_DESC_RSP_SENT";
    case ZdoCommand::STATUS_ERROR_RSP:
      return stream << "STATUS_ERROR_RSP";
    case ZdoCommand::SRC_RTG_IND:
      return stream << "SRC_RTG_IND";
	case ZdoCommand::LEAVE_IND:
	  return stream << "LEAVE_IND";
	case ZdoCommand::TC_DEV_IND:
	  return stream << "TC_DEV_IND";
	case ZdoCommand::PERMIT_JOIN_IND:
	  return stream << "PERMIT_JOIN_IND";
    case ZdoCommand::MSG_CB_INCOMING:
      return stream << "MSG_CB_INCOMING";
    default:
      return stream << "ZdoCommand(" << (unsigned int)command << ")";
  }
}

std::ostream& operator<<(std::ostream& stream, SapiCommand command) {
  switch (command) {
    case SapiCommand::START_REQUEST:
      return stream << "START_REQUEST";
    case SapiCommand::BIND_DEVICE:
      return stream << "BIND_DEVICE";
    case SapiCommand::ALLOW_BIND:
      return stream << "ALLOW_BIND";
    case SapiCommand::SEND_DATA_REQUEST:
      return stream << "SEND_DATA_REQUEST";
    case SapiCommand::READ_CONFIGURATION:
      return stream << "READ_CONFIGURATION";
    case SapiCommand::WRITE_CONFIGURATION:
      return stream << "WRITE_CONFIGURATION";
    case SapiCommand::GET_DEVICE_INFO:
      return stream << "GET_DEVICE_INFO";
    case SapiCommand::FIND_DEVICE_REQUEST:
      return stream << "FIND_DEVICE_REQUEST";
    case SapiCommand::PERMIT_JOINING_REQUEST:
      return stream << "PERMIT_JOINING_REQUEST";
    case SapiCommand::SYSTEM_RESET:
      return stream << "SYSTEM_RESET";
    case SapiCommand::START_CONFIRM:
      return stream << "START_CONFIRM";
    case SapiCommand::BIND_CONFIRM:
      return stream << "BIND_CONFIRM";
    case SapiCommand::ALLOW_BIND_CONFIRM:
      return stream << "ALLOW_BIND_CONFIRM";
    case SapiCommand::SEND_DATA_CONFIRM:
      return stream << "SEND_DATA_CONFIRM";
    case SapiCommand::FIND_DEVICE_CONFIRM:
      return stream << "FIND_DEVICE_CONFIRM";
    case SapiCommand::RECEIVE_DATA_INDICATION:
      return stream << "RECEIVE_DATA_INDICATION";
    default:
      return stream << "SapiCommand(" << (unsigned int)command << ")";
  }
}
}  // namespace znp
