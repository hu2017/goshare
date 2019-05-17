// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: binding.proto

#ifndef PROTOBUF_INCLUDED_binding_2eproto
#define PROTOBUF_INCLUDED_binding_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_binding_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_binding_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_binding_2eproto();
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
namespace pb {

enum BindingMessageType {
  CTP_CREATE_API = 0,
  CTP_RSP_CREATE_API = 1,
  CTP_REQ_CALL_INIT = 2,
  CTP_RSP_CALL_INIT = 3,
  CTP_REQ_USER_LOGIN = 4,
  CTP_RSP_USER_LOGIN = 5,
  CTP_REQ_SUBSCRIBE_MARKET_DATA = 6,
  CTP_RSP_SUBSCRIBE_MARKET_DATA = 7,
  CTP_ON_FRONT_CONNECTED = 8,
  CTP_ON_FRONT_DISCONNECTED = 9,
  CTP_ON_RTN_DEPTH_MARKET_DATA = 10,
  CTP_ON_RTN_ORDER = 11,
  CTP_ON_RTN_TRADE = 12,
  CTP_DELETE_API = 13,
  CTP_REQ_INSERT_ORDER = 14,
  CTP_REQ_CANCEL_ORDER = 15,
  CTP_REQ_QRY_TRADING_ACCOUNT = 16,
  CTP_REQ_QRY_POSITION_DETAIL = 17,
  CTP_REQ_QRY_COMMISSION_RATE = 18,
  CTP_REQ_QRY_MARGIN_RATE = 19,
  CTP_REQ_CONNECT = 20,
  CTP_REQ_AUTHENTICATE = 21,
  CTP_REQ_SETTLEMENT_INFO_CONFIRM = 22,
  CTP_REQ_QRY_INVESTOR = 23,
  CTP_REQ_QRY_TRANSFER_BANK = 24,
  CTP_REQ_TRANSFER = 25,
  CTP_REQ_QRY_ACCOUNT_REGISTER = 26,
  CTP_REQ_UNSUBSCRIBE_MARKET_DATA = 27,
  CTP_RSP_UNSUBSCRIBE_MARKET_DATA = 28,
  CTP_REQ_DISCONNECT = 29,
  CTP_ON_RSP_ORDER_INSERT = 30,
  CTP_REQ_QRY_INSTRUMENT = 31,
  CTP_ON_RSP_QRY_INSTRUMENT = 32,
  BindingMessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  BindingMessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool BindingMessageType_IsValid(int value);
const BindingMessageType BindingMessageType_MIN = CTP_CREATE_API;
const BindingMessageType BindingMessageType_MAX = CTP_ON_RSP_QRY_INSTRUMENT;
const int BindingMessageType_ARRAYSIZE = BindingMessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BindingMessageType_descriptor();
inline const ::std::string& BindingMessageType_Name(BindingMessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BindingMessageType_descriptor(), value);
}
inline bool BindingMessageType_Parse(
    const ::std::string& name, BindingMessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BindingMessageType>(
    BindingMessageType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::pb::BindingMessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::pb::BindingMessageType>() {
  return ::pb::BindingMessageType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_binding_2eproto
