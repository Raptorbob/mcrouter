/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */

namespace hellogoodbye {
namespace thrift {

template <class Writer>
void HelloRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key_ref());
  writer.writeField(2 /* field id */, shardId_ref());
  writer.writeField(3 /* field id */, deadlineMs_ref());
  writer.writeField(4 /* field id */, message_ref());
  writer.writeField(5 /* field id */, priority_ref());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void HelloRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", *this->key_ref())) {
    return;
  }
  if (!v.visitField(2, "shardId", *this->shardId_ref())) {
    return;
  }
  if (!v.visitField(3, "deadlineMs", *this->deadlineMs_ref())) {
    return;
  }
  if (!v.visitField(4, "message", *this->message_ref())) {
    return;
  }
  if (!v.visitField(5, "priority", *this->priority_ref())) {
    return;
  }
}

template <class V>
void HelloRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", *this->key_ref())) {
    return;
  }
  if (!v.visitField(2, "shardId", *this->shardId_ref())) {
    return;
  }
  if (!v.visitField(3, "deadlineMs", *this->deadlineMs_ref())) {
    return;
  }
  if (!v.visitField(4, "message", *this->message_ref())) {
    return;
  }
  if (!v.visitField(5, "priority", *this->priority_ref())) {
    return;
  }
}

template <class Writer>
void HelloReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result_ref());
  writer.writeField(2 /* field id */, message_ref());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void HelloReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", *this->result_ref())) {
    return;
  }
  if (!v.visitField(2, "message", *this->message_ref())) {
    return;
  }
}

template <class V>
void HelloReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", *this->result_ref())) {
    return;
  }
  if (!v.visitField(2, "message", *this->message_ref())) {
    return;
  }
}

template <class Writer>
void GoodbyeRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key_ref());
  writer.writeField(2 /* field id */, shardId_ref());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void GoodbyeRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", *this->key_ref())) {
    return;
  }
  if (!v.visitField(2, "shardId", *this->shardId_ref())) {
    return;
  }
}

template <class V>
void GoodbyeRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", *this->key_ref())) {
    return;
  }
  if (!v.visitField(2, "shardId", *this->shardId_ref())) {
    return;
  }
}

template <class Writer>
void GoodbyeReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result_ref());
  writer.writeField(2 /* field id */, message_ref());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void GoodbyeReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", *this->result_ref())) {
    return;
  }
  if (!v.visitField(2, "message", *this->message_ref())) {
    return;
  }
}

template <class V>
void GoodbyeReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", *this->result_ref())) {
    return;
  }
  if (!v.visitField(2, "message", *this->message_ref())) {
    return;
  }
}
} // namespace thrift
} // namespace hellogoodbye

namespace apache {
namespace thrift {
template <>
class Cpp2Ops<hellogoodbye::HelloRequest> {
 public:
  typedef hellogoodbye::HelloRequest Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->read(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<hellogoodbye::HelloReply> {
 public:
  typedef hellogoodbye::HelloReply Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->read(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<hellogoodbye::GoodbyeRequest> {
 public:
  typedef hellogoodbye::GoodbyeRequest Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->read(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<hellogoodbye::GoodbyeReply> {
 public:
  typedef hellogoodbye::GoodbyeReply Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->read(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};
} // namespace thrift
} // namespace apache
