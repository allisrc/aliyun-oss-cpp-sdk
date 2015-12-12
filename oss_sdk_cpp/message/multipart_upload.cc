/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "oss_sdk_cpp/message/multipart_upload.h"

namespace oss {

const std::string& MultipartUpload::GetKey() const {
  return key;
}

void MultipartUpload::SetKey(const std::string& val) {
  key = val;
}

const std::string& MultipartUpload::GetUploadId() const {
  return upload_id_;
}

void MultipartUpload::SetUploadId(const std::string& upload_id) {
  upload_id_ = upload_id;
}

const std::string& MultipartUpload::GetInitiated() const {
  return initiated_;
}

void MultipartUpload::SetInitiated(const std::string& initiated) {
  initiated_ = initiated;
}

}  // namespace oss
