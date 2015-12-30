// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rcon.proto

#ifndef PROTOBUF_rcon_2eproto__INCLUDED
#define PROTOBUF_rcon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "referee.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rcon_2eproto();
void protobuf_AssignDesc_rcon_2eproto();
void protobuf_ShutdownFile_rcon_2eproto();

class SSL_RefereeRemoteControlRequest;
class SSL_RefereeRemoteControlReply;

enum SSL_RefereeRemoteControlRequest_CardType {
  SSL_RefereeRemoteControlRequest_CardType_CARD_YELLOW = 0,
  SSL_RefereeRemoteControlRequest_CardType_CARD_RED = 1
};
bool SSL_RefereeRemoteControlRequest_CardType_IsValid(int value);
const SSL_RefereeRemoteControlRequest_CardType SSL_RefereeRemoteControlRequest_CardType_CardType_MIN = SSL_RefereeRemoteControlRequest_CardType_CARD_YELLOW;
const SSL_RefereeRemoteControlRequest_CardType SSL_RefereeRemoteControlRequest_CardType_CardType_MAX = SSL_RefereeRemoteControlRequest_CardType_CARD_RED;
const int SSL_RefereeRemoteControlRequest_CardType_CardType_ARRAYSIZE = SSL_RefereeRemoteControlRequest_CardType_CardType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SSL_RefereeRemoteControlRequest_CardType_descriptor();
inline const ::std::string& SSL_RefereeRemoteControlRequest_CardType_Name(SSL_RefereeRemoteControlRequest_CardType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SSL_RefereeRemoteControlRequest_CardType_descriptor(), value);
}
inline bool SSL_RefereeRemoteControlRequest_CardType_Parse(
    const ::std::string& name, SSL_RefereeRemoteControlRequest_CardType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SSL_RefereeRemoteControlRequest_CardType>(
    SSL_RefereeRemoteControlRequest_CardType_descriptor(), name, value);
}
enum SSL_RefereeRemoteControlRequest_CardTeam {
  SSL_RefereeRemoteControlRequest_CardTeam_TEAM_YELLOW = 0,
  SSL_RefereeRemoteControlRequest_CardTeam_TEAM_BLUE = 1
};
bool SSL_RefereeRemoteControlRequest_CardTeam_IsValid(int value);
const SSL_RefereeRemoteControlRequest_CardTeam SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_MIN = SSL_RefereeRemoteControlRequest_CardTeam_TEAM_YELLOW;
const SSL_RefereeRemoteControlRequest_CardTeam SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_MAX = SSL_RefereeRemoteControlRequest_CardTeam_TEAM_BLUE;
const int SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_ARRAYSIZE = SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_MAX + 1;

const ::google::protobuf::EnumDescriptor* SSL_RefereeRemoteControlRequest_CardTeam_descriptor();
inline const ::std::string& SSL_RefereeRemoteControlRequest_CardTeam_Name(SSL_RefereeRemoteControlRequest_CardTeam value) {
  return ::google::protobuf::internal::NameOfEnum(
    SSL_RefereeRemoteControlRequest_CardTeam_descriptor(), value);
}
inline bool SSL_RefereeRemoteControlRequest_CardTeam_Parse(
    const ::std::string& name, SSL_RefereeRemoteControlRequest_CardTeam* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SSL_RefereeRemoteControlRequest_CardTeam>(
    SSL_RefereeRemoteControlRequest_CardTeam_descriptor(), name, value);
}
enum SSL_RefereeRemoteControlReply_Outcome {
  SSL_RefereeRemoteControlReply_Outcome_OK = 0,
  SSL_RefereeRemoteControlReply_Outcome_MULTIPLE_ACTIONS = 1,
  SSL_RefereeRemoteControlReply_Outcome_BAD_STAGE = 2,
  SSL_RefereeRemoteControlReply_Outcome_BAD_COMMAND = 3,
  SSL_RefereeRemoteControlReply_Outcome_BAD_DESIGNATED_POSITION = 4,
  SSL_RefereeRemoteControlReply_Outcome_PARTIAL_CARD = 5,
  SSL_RefereeRemoteControlReply_Outcome_BAD_COMMAND_COUNTER = 6
};
bool SSL_RefereeRemoteControlReply_Outcome_IsValid(int value);
const SSL_RefereeRemoteControlReply_Outcome SSL_RefereeRemoteControlReply_Outcome_Outcome_MIN = SSL_RefereeRemoteControlReply_Outcome_OK;
const SSL_RefereeRemoteControlReply_Outcome SSL_RefereeRemoteControlReply_Outcome_Outcome_MAX = SSL_RefereeRemoteControlReply_Outcome_BAD_COMMAND_COUNTER;
const int SSL_RefereeRemoteControlReply_Outcome_Outcome_ARRAYSIZE = SSL_RefereeRemoteControlReply_Outcome_Outcome_MAX + 1;

const ::google::protobuf::EnumDescriptor* SSL_RefereeRemoteControlReply_Outcome_descriptor();
inline const ::std::string& SSL_RefereeRemoteControlReply_Outcome_Name(SSL_RefereeRemoteControlReply_Outcome value) {
  return ::google::protobuf::internal::NameOfEnum(
    SSL_RefereeRemoteControlReply_Outcome_descriptor(), value);
}
inline bool SSL_RefereeRemoteControlReply_Outcome_Parse(
    const ::std::string& name, SSL_RefereeRemoteControlReply_Outcome* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SSL_RefereeRemoteControlReply_Outcome>(
    SSL_RefereeRemoteControlReply_Outcome_descriptor(), name, value);
}
// ===================================================================

class SSL_RefereeRemoteControlRequest : public ::google::protobuf::Message {
 public:
  SSL_RefereeRemoteControlRequest();
  virtual ~SSL_RefereeRemoteControlRequest();

  SSL_RefereeRemoteControlRequest(const SSL_RefereeRemoteControlRequest& from);

  inline SSL_RefereeRemoteControlRequest& operator=(const SSL_RefereeRemoteControlRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SSL_RefereeRemoteControlRequest& default_instance();

  void Swap(SSL_RefereeRemoteControlRequest* other);

  // implements Message ----------------------------------------------

  SSL_RefereeRemoteControlRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SSL_RefereeRemoteControlRequest& from);
  void MergeFrom(const SSL_RefereeRemoteControlRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SSL_RefereeRemoteControlRequest_CardType CardType;
  static const CardType CARD_YELLOW = SSL_RefereeRemoteControlRequest_CardType_CARD_YELLOW;
  static const CardType CARD_RED = SSL_RefereeRemoteControlRequest_CardType_CARD_RED;
  static inline bool CardType_IsValid(int value) {
    return SSL_RefereeRemoteControlRequest_CardType_IsValid(value);
  }
  static const CardType CardType_MIN =
    SSL_RefereeRemoteControlRequest_CardType_CardType_MIN;
  static const CardType CardType_MAX =
    SSL_RefereeRemoteControlRequest_CardType_CardType_MAX;
  static const int CardType_ARRAYSIZE =
    SSL_RefereeRemoteControlRequest_CardType_CardType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CardType_descriptor() {
    return SSL_RefereeRemoteControlRequest_CardType_descriptor();
  }
  static inline const ::std::string& CardType_Name(CardType value) {
    return SSL_RefereeRemoteControlRequest_CardType_Name(value);
  }
  static inline bool CardType_Parse(const ::std::string& name,
      CardType* value) {
    return SSL_RefereeRemoteControlRequest_CardType_Parse(name, value);
  }

  typedef SSL_RefereeRemoteControlRequest_CardTeam CardTeam;
  static const CardTeam TEAM_YELLOW = SSL_RefereeRemoteControlRequest_CardTeam_TEAM_YELLOW;
  static const CardTeam TEAM_BLUE = SSL_RefereeRemoteControlRequest_CardTeam_TEAM_BLUE;
  static inline bool CardTeam_IsValid(int value) {
    return SSL_RefereeRemoteControlRequest_CardTeam_IsValid(value);
  }
  static const CardTeam CardTeam_MIN =
    SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_MIN;
  static const CardTeam CardTeam_MAX =
    SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_MAX;
  static const int CardTeam_ARRAYSIZE =
    SSL_RefereeRemoteControlRequest_CardTeam_CardTeam_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CardTeam_descriptor() {
    return SSL_RefereeRemoteControlRequest_CardTeam_descriptor();
  }
  static inline const ::std::string& CardTeam_Name(CardTeam value) {
    return SSL_RefereeRemoteControlRequest_CardTeam_Name(value);
  }
  static inline bool CardTeam_Parse(const ::std::string& name,
      CardTeam* value) {
    return SSL_RefereeRemoteControlRequest_CardTeam_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 message_id = 1;
  inline bool has_message_id() const;
  inline void clear_message_id();
  static const int kMessageIdFieldNumber = 1;
  inline ::google::protobuf::uint32 message_id() const;
  inline void set_message_id(::google::protobuf::uint32 value);

  // optional .SSL_Referee.Stage stage = 2;
  inline bool has_stage() const;
  inline void clear_stage();
  static const int kStageFieldNumber = 2;
  inline ::SSL_Referee_Stage stage() const;
  inline void set_stage(::SSL_Referee_Stage value);

  // optional .SSL_Referee.Command command = 3;
  inline bool has_command() const;
  inline void clear_command();
  static const int kCommandFieldNumber = 3;
  inline ::SSL_Referee_Command command() const;
  inline void set_command(::SSL_Referee_Command value);

  // optional float designated_x = 4;
  inline bool has_designated_x() const;
  inline void clear_designated_x();
  static const int kDesignatedXFieldNumber = 4;
  inline float designated_x() const;
  inline void set_designated_x(float value);

  // optional float designated_y = 5;
  inline bool has_designated_y() const;
  inline void clear_designated_y();
  static const int kDesignatedYFieldNumber = 5;
  inline float designated_y() const;
  inline void set_designated_y(float value);

  // optional .SSL_RefereeRemoteControlRequest.CardType card_type = 6;
  inline bool has_card_type() const;
  inline void clear_card_type();
  static const int kCardTypeFieldNumber = 6;
  inline ::SSL_RefereeRemoteControlRequest_CardType card_type() const;
  inline void set_card_type(::SSL_RefereeRemoteControlRequest_CardType value);

  // optional .SSL_RefereeRemoteControlRequest.CardTeam card_team = 7;
  inline bool has_card_team() const;
  inline void clear_card_team();
  static const int kCardTeamFieldNumber = 7;
  inline ::SSL_RefereeRemoteControlRequest_CardTeam card_team() const;
  inline void set_card_team(::SSL_RefereeRemoteControlRequest_CardTeam value);

  // optional uint32 last_command_counter = 8;
  inline bool has_last_command_counter() const;
  inline void clear_last_command_counter();
  static const int kLastCommandCounterFieldNumber = 8;
  inline ::google::protobuf::uint32 last_command_counter() const;
  inline void set_last_command_counter(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SSL_RefereeRemoteControlRequest)
 private:
  inline void set_has_message_id();
  inline void clear_has_message_id();
  inline void set_has_stage();
  inline void clear_has_stage();
  inline void set_has_command();
  inline void clear_has_command();
  inline void set_has_designated_x();
  inline void clear_has_designated_x();
  inline void set_has_designated_y();
  inline void clear_has_designated_y();
  inline void set_has_card_type();
  inline void clear_has_card_type();
  inline void set_has_card_team();
  inline void clear_has_card_team();
  inline void set_has_last_command_counter();
  inline void clear_has_last_command_counter();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 message_id_;
  int stage_;
  int command_;
  float designated_x_;
  float designated_y_;
  int card_type_;
  int card_team_;
  ::google::protobuf::uint32 last_command_counter_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_rcon_2eproto();
  friend void protobuf_AssignDesc_rcon_2eproto();
  friend void protobuf_ShutdownFile_rcon_2eproto();

  void InitAsDefaultInstance();
  static SSL_RefereeRemoteControlRequest* default_instance_;
};
// -------------------------------------------------------------------

class SSL_RefereeRemoteControlReply : public ::google::protobuf::Message {
 public:
  SSL_RefereeRemoteControlReply();
  virtual ~SSL_RefereeRemoteControlReply();

  SSL_RefereeRemoteControlReply(const SSL_RefereeRemoteControlReply& from);

  inline SSL_RefereeRemoteControlReply& operator=(const SSL_RefereeRemoteControlReply& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SSL_RefereeRemoteControlReply& default_instance();

  void Swap(SSL_RefereeRemoteControlReply* other);

  // implements Message ----------------------------------------------

  SSL_RefereeRemoteControlReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SSL_RefereeRemoteControlReply& from);
  void MergeFrom(const SSL_RefereeRemoteControlReply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SSL_RefereeRemoteControlReply_Outcome Outcome;
  static const Outcome OK = SSL_RefereeRemoteControlReply_Outcome_OK;
  static const Outcome MULTIPLE_ACTIONS = SSL_RefereeRemoteControlReply_Outcome_MULTIPLE_ACTIONS;
  static const Outcome BAD_STAGE = SSL_RefereeRemoteControlReply_Outcome_BAD_STAGE;
  static const Outcome BAD_COMMAND = SSL_RefereeRemoteControlReply_Outcome_BAD_COMMAND;
  static const Outcome BAD_DESIGNATED_POSITION = SSL_RefereeRemoteControlReply_Outcome_BAD_DESIGNATED_POSITION;
  static const Outcome PARTIAL_CARD = SSL_RefereeRemoteControlReply_Outcome_PARTIAL_CARD;
  static const Outcome BAD_COMMAND_COUNTER = SSL_RefereeRemoteControlReply_Outcome_BAD_COMMAND_COUNTER;
  static inline bool Outcome_IsValid(int value) {
    return SSL_RefereeRemoteControlReply_Outcome_IsValid(value);
  }
  static const Outcome Outcome_MIN =
    SSL_RefereeRemoteControlReply_Outcome_Outcome_MIN;
  static const Outcome Outcome_MAX =
    SSL_RefereeRemoteControlReply_Outcome_Outcome_MAX;
  static const int Outcome_ARRAYSIZE =
    SSL_RefereeRemoteControlReply_Outcome_Outcome_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Outcome_descriptor() {
    return SSL_RefereeRemoteControlReply_Outcome_descriptor();
  }
  static inline const ::std::string& Outcome_Name(Outcome value) {
    return SSL_RefereeRemoteControlReply_Outcome_Name(value);
  }
  static inline bool Outcome_Parse(const ::std::string& name,
      Outcome* value) {
    return SSL_RefereeRemoteControlReply_Outcome_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 message_id = 1;
  inline bool has_message_id() const;
  inline void clear_message_id();
  static const int kMessageIdFieldNumber = 1;
  inline ::google::protobuf::uint32 message_id() const;
  inline void set_message_id(::google::protobuf::uint32 value);

  // required .SSL_RefereeRemoteControlReply.Outcome outcome = 2;
  inline bool has_outcome() const;
  inline void clear_outcome();
  static const int kOutcomeFieldNumber = 2;
  inline ::SSL_RefereeRemoteControlReply_Outcome outcome() const;
  inline void set_outcome(::SSL_RefereeRemoteControlReply_Outcome value);

  // @@protoc_insertion_point(class_scope:SSL_RefereeRemoteControlReply)
 private:
  inline void set_has_message_id();
  inline void clear_has_message_id();
  inline void set_has_outcome();
  inline void clear_has_outcome();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 message_id_;
  int outcome_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_rcon_2eproto();
  friend void protobuf_AssignDesc_rcon_2eproto();
  friend void protobuf_ShutdownFile_rcon_2eproto();

  void InitAsDefaultInstance();
  static SSL_RefereeRemoteControlReply* default_instance_;
};
// ===================================================================


// ===================================================================

// SSL_RefereeRemoteControlRequest

// required uint32 message_id = 1;
inline bool SSL_RefereeRemoteControlRequest::has_message_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_message_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_message_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SSL_RefereeRemoteControlRequest::clear_message_id() {
  message_id_ = 0u;
  clear_has_message_id();
}
inline ::google::protobuf::uint32 SSL_RefereeRemoteControlRequest::message_id() const {
  return message_id_;
}
inline void SSL_RefereeRemoteControlRequest::set_message_id(::google::protobuf::uint32 value) {
  set_has_message_id();
  message_id_ = value;
}

// optional .SSL_Referee.Stage stage = 2;
inline bool SSL_RefereeRemoteControlRequest::has_stage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_stage() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_stage() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SSL_RefereeRemoteControlRequest::clear_stage() {
  stage_ = 0;
  clear_has_stage();
}
inline ::SSL_Referee_Stage SSL_RefereeRemoteControlRequest::stage() const {
  return static_cast< ::SSL_Referee_Stage >(stage_);
}
inline void SSL_RefereeRemoteControlRequest::set_stage(::SSL_Referee_Stage value) {
  assert(::SSL_Referee_Stage_IsValid(value));
  set_has_stage();
  stage_ = value;
}

// optional .SSL_Referee.Command command = 3;
inline bool SSL_RefereeRemoteControlRequest::has_command() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_command() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_command() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SSL_RefereeRemoteControlRequest::clear_command() {
  command_ = 0;
  clear_has_command();
}
inline ::SSL_Referee_Command SSL_RefereeRemoteControlRequest::command() const {
  return static_cast< ::SSL_Referee_Command >(command_);
}
inline void SSL_RefereeRemoteControlRequest::set_command(::SSL_Referee_Command value) {
  assert(::SSL_Referee_Command_IsValid(value));
  set_has_command();
  command_ = value;
}

// optional float designated_x = 4;
inline bool SSL_RefereeRemoteControlRequest::has_designated_x() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_designated_x() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_designated_x() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SSL_RefereeRemoteControlRequest::clear_designated_x() {
  designated_x_ = 0;
  clear_has_designated_x();
}
inline float SSL_RefereeRemoteControlRequest::designated_x() const {
  return designated_x_;
}
inline void SSL_RefereeRemoteControlRequest::set_designated_x(float value) {
  set_has_designated_x();
  designated_x_ = value;
}

// optional float designated_y = 5;
inline bool SSL_RefereeRemoteControlRequest::has_designated_y() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_designated_y() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_designated_y() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SSL_RefereeRemoteControlRequest::clear_designated_y() {
  designated_y_ = 0;
  clear_has_designated_y();
}
inline float SSL_RefereeRemoteControlRequest::designated_y() const {
  return designated_y_;
}
inline void SSL_RefereeRemoteControlRequest::set_designated_y(float value) {
  set_has_designated_y();
  designated_y_ = value;
}

// optional .SSL_RefereeRemoteControlRequest.CardType card_type = 6;
inline bool SSL_RefereeRemoteControlRequest::has_card_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_card_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_card_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SSL_RefereeRemoteControlRequest::clear_card_type() {
  card_type_ = 0;
  clear_has_card_type();
}
inline ::SSL_RefereeRemoteControlRequest_CardType SSL_RefereeRemoteControlRequest::card_type() const {
  return static_cast< ::SSL_RefereeRemoteControlRequest_CardType >(card_type_);
}
inline void SSL_RefereeRemoteControlRequest::set_card_type(::SSL_RefereeRemoteControlRequest_CardType value) {
  assert(::SSL_RefereeRemoteControlRequest_CardType_IsValid(value));
  set_has_card_type();
  card_type_ = value;
}

// optional .SSL_RefereeRemoteControlRequest.CardTeam card_team = 7;
inline bool SSL_RefereeRemoteControlRequest::has_card_team() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_card_team() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_card_team() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SSL_RefereeRemoteControlRequest::clear_card_team() {
  card_team_ = 0;
  clear_has_card_team();
}
inline ::SSL_RefereeRemoteControlRequest_CardTeam SSL_RefereeRemoteControlRequest::card_team() const {
  return static_cast< ::SSL_RefereeRemoteControlRequest_CardTeam >(card_team_);
}
inline void SSL_RefereeRemoteControlRequest::set_card_team(::SSL_RefereeRemoteControlRequest_CardTeam value) {
  assert(::SSL_RefereeRemoteControlRequest_CardTeam_IsValid(value));
  set_has_card_team();
  card_team_ = value;
}

// optional uint32 last_command_counter = 8;
inline bool SSL_RefereeRemoteControlRequest::has_last_command_counter() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SSL_RefereeRemoteControlRequest::set_has_last_command_counter() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SSL_RefereeRemoteControlRequest::clear_has_last_command_counter() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SSL_RefereeRemoteControlRequest::clear_last_command_counter() {
  last_command_counter_ = 0u;
  clear_has_last_command_counter();
}
inline ::google::protobuf::uint32 SSL_RefereeRemoteControlRequest::last_command_counter() const {
  return last_command_counter_;
}
inline void SSL_RefereeRemoteControlRequest::set_last_command_counter(::google::protobuf::uint32 value) {
  set_has_last_command_counter();
  last_command_counter_ = value;
}

// -------------------------------------------------------------------

// SSL_RefereeRemoteControlReply

// required uint32 message_id = 1;
inline bool SSL_RefereeRemoteControlReply::has_message_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SSL_RefereeRemoteControlReply::set_has_message_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SSL_RefereeRemoteControlReply::clear_has_message_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SSL_RefereeRemoteControlReply::clear_message_id() {
  message_id_ = 0u;
  clear_has_message_id();
}
inline ::google::protobuf::uint32 SSL_RefereeRemoteControlReply::message_id() const {
  return message_id_;
}
inline void SSL_RefereeRemoteControlReply::set_message_id(::google::protobuf::uint32 value) {
  set_has_message_id();
  message_id_ = value;
}

// required .SSL_RefereeRemoteControlReply.Outcome outcome = 2;
inline bool SSL_RefereeRemoteControlReply::has_outcome() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SSL_RefereeRemoteControlReply::set_has_outcome() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SSL_RefereeRemoteControlReply::clear_has_outcome() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SSL_RefereeRemoteControlReply::clear_outcome() {
  outcome_ = 0;
  clear_has_outcome();
}
inline ::SSL_RefereeRemoteControlReply_Outcome SSL_RefereeRemoteControlReply::outcome() const {
  return static_cast< ::SSL_RefereeRemoteControlReply_Outcome >(outcome_);
}
inline void SSL_RefereeRemoteControlReply::set_outcome(::SSL_RefereeRemoteControlReply_Outcome value) {
  assert(::SSL_RefereeRemoteControlReply_Outcome_IsValid(value));
  set_has_outcome();
  outcome_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_RefereeRemoteControlRequest_CardType>() {
  return ::SSL_RefereeRemoteControlRequest_CardType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_RefereeRemoteControlRequest_CardTeam>() {
  return ::SSL_RefereeRemoteControlRequest_CardTeam_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_RefereeRemoteControlReply_Outcome>() {
  return ::SSL_RefereeRemoteControlReply_Outcome_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rcon_2eproto__INCLUDED
